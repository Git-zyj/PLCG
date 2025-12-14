/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166728
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
    var_13 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = min((((/* implicit */unsigned long long int) ((signed char) min(((signed char)-87), (var_4))))), (arr_2 [i_0]));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_14 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_1 [i_0] [i_1]))));
            var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_1])) <= (((/* implicit */int) (!((_Bool)1))))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0])) ^ (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) 1087180323U))));
        }
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)122)) < (((/* implicit */int) arr_8 [i_2]))))) : (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
                {
                    arr_15 [i_3] [i_2] [i_2] = ((/* implicit */_Bool) ((arr_13 [i_2]) % (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_14 [i_2 - 1] [i_2] [i_2] [(_Bool)1] [i_3])) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_2 + 1] [(signed char)22] [i_4] [(signed char)22] [i_3])) + (60)))));
                }
                for (signed char i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2] [(signed char)12] [i_2 + 1])) ? (arr_12 [i_2] [i_5] [i_2 - 1]) : (arr_12 [i_2] [i_2] [i_2 - 1])));
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */int) (signed char)78)) & (((/* implicit */int) var_9)))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (_Bool)1))))) % (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) var_5)) : (arr_0 [i_3])))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */int) (signed char)111)) ^ (((/* implicit */int) (_Bool)1)))))));
                        var_23 = ((/* implicit */long long int) (-(arr_18 [i_0] [i_0] [i_2] [(signed char)3] [i_5] [i_6 - 1])));
                    }
                }
                var_24 = var_0;
            }
            for (unsigned int i_7 = 3; i_7 < 21; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    var_25 = ((/* implicit */int) ((0LL) != (((/* implicit */long long int) ((/* implicit */int) ((arr_17 [i_0] [i_7] [(signed char)19] [i_0] [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_2])))))))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) arr_11 [i_7 - 1] [(signed char)6] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_21 [i_7] [i_7] [i_0] [i_0]))));
                }
                var_27 = (signed char)-20;
                var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) arr_14 [i_2] [i_2] [i_2] [(signed char)12] [i_2])))));
                arr_26 [(signed char)2] [i_2 - 1] &= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)229)))) + (24)))));
            }
            var_29 = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_0] [i_2] [i_2 + 2] [8U])) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_0] [i_2] [i_2 + 2] [i_2])) + (42)))));
        }
        var_30 = ((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)(-127 - 1))), (-650060987187201882LL)));
        arr_27 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((3382227860U), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((arr_19 [i_0] [i_0] [2LL] [2LL] [i_0] [i_0]), (var_0)))))) < (((/* implicit */int) max((var_5), (((/* implicit */signed char) var_2)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_6))) <= (((/* implicit */int) var_12))));
        /* LoopNest 3 */
        for (signed char i_10 = 1; i_10 < 20; i_10 += 4) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-94)) || (((/* implicit */_Bool) var_11))));
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [4LL] [i_10 + 1] [i_10 + 3])) ? (arr_12 [(signed char)18] [i_10] [i_9]) : (arr_12 [(unsigned char)6] [i_9] [i_11 - 1]))))));
                        var_34 -= ((/* implicit */signed char) (unsigned char)64);
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            arr_40 [i_9] [i_11] [i_11] [i_10 - 1] [i_13] [i_13] [i_10] = ((/* implicit */long long int) ((arr_12 [i_11] [i_11 - 1] [i_10 - 1]) != (arr_12 [i_11] [i_11 - 1] [i_10 - 1])));
                            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_9] [i_12] [i_12] [i_9] [11LL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                        }
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_9] [(unsigned char)6])) != (((/* implicit */int) var_0))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 3) /* same iter space */
    {
        var_37 = ((/* implicit */signed char) ((((/* implicit */int) arr_41 [i_14] [i_14])) >> (((((((/* implicit */_Bool) (signed char)127)) ? (-1258139414) : (((/* implicit */int) (_Bool)1)))) + (1258139443)))));
        /* LoopSeq 1 */
        for (signed char i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) 
            {
                for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_18 = 3; i_18 < 21; i_18 += 3) 
                        {
                            arr_53 [i_16] [i_18] = ((/* implicit */int) arr_51 [i_14] [i_15] [i_16] [(signed char)21] [i_17] [11]);
                            var_38 += var_5;
                            arr_54 [i_14] [i_16] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_18 + 2])) && (((/* implicit */_Bool) ((long long int) arr_45 [i_18 - 3])))));
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) min((((unsigned int) arr_39 [i_17] [(_Bool)1] [i_17] [(signed char)14] [i_18 + 1] [i_18 - 3] [i_18 - 3])), (((/* implicit */unsigned int) var_1)))))));
                            var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_14])) ? (((/* implicit */int) arr_21 [i_14] [i_16] [(signed char)10] [i_18])) : (((/* implicit */int) min((min((arr_6 [i_14]), (arr_45 [i_14]))), (var_10))))));
                        }
                        for (unsigned char i_19 = 2; i_19 < 21; i_19 += 4) 
                        {
                            var_41 += ((/* implicit */signed char) ((((/* implicit */int) ((var_2) && (((/* implicit */_Bool) 1985466319U))))) >= (((/* implicit */int) var_8))));
                            var_42 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))) : (4201454589U)))) || (((/* implicit */_Bool) ((signed char) arr_7 [i_19 + 1] [i_19 + 2])))));
                            var_43 = ((/* implicit */signed char) ((max((((/* implicit */int) max(((signed char)17), (var_10)))), ((-(((/* implicit */int) var_6)))))) != ((~(((((/* implicit */int) var_7)) >> (((/* implicit */int) var_1))))))));
                        }
                        for (signed char i_20 = 0; i_20 < 23; i_20 += 3) 
                        {
                            var_44 = ((/* implicit */_Bool) max((var_44), (var_2)));
                            var_45 = ((/* implicit */long long int) arr_25 [i_14] [i_15] [i_17] [9LL]);
                            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) : (0U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_20]))) | (92864336U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        }
                        var_47 |= ((/* implicit */signed char) arr_1 [i_14] [i_14]);
                        var_48 = ((/* implicit */int) ((255U) >> (((4117185482U) - (4117185478U)))));
                    }
                } 
            } 
            var_49 = ((/* implicit */signed char) (-((+(((int) var_2))))));
            var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)111)) ? (0ULL) : (((/* implicit */unsigned long long int) 1007484027U))));
            var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) ((arr_12 [12ULL] [i_14] [12ULL]) < (arr_12 [20LL] [i_15] [i_15])))), (var_8)))) ? (((/* implicit */int) ((signed char) arr_43 [i_14]))) : (((/* implicit */int) arr_6 [i_14]))));
            var_52 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_19 [i_14] [i_15] [(signed char)12] [i_15] [i_14] [i_14])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_14 [i_14] [12ULL] [i_14] [i_15] [i_15])) : (((/* implicit */int) arr_32 [i_14] [i_15] [i_15])))) : (((/* implicit */int) var_4)))) + (((/* implicit */int) arr_36 [(signed char)0] [i_14] [(signed char)0] [i_15] [(unsigned char)6] [(unsigned char)6]))));
        }
        var_53 = ((/* implicit */unsigned char) 0LL);
    }
    var_54 = ((/* implicit */long long int) var_11);
    var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) min((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (var_3))))));
}
