/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100758
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
    for (long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1]))))) - (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */int) arr_0 [i_0]))))), (arr_1 [i_1 - 1])))));
                var_16 = ((/* implicit */int) min((((/* implicit */long long int) var_6)), (((var_4) ? (arr_1 [(short)12]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0 + 1] [i_1 + 1])))))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_17 *= ((/* implicit */long long int) max((max((arr_4 [i_0 + 2] [i_1 - 1]), (arr_4 [i_0 - 4] [i_1 + 1]))), (((/* implicit */signed char) var_7))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_18 = ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [(signed char)8] [i_3]))) | (var_1));
                                var_19 = ((/* implicit */signed char) ((20) << (((-7917871275309601001LL) + (7917871275309601006LL)))));
                            }
                        } 
                    } 
                }
                for (short i_5 = 2; i_5 < 17; i_5 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) arr_7 [i_1] [(short)15] [(short)15] [(short)4]);
                    var_21 = max((var_1), (((((/* implicit */long long int) ((/* implicit */int) var_7))) | ((+(-6539547236351480363LL))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_4))));
                }
                for (short i_6 = 2; i_6 < 17; i_6 += 4) /* same iter space */
                {
                    var_23 = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (arr_13 [i_1] [i_1])))) ? (min((arr_9 [i_0 - 1] [i_0] [i_0] [i_1] [i_1] [i_6 + 2]), (arr_9 [i_0] [i_1 + 1] [i_6] [i_1] [i_6 + 4] [i_6 + 3]))) : (((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_6])));
                    var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) 7917871275309601004LL))));
                    var_25 = ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1]))) | (var_0))) + (((/* implicit */long long int) arr_18 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_6 + 4] [i_6 + 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_1] [i_6 + 4] [i_6 + 4])))) : (((/* implicit */int) arr_4 [i_0 - 4] [i_1 - 1])));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) max((((/* implicit */long long int) max((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1])))))))), (var_0))))));
                    var_27 = ((/* implicit */short) min((19LL), (((/* implicit */long long int) (short)32208))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) var_12);
}
