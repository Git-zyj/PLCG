/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120932
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_1 + 1]))))), ((-(max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_4 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_2] [i_1 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) max(((unsigned char)66), ((unsigned char)208)))) : ((-(((/* implicit */int) arr_8 [(_Bool)1] [i_2] [i_1 + 1]))))));
                                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_12)) : (arr_9 [i_1] [i_4] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))), (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)179)), (var_15)))))), (((/* implicit */long long int) min((((/* implicit */int) ((short) arr_12 [i_3] [i_4]))), ((+(((/* implicit */int) var_4))))))))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_1)) : (var_10))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 252201579132747776LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2]))) : (var_10))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 &= ((/* implicit */signed char) min((((((_Bool) var_6)) ? (((/* implicit */int) ((short) var_15))) : ((~(var_15))))), (((/* implicit */int) ((signed char) var_13)))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_15))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 2386796070547506107ULL)) ? (((/* implicit */long long int) var_0)) : (-252201579132747776LL))))) ? (((var_2) / ((~(var_2))))) : (((/* implicit */unsigned long long int) var_13))));
    var_25 = ((/* implicit */_Bool) ((unsigned long long int) var_1));
}
