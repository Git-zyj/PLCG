/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101252
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)35)) << (((/* implicit */int) var_3)))), (((((/* implicit */int) var_14)) ^ (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) var_15)) : (((var_4) ? (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) var_1))))) : ((-(((/* implicit */int) var_9)))))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) + (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)8)))) | (((/* implicit */int) var_15))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) ((int) var_5));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_0 [i_1]))));
                    arr_7 [i_2] [i_1] = ((/* implicit */int) arr_4 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min(((_Bool)0), (arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10009))) : (min((16248045810475446275ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (unsigned short)21629))))) ? (((/* implicit */unsigned long long int) -2147483641)) : ((~(2198698263234105340ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_2] [i_4 - 1] [i_4] [i_4] [i_4 + 1] [i_4]) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)56208))))))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_3))));
                                var_22 = ((/* implicit */signed char) ((long long int) min((((/* implicit */unsigned short) arr_0 [i_0])), (arr_12 [i_0]))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_2), ((signed char)1)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = var_2;
}
