/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17849
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1 - 2] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_10 [i_0])) ? (787847696U) : (((/* implicit */unsigned int) arr_10 [i_0])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
                                arr_17 [i_0] [i_4] [i_0] [i_0] [i_0 + 1] [i_2] = ((/* implicit */int) (((((-(arr_13 [i_0] [10ULL]))) / (((/* implicit */long long int) (+(((/* implicit */int) (short)-11101))))))) / (((/* implicit */long long int) (+(var_3))))));
                                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_1 + 3] [(unsigned char)12] [i_0])) : (((/* implicit */int) ((short) 3507119599U)))));
                                arr_18 [i_0] [6U] [i_0] [i_0] [(short)12] [i_0] [i_0] = ((/* implicit */short) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) * (var_4))))), (((/* implicit */unsigned long long int) min(((short)-10873), ((short)-1))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) 3507119599U)) ? (((/* implicit */unsigned long long int) 3507119599U)) : (var_4))), (((/* implicit */unsigned long long int) arr_7 [10ULL] [10ULL] [i_0] [i_1])))), (max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (var_3))))))));
                var_12 = ((/* implicit */unsigned char) ((var_0) != (((/* implicit */unsigned long long int) var_1))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) -1632579072);
}
