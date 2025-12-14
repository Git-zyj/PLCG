/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148078
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) arr_0 [i_0]);
                arr_5 [i_0] [i_0] [i_0] = arr_1 [i_0];
                arr_6 [i_0] = ((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_1])));
                var_12 = ((((/* implicit */_Bool) 1099511365632LL)) ? (0LL) : (((long long int) (~(arr_4 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */int) (((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [0LL])))));
                        arr_17 [11] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) ((arr_9 [13] [13]) ? (var_4) : (((/* implicit */int) arr_9 [i_5 + 1] [i_5 + 1]))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */int) (+(9223372036854775789LL)));
                            arr_20 [i_2] [i_3] [11] [i_2] [i_6 - 1] [i_2] = min((((/* implicit */long long int) arr_15 [i_2] [i_2] [i_2] [i_2])), (var_3));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_15 += ((/* implicit */long long int) arr_10 [i_7 - 1]);
                            var_16 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((int) arr_13 [i_2] [i_5] [i_5]))))) ? (arr_11 [i_4] [i_4]) : (((/* implicit */long long int) arr_15 [i_2] [i_3] [i_4] [i_2]))));
                        }
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_27 [6LL] [i_3] [i_8] [6LL] [(_Bool)1] = ((/* implicit */_Bool) ((long long int) max((((arr_8 [i_3]) / (var_6))), (((/* implicit */long long int) ((int) (short)-23405))))));
                            var_17 += ((/* implicit */long long int) arr_9 [i_3] [2LL]);
                            var_18 = max((((4778760072671882838LL) - (3066906231859975858LL))), (((long long int) min((arr_26 [i_8]), (((/* implicit */long long int) arr_9 [13] [i_3]))))));
                            var_19 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (min(((+(15LL))), (((/* implicit */long long int) arr_14 [12LL] [i_3] [12LL])))) : (min((((-3066906231859975858LL) / (((/* implicit */long long int) -183640948)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_3]))))))));
                        }
                        arr_28 [i_5] [i_3] [i_4] [i_5] &= ((((/* implicit */_Bool) (+(arr_25 [i_2] [i_2])))) ? (((((((/* implicit */_Bool) -4778760072671882840LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_7 [i_2]))) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_5]))))) : (((((/* implicit */_Bool) ((int) arr_18 [i_2] [i_3] [i_4] [i_4] [i_2]))) ? (arr_21 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))));
                        var_20 = -1LL;
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) -3066906231859975885LL))) > (((/* implicit */int) ((((/* implicit */long long int) 0)) == (((long long int) arr_18 [i_2] [i_3] [i_2] [i_9 + 1] [14LL])))))));
                        var_22 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (-3869473285983410568LL))) : (((/* implicit */long long int) var_10)))));
                    }
                    arr_33 [11LL] [i_3] [i_4] = var_8;
                    var_23 = min(((+(arr_32 [i_2] [i_2] [i_3] [i_4]))), (((/* implicit */long long int) arr_22 [i_4] [(short)9] [i_2] [i_2] [i_2] [i_2])));
                }
                for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        arr_40 [i_10] = ((_Bool) ((_Bool) arr_11 [i_2] [i_2]));
                        arr_41 [1] [i_10] [i_3] [i_2] = ((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_2] [i_2])) ? (((long long int) ((_Bool) arr_30 [i_2] [i_3] [i_10] [i_11]))) : (((/* implicit */long long int) (+(((int) var_3))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) min((var_24), (((((/* implicit */_Bool) 9223372036854775789LL)) && (((/* implicit */_Bool) 21))))));
                        var_25 = ((/* implicit */long long int) arr_29 [i_2] [i_2] [i_10] [i_12]);
                        var_26 = ((/* implicit */_Bool) ((-223015627) ^ (0)));
                        var_27 = ((/* implicit */int) arr_34 [i_2] [i_3]);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */_Bool) ((((-4778760072671882838LL) + (9223372036854775807LL))) >> (((99313464) - (99313460)))));
                        var_29 = arr_18 [i_2] [i_3] [i_3] [i_10] [i_13];
                    }
                    for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        var_30 = (_Bool)1;
                        var_31 = ((/* implicit */_Bool) arr_15 [8] [i_2] [i_3] [i_2]);
                        arr_51 [i_2] [i_3] [i_10] [i_14] = ((/* implicit */int) ((long long int) arr_36 [i_2]));
                    }
                    arr_52 [6] [4] [i_3] [i_10] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)15872)) ? (-655824232615738229LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), ((-9223372036854775807LL - 1LL))));
                    arr_53 [(_Bool)1] [i_3] [i_10] = ((/* implicit */_Bool) arr_38 [i_10] [(short)10] [i_3] [i_2]);
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) min(((((_Bool)0) ? (0) : (0))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_2] [i_3] [i_2] [i_10] [i_10] [i_10]))))))))));
                }
                arr_54 [i_2] [9] [9] = ((/* implicit */int) 0LL);
                var_33 = min((((((((/* implicit */long long int) arr_44 [i_2] [i_3] [i_2] [i_3])) / (-217354217080698054LL))) / (((((/* implicit */_Bool) 0)) ? (67553994410557440LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_3]))) : (-5659094792387419399LL))), (((/* implicit */long long int) (_Bool)1)))));
            }
        } 
    } 
    var_34 = ((/* implicit */short) max((((/* implicit */long long int) var_9)), (-1LL)));
}
