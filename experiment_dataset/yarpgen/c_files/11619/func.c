/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11619
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
    var_17 = ((/* implicit */long long int) var_9);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (arr_4 [i_3 - 3]) : (var_2))))));
                        var_19 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_3)) | (arr_8 [i_0] [i_1] [6ULL] [3U])));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 3) /* same iter space */
                        {
                            var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (arr_10 [i_3] [i_3] [i_3 - 3] [i_3 - 2] [i_3] [i_3 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [4U]))))))));
                            var_21 -= ((/* implicit */unsigned int) ((unsigned long long int) var_0));
                        }
                        for (long long int i_5 = 1; i_5 < 19; i_5 += 3) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_5] [19U] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_2]);
                            arr_18 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_2])));
                            arr_19 [i_0] [i_1] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) 0ULL);
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((arr_16 [i_3] [i_3 + 2] [7LL] [17ULL]) < (arr_16 [(signed char)8] [i_3 - 3] [i_3] [i_3]))))));
                        }
                        for (long long int i_6 = 1; i_6 < 19; i_6 += 3) /* same iter space */
                        {
                            var_23 |= ((/* implicit */long long int) ((unsigned int) (signed char)-97));
                            var_24 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                            var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0] [i_0]))));
                        }
                        var_26 |= ((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94)))));
                    }
                } 
            } 
            var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((~(var_15))) : (arr_3 [(signed char)19])));
        }
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)24)) >> (((var_4) - (15661316551374560046ULL))))))));
        /* LoopSeq 2 */
        for (unsigned int i_7 = 1; i_7 < 19; i_7 += 3) 
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_7] [17LL] [9LL] [i_7])) ? (((/* implicit */unsigned long long int) 2018559731U)) : (arr_23 [i_7])));
            var_30 = ((/* implicit */unsigned int) arr_5 [i_7] [i_0] [i_0]);
        }
        for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            var_31 = ((((/* implicit */_Bool) ((var_13) - (((/* implicit */unsigned long long int) arr_6 [i_8]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)122))) - (arr_11 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (arr_0 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_8])))))));
            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0]))))));
            /* LoopSeq 3 */
            for (long long int i_9 = 3; i_9 < 19; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [13LL] [13LL] [i_9 - 1]))) : (arr_8 [i_0] [i_0] [i_9 - 1] [i_10])));
                    var_34 = ((/* implicit */long long int) (~(arr_15 [i_0] [i_8] [i_9] [i_9 - 2])));
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), ((~(4994002807983121669ULL)))));
                }
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) arr_21 [i_0] [i_9] [i_9 - 2] [i_8] [i_9] [i_9] [i_8]))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
            {
                arr_35 [i_11] [i_8] = ((/* implicit */signed char) ((arr_5 [i_0] [3U] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                var_37 = ((/* implicit */signed char) (-(arr_6 [i_0])));
                var_38 = ((/* implicit */unsigned int) arr_9 [i_11] [i_8] [i_0]);
            }
            for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 3) 
                {
                    var_39 |= (~(1596815449U));
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        arr_46 [i_14] [1U] [i_0] [i_8] [i_8] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1162401695U)) && (((/* implicit */_Bool) 1067092192U))));
                        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) 4124150706731870056ULL)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (signed char)48)))))));
                    }
                    for (long long int i_15 = 1; i_15 < 19; i_15 += 2) 
                    {
                        arr_49 [i_0] [9LL] [i_8] [i_12] [i_0] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_15 - 1] [i_8] [i_13 - 2] [i_15])) ? (arr_15 [i_15 - 1] [i_8] [i_13 - 2] [i_13]) : (5901595344664156764ULL)));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) | (((var_7) & (arr_11 [i_0] [i_8] [i_12] [i_12] [i_13 - 2] [i_15 + 1])))));
                        arr_50 [i_15] = ((/* implicit */signed char) (~((-(arr_16 [i_15] [i_8] [i_15] [i_13 + 1])))));
                    }
                    for (unsigned int i_16 = 2; i_16 < 16; i_16 += 2) 
                    {
                        var_42 |= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_0] [i_0] [i_12])) ? (140737488355327LL) : (((/* implicit */long long int) arr_36 [i_0] [i_0] [i_0])))));
                        var_43 = ((/* implicit */long long int) (((-(arr_15 [i_12] [i_12] [i_12] [i_12]))) | (((/* implicit */unsigned long long int) 3048615774U))));
                        arr_53 [10ULL] [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (arr_15 [i_0] [i_16 - 2] [i_12] [i_13 - 2]) : (arr_26 [i_0] [i_16 + 2] [i_12] [i_13 + 2])));
                    }
                }
                for (signed char i_17 = 0; i_17 < 20; i_17 += 4) 
                {
                    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)-1)))))));
                    arr_57 [i_0] [i_8] [i_12] [i_17] &= ((/* implicit */unsigned int) ((((-140737488355328LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (165)))));
                }
                var_45 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_45 [i_0] [i_8])) : ((-(6952877227824730267ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) var_2))));
                            var_47 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-10))));
                        }
                    } 
                } 
                var_48 = arr_48 [6LL] [i_8] [i_8] [i_8] [14U];
                /* LoopNest 2 */
                for (long long int i_20 = 1; i_20 < 18; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 20; i_21 += 3) 
                    {
                        {
                            var_49 += ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
                            var_50 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_8] [i_12]))) ^ (arr_10 [i_20 + 1] [i_20] [i_20] [i_20 + 1] [i_20 + 2] [i_20 - 1])));
                            var_51 += ((/* implicit */signed char) (-((-(242185864U)))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (long long int i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                for (long long int i_23 = 3; i_23 < 17; i_23 += 1) 
                {
                    for (signed char i_24 = 3; i_24 < 19; i_24 += 2) 
                    {
                        {
                            var_52 -= ((/* implicit */signed char) -6349596614196963832LL);
                            var_53 = ((/* implicit */unsigned long long int) (-(arr_29 [i_0] [i_8] [i_23 + 2] [0LL])));
                            var_54 = ((/* implicit */long long int) var_8);
                        }
                    } 
                } 
            } 
            var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) (signed char)(-127 - 1)))));
        }
    }
    for (long long int i_25 = 0; i_25 < 13; i_25 += 1) 
    {
        var_56 += ((/* implicit */unsigned long long int) arr_59 [i_25] [12U] [i_25] [i_25]);
        var_57 = ((/* implicit */unsigned int) -3615087465642710617LL);
    }
}
