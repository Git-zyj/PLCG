/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150173
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)26164)))) / ((-2147483647 - 1)))))));
                arr_5 [i_0] = ((/* implicit */long long int) min(((unsigned short)59197), ((unsigned short)6345)));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4])) && (((/* implicit */_Bool) 3120414071200618731LL))))))))));
                                arr_15 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((3295094617U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_4 - 3] [i_2] [6])))))) & (((/* implicit */int) min(((unsigned short)7506), (((/* implicit */unsigned short) (short)32767)))))));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = arr_7 [i_0] [i_3] [i_2];
                                arr_17 [(short)8] [(short)8] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (short)-18754);
                            }
                        } 
                    } 
                } 
                arr_18 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
            }
        } 
    } 
    var_15 = ((/* implicit */short) -1893389946);
    var_16 = ((/* implicit */long long int) var_8);
}
