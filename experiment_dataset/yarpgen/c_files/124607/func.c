/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124607
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) min((var_1), (max((((((/* implicit */_Bool) (unsigned char)50)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-76))))), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)407)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_17 [i_4] [i_0] [i_2] [i_3] [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max(((short)-407), (((/* implicit */short) (unsigned char)11))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_2 - 1])) : (((/* implicit */int) arr_3 [i_2 + 1]))))));
                                arr_18 [i_0] [(unsigned char)6] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) var_8)), (max((((/* implicit */short) (unsigned char)244)), ((short)12288)))))) ? (max((((/* implicit */long long int) arr_14 [i_2] [i_2] [i_2 - 2] [i_2] [i_2])), (((((/* implicit */_Bool) (short)-408)) ? (0LL) : (1099511627774LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_3 [(unsigned char)7]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_4)))) ? (((/* implicit */int) (unsigned char)236)) : (((arr_13 [i_0] [i_0] [i_2] [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((min((max((var_6), (((/* implicit */unsigned long long int) var_0)))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_1] [i_2]))) : (var_1))))), (min((var_6), (var_1))))))));
                    arr_19 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)0)))), (arr_14 [i_1] [i_1 - 3] [2LL] [i_1 - 3] [i_1])))), (var_4)));
                }
            } 
        } 
    } 
    var_14 = max((((/* implicit */unsigned long long int) (short)12316)), (min((((/* implicit */unsigned long long int) (unsigned char)0)), (var_2))));
}
