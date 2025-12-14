/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153594
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */signed char) arr_6 [i_2] [i_2] [i_2 + 1]);
                    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_2 + 1])))));
                    var_18 = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_9 [i_0] [i_1 - 1] [i_2 + 1]) : (arr_6 [i_0] [(short)11] [(short)11]))))), (min((((/* implicit */long long int) var_1)), (arr_9 [i_0 + 2] [i_0 + 2] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (short i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_19 [i_3] [i_3] [i_2] [i_2] [6LL] [i_0 + 3] = ((/* implicit */int) (+((+(((((/* implicit */_Bool) arr_12 [i_0] [(signed char)2] [i_2 - 2] [i_3 - 2])) ? (var_10) : (arr_1 [i_4])))))));
                                var_19 = ((/* implicit */signed char) (-(max((0LL), (((arr_14 [i_2] [i_2] [i_0 + 3]) & (arr_6 [0LL] [0LL] [(short)1])))))));
                                var_20 = ((((/* implicit */_Bool) min((arr_8 [i_0 - 1] [i_2] [i_2]), (arr_8 [i_0] [i_2] [i_4 + 1])))) ? (((/* implicit */long long int) arr_13 [i_0] [10LL] [i_0] [i_2] [i_3 + 2] [i_0])) : (((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_3 + 4] [i_2 - 1])) ? (arr_7 [i_3] [i_3 + 1] [i_3]) : (arr_7 [i_3 - 3] [i_3 - 1] [i_3 - 3]))));
                                arr_20 [i_2] [i_2] [9] [i_2] [i_4 - 1] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (short)-16686)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)84))))))) + (((/* implicit */int) arr_4 [i_0] [i_0]))));
                                var_21 = arr_16 [i_3] [i_3] [8LL] [i_3] [i_3] [i_3];
                            }
                        } 
                    } 
                    var_22 &= ((/* implicit */long long int) (signed char)-1);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((((((/* implicit */_Bool) (signed char)59)) ? (var_2) : (((/* implicit */long long int) var_5)))), (((2452324408812399255LL) >> (((var_14) + (7484953059934503681LL)))))))));
}
