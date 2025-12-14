/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127428
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
    var_15 = ((/* implicit */long long int) ((6181807509677275975LL) < (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))))))));
    var_16 = max((((/* implicit */long long int) ((var_7) % (var_5)))), ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_12)) : (6181807509677275975LL))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned int) ((long long int) var_10));
            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) arr_2 [i_1] [i_0])) : (((unsigned int) arr_2 [i_0] [i_0]))))) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (var_9));
            var_19 = ((/* implicit */unsigned int) -1LL);
            arr_6 [i_0] = ((/* implicit */unsigned int) ((7733613498577857189LL) < (((((/* implicit */_Bool) var_12)) ? (var_8) : (arr_5 [i_1 - 1] [i_1])))));
            var_20 = (-(((long long int) (~(-1495231972806609226LL)))));
        }
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -3011699551353592246LL)) ? (max((((/* implicit */long long int) arr_0 [i_0])), (var_11))) : (((/* implicit */long long int) 0U)))) ^ (((/* implicit */long long int) var_5))));
            /* LoopSeq 1 */
            for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                    var_23 = ((/* implicit */unsigned int) 6448850097889513665LL);
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_24 = min((((max((var_9), (((/* implicit */long long int) arr_8 [i_0] [i_0])))) - (var_11))), (max((arr_17 [i_3 - 1] [i_3 + 1] [i_3 + 1]), (arr_17 [i_3 - 1] [i_3 + 1] [i_4]))));
                        var_25 = ((((/* implicit */_Bool) ((long long int) 4294967295U))) ? (((/* implicit */long long int) (+(arr_15 [i_0] [i_3] [i_3 + 2] [i_0])))) : (((long long int) 11LL)));
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 2) 
                    {
                        var_26 -= ((/* implicit */unsigned int) ((var_6) / (((/* implicit */long long int) 2240131684U))));
                        var_27 = ((((/* implicit */_Bool) ((long long int) 1802251988U))) ? (((/* implicit */long long int) ((arr_13 [i_0] [i_3] [i_4] [i_4]) + (var_12)))) : (((long long int) 1495231972806609226LL)));
                        var_28 = ((/* implicit */unsigned int) arr_21 [i_3 + 2] [i_3 + 1] [i_3 + 3] [i_3 + 2] [i_3 + 2] [i_3]);
                        arr_24 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5859525347619468206LL)) ? (var_0) : (var_5)))) && (((/* implicit */_Bool) (~(var_2))))));
                    }
                    arr_25 [i_0] [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) ((arr_12 [i_3 + 3] [i_3 + 2] [i_3 - 1] [i_3 - 1]) + (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -1LL))) ? (((var_2) - (var_0))) : (1773760673U)))) : (((((/* implicit */_Bool) ((long long int) arr_5 [i_4] [i_4]))) ? ((-(var_9))) : (((((/* implicit */_Bool) var_2)) ? (var_4) : (arr_14 [i_2]))))));
                }
                for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
                {
                    arr_29 [i_7] = ((long long int) ((var_8) + (arr_27 [i_0] [i_0] [i_3 + 3] [i_7] [i_3 + 3])));
                    var_29 = ((((/* implicit */_Bool) min((((unsigned int) 4LL)), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_0)) <= (var_3))))))))) : ((~(arr_13 [i_2] [i_7 + 1] [i_7 + 1] [i_7]))));
                    var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 1; i_8 < 17; i_8 += 1) 
                    {
                        var_31 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_8 + 1] [i_3] [i_3 + 3] [i_2])), (arr_32 [i_3 + 1] [i_3 + 1] [i_7 + 2] [i_7 + 1] [i_8 + 1] [i_8 + 1])))) ? (((arr_32 [i_3 + 1] [i_3 - 1] [i_7 - 1] [i_7 - 1] [i_8 + 1] [i_8 + 1]) + (arr_5 [i_8 - 1] [i_8 + 1]))) : (min((var_3), (((/* implicit */long long int) arr_15 [i_8 - 1] [i_8] [i_3 - 1] [i_3 + 2]))))));
                        var_32 = ((/* implicit */long long int) (+(((unsigned int) min((var_4), (((/* implicit */long long int) 3544855922U)))))));
                        var_33 = ((/* implicit */long long int) arr_13 [i_2] [i_2] [i_7] [i_8]);
                    }
                }
                for (unsigned int i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    var_34 += ((/* implicit */unsigned int) min((var_9), (max((((arr_9 [i_0]) / (arr_32 [i_0] [i_0] [i_2] [i_2] [i_3] [i_9]))), (((/* implicit */long long int) ((unsigned int) var_5)))))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        arr_37 [i_0] [i_0] [i_0] [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) max((((min((var_11), (((/* implicit */long long int) 4294967295U)))) + (((/* implicit */long long int) arr_19 [i_3 + 2])))), (var_1)));
                        var_35 = ((((/* implicit */_Bool) ((((/* implicit */long long int) min((var_12), (23U)))) - (max((((/* implicit */long long int) var_0)), (arr_30 [i_9])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((var_1) < (var_13))))))) : (var_0));
                    }
                }
                arr_38 [i_0] [i_2] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_3 - 1]))))), (((var_0) * (arr_10 [i_3 + 2])))));
                arr_39 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) max((((min((var_10), (arr_2 [i_2] [i_3]))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((/* implicit */long long int) var_0))));
            }
            var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((long long int) min((var_2), (446489277U)))))));
        }
    }
    for (long long int i_11 = 0; i_11 < 17; i_11 += 2) 
    {
        var_37 = ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_12)) ? (arr_14 [i_11]) : (((/* implicit */long long int) 3544855922U)))))) ? (((((/* implicit */_Bool) arr_23 [i_11] [i_11] [i_11])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_33 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) : (var_1))) : (((/* implicit */long long int) ((unsigned int) var_0))))) : (((((/* implicit */_Bool) ((unsigned int) -3467766663165052942LL))) ? (((((/* implicit */_Bool) arr_4 [i_11] [i_11])) ? (var_11) : (arr_34 [i_11] [i_11] [i_11] [i_11] [i_11]))) : (((/* implicit */long long int) max((var_5), (658959591U)))))));
        var_38 = (+((~(var_11))));
        var_39 = max((-1LL), (((/* implicit */long long int) 123787195U)));
    }
}
