/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177512
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
    var_18 = ((/* implicit */_Bool) ((var_2) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_13)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 += ((/* implicit */int) ((short) min((arr_0 [i_2 + 2]), (arr_0 [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [9ULL] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)34165))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) ^ (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_3] [i_3]))))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */long long int) arr_11 [i_1 + 1] [i_4] [i_4] [i_2 - 4] [i_1 + 1]);
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_6 [2LL]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (!((_Bool)1)));
    var_22 ^= ((/* implicit */long long int) max((var_0), (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - ((-(4294967286U)))))));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ^ (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12)))))))));
}
