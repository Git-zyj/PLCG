/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130709
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_10 += ((/* implicit */long long int) (+(max((722136252U), (3572831043U)))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_0 - 3] [i_0] [i_0] [(short)8] [i_0 - 1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_3]))));
                        var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_0 - 3])), (arr_6 [i_0] [i_0 - 2]))))));
                        arr_10 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) (+(((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
            var_12 &= ((/* implicit */int) min((max((((/* implicit */long long int) (-2147483647 - 1))), (-322229461522644472LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (2836616552U))))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_13 = ((/* implicit */int) 722136244U);
                var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_1 [i_0 - 1])));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_15 = ((/* implicit */_Bool) arr_14 [i_0] [0LL] [i_0 - 3] [i_0 + 1]);
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 17; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) 722136252U);
                            var_17 = ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (var_9))) : (-2147483647));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                arr_25 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_5))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (var_1) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */long long int) var_1)) == (6817085514251219209LL))))));
                arr_26 [i_0] [i_0] = ((/* implicit */_Bool) var_9);
            }
            for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (3572831019U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_4] [6]))) | (arr_4 [(short)15] [(short)10])))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_20 |= ((((/* implicit */_Bool) arr_32 [i_0 - 2] [i_0 - 2] [i_0 - 1] [10LL] [i_0 - 3] [i_0 - 1])) ? (arr_32 [i_0 - 2] [i_0 - 2] [i_0 - 1] [6] [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                            var_21 = ((((/* implicit */_Bool) arr_17 [i_0 - 1] [(signed char)11] [i_0 + 2] [i_0 - 3])) ? (((/* implicit */long long int) arr_19 [i_0 + 1] [9LL] [i_0 - 2] [(signed char)13])) : (var_2));
                        }
                    } 
                } 
            }
        }
    }
    var_22 = ((/* implicit */_Bool) var_8);
}
