/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150428
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_6))), (((((var_17) || (var_11))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) (!(var_6))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [6] = ((/* implicit */unsigned long long int) var_5);
                var_20 -= ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */signed char) var_11)), (arr_0 [i_0] [i_0])))) == (((/* implicit */int) arr_2 [i_0]))))) & (((/* implicit */int) var_16)));
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    arr_7 [i_0] = ((/* implicit */int) var_15);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((var_5) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) max((var_17), (var_2)))) & (((((/* implicit */int) var_18)) ^ (((/* implicit */int) var_9))))))));
                    arr_9 [i_0] [i_0] [11ULL] [i_2] = ((/* implicit */signed char) ((arr_1 [i_0 + 1] [i_0 + 1]) && (arr_3 [i_1] [i_2])));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) var_12);
                        var_22 -= ((/* implicit */signed char) var_11);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_3] [i_0]))) >= (var_1))));
                        var_24 = ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_14 [i_0] [i_3] [i_1] [i_1] [i_1] [i_0])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 3; i_6 < 17; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_6]))));
                        arr_18 [i_0 + 1] [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(arr_14 [i_0] [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0])))) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_0 + 2] [(_Bool)1] [i_3] [10])) : (((/* implicit */int) arr_0 [i_0] [i_6 - 3]))))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((var_17) || (((var_3) || (var_5)))));
                            arr_22 [10ULL] [i_0] [i_3] [i_3] [i_3] = (+(((((/* implicit */int) arr_21 [i_0] [i_1] [i_1])) & (((/* implicit */int) var_17)))));
                            var_27 *= ((/* implicit */_Bool) arr_17 [i_7] [i_1] [i_1]);
                            arr_23 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_7);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) ((_Bool) arr_25 [i_0] [i_0 + 1] [i_1] [i_3] [i_6] [i_8]));
                            arr_27 [i_0] [i_0] [i_3] [i_3] = var_5;
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            var_29 ^= ((/* implicit */signed char) ((((unsigned long long int) arr_21 [i_1] [i_1] [i_3])) >> (((/* implicit */int) var_16))));
                            var_30 -= ((/* implicit */_Bool) ((((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9]))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_0] [(_Bool)1] [i_0] [i_0 + 2] [(signed char)14] [i_1])) : (((/* implicit */int) var_4)))))));
                            arr_30 [i_0] [i_1] [i_3] [i_1] = ((_Bool) arr_11 [i_1] [i_1] [i_6 + 1] [i_9]);
                            arr_31 [i_0 - 1] [i_0 - 1] [i_0] [(_Bool)1] [i_9] [i_9] = var_17;
                            var_31 -= ((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_1 [i_1] [i_9]))))));
                        }
                    }
                    var_32 = ((/* implicit */_Bool) max((1152921504590069760ULL), (((/* implicit */unsigned long long int) -2127190157))));
                }
            }
        } 
    } 
    var_33 = ((/* implicit */_Bool) var_14);
    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((int) var_17)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_18)) - (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))))));
}
