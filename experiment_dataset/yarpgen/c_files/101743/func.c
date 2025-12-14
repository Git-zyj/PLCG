/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101743
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            var_17 |= ((/* implicit */unsigned char) arr_3 [i_1]);
            var_18 ^= ((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_0] [i_1]), (((unsigned int) 1760290398171869794ULL))));
            var_19 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
            arr_6 [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_1 [i_0]));
        }
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                arr_11 [i_2] = ((unsigned long long int) arr_3 [i_2]);
                var_20 &= ((/* implicit */unsigned char) arr_8 [i_0] [i_0]);
            }
            for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                arr_14 [i_0] [i_0] [i_2] = ((unsigned long long int) max((((unsigned int) (unsigned char)50)), (max((483445989U), (3811521306U)))));
                var_21 = max((min((((/* implicit */unsigned long long int) 3811521306U)), (((unsigned long long int) 3956616790387140255ULL)))), (min((((/* implicit */unsigned long long int) 3811521306U)), (min((arr_5 [i_4] [i_2] [15ULL]), (((/* implicit */unsigned long long int) 483445991U)))))));
            }
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                var_22 |= ((/* implicit */unsigned char) ((long long int) 483445990U));
                var_23 = 0ULL;
                /* LoopSeq 2 */
                for (unsigned int i_6 = 1; i_6 < 15; i_6 += 4) 
                {
                    var_24 ^= ((/* implicit */unsigned long long int) ((unsigned char) max((arr_10 [i_6 + 3] [i_6 + 2] [i_6 + 3]), (arr_10 [i_6 + 1] [i_6 + 1] [i_6 + 2]))));
                    arr_21 [12ULL] [12ULL] [12ULL] [12ULL] [1U] [i_6] = ((/* implicit */unsigned char) 483445989U);
                }
                for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    arr_25 [i_2] [i_2] [3ULL] = ((long long int) arr_0 [i_5]);
                    arr_26 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((7960709347872496787ULL), (((/* implicit */unsigned long long int) 483445990U))));
                }
                var_25 = arr_1 [i_0];
                arr_27 [i_5] [i_2] [i_0] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) 2422149838U)))), (min((arr_9 [i_0] [i_0] [17ULL]), (arr_13 [12ULL] [12ULL] [i_5])))));
            }
            var_26 = ((unsigned long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_24 [i_0] [i_0])), (arr_7 [7ULL] [i_2])))), (arr_1 [i_0])));
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 4; i_8 < 18; i_8 += 1) 
            {
                arr_30 [i_0] [i_0] [i_8] [i_8] = ((/* implicit */unsigned long long int) min((483445974U), (1872817457U)));
                arr_31 [i_8] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)174);
                var_27 = min((26ULL), (((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_2 [i_0])), (3811521305U))), (arr_0 [i_8])))));
                var_28 |= ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_4 [i_8 - 4] [i_8 - 4] [i_8 - 3])), (min((8250590947693747496ULL), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                var_29 &= ((/* implicit */unsigned long long int) arr_0 [i_8 - 4]);
            }
            for (unsigned char i_9 = 1; i_9 < 18; i_9 += 4) 
            {
                var_30 = ((/* implicit */long long int) 483445989U);
                arr_34 [i_9] [i_9] [i_2] [i_2] = ((/* implicit */long long int) arr_18 [i_0] [i_2] [i_9] [i_9] [i_2] [i_9]);
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 3) 
                {
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) ((unsigned long long int) arr_15 [i_9 - 1] [i_9] [i_9 - 1] [i_9]));
                            arr_42 [i_9] [i_9] [i_9] [18LL] [18LL] = min((arr_9 [i_10 + 3] [i_10 - 2] [i_9 + 1]), (arr_9 [i_10 + 2] [i_10 - 2] [i_9 - 1]));
                        }
                    } 
                } 
            }
            for (unsigned int i_12 = 3; i_12 < 18; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 1; i_13 < 16; i_13 += 2) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        {
                            arr_50 [i_0] [i_0] [10ULL] [i_0] [8ULL] [i_0] = ((long long int) max((arr_29 [i_12 - 3] [16ULL] [i_12 - 2] [i_13 + 2]), (arr_29 [i_12 - 1] [i_12] [i_12 - 1] [i_13 + 3])));
                            arr_51 [i_0] [3ULL] [3ULL] [i_13] [i_14] = ((/* implicit */unsigned int) arr_9 [i_2] [(unsigned char)9] [i_14]);
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((max((-9223372036854775801LL), (arr_7 [14ULL] [14ULL]))), (((long long int) arr_32 [i_0] [i_2] [12LL]))))), (min((((/* implicit */unsigned long long int) 2422149838U)), (arr_10 [i_0] [i_0] [i_0]))))))));
            }
        }
        for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 3) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0])), (arr_7 [3LL] [3LL]))));
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 3) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((unsigned long long int) ((unsigned char) min((9223372036854775807LL), (((/* implicit */long long int) 1872817457U))))))));
            var_36 = arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
            arr_57 [i_16] [(unsigned char)6] [i_16] = arr_29 [i_16] [i_16] [10U] [10U];
            arr_58 [i_16] = ((/* implicit */unsigned int) ((long long int) min((((/* implicit */unsigned long long int) arr_23 [i_0] [i_0] [i_16] [i_16])), (9007198986305536ULL))));
        }
        var_37 = ((/* implicit */unsigned char) arr_44 [i_0] [(unsigned char)10] [i_0]);
    }
    var_38 = ((/* implicit */unsigned long long int) 2422149838U);
    /* LoopNest 3 */
    for (unsigned int i_17 = 0; i_17 < 15; i_17 += 2) 
    {
        for (unsigned char i_18 = 0; i_18 < 15; i_18 += 4) 
        {
            for (unsigned long long int i_19 = 3; i_19 < 14; i_19 += 1) 
            {
                {
                    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_63 [i_19 - 1] [i_19 - 2]), (min((((/* implicit */long long int) arr_66 [i_17] [i_17] [i_19] [i_18])), (arr_15 [i_17] [(unsigned char)17] [i_17] [i_17])))))), (min((arr_12 [i_17] [(unsigned char)2] [i_17] [12LL]), (((unsigned long long int) 483445989U)))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_20 = 2; i_20 < 13; i_20 += 1) /* same iter space */
                    {
                        var_40 ^= ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) max((9151314442816847872LL), (((/* implicit */long long int) arr_62 [i_19] [i_20]))))));
                        var_41 *= ((/* implicit */unsigned int) arr_33 [i_20 + 2] [i_20] [4U]);
                        var_42 = arr_29 [i_17] [i_17] [i_17] [i_17];
                    }
                    for (unsigned int i_21 = 2; i_21 < 13; i_21 += 1) /* same iter space */
                    {
                        arr_71 [i_21] = min((((/* implicit */unsigned long long int) (unsigned char)255)), (0ULL));
                        var_43 = ((/* implicit */unsigned int) min((((long long int) arr_23 [i_19 - 2] [i_19 - 2] [i_21 - 2] [i_21 + 1])), (arr_33 [i_17] [14ULL] [i_17])));
                    }
                    for (unsigned int i_22 = 2; i_22 < 13; i_22 += 1) /* same iter space */
                    {
                        var_44 |= arr_61 [i_22 + 1];
                        arr_75 [i_17] [(unsigned char)14] [i_17] [8ULL] [i_22] = ((/* implicit */unsigned int) 9272998414726192479ULL);
                    }
                }
            } 
        } 
    } 
}
