/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145668
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) (signed char)-7)))) + (((/* implicit */int) (unsigned char)255))))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_1])))));
                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) ((unsigned char) var_1)))));
                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(18446744073709551615ULL))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_4);
    var_15 = ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)209))))) ? (-5843885438875477547LL) : (((5843885438875477532LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))) / (var_5));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            var_16 = ((/* implicit */int) (~(arr_7 [i_2] [i_3 - 2])));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
            {
                var_17 += ((/* implicit */unsigned int) var_8);
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (+(((((/* implicit */_Bool) var_1)) ? (arr_10 [i_2] [i_3] [i_3]) : (arr_10 [i_2] [i_2] [i_4]))))))));
            }
            for (short i_5 = 0; i_5 < 19; i_5 += 3) /* same iter space */
            {
                var_19 ^= ((arr_13 [i_3 - 2] [i_3] [i_3 - 1]) ? (arr_9 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_5]))));
                var_20 = ((/* implicit */short) (+(((/* implicit */int) var_8))));
            }
        }
        for (unsigned char i_6 = 4; i_6 < 18; i_6 += 3) /* same iter space */
        {
            arr_20 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6 + 1] [i_6]))) % (var_5)));
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_16 [i_6 - 1]))));
        }
        for (unsigned char i_7 = 4; i_7 < 18; i_7 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_11 [i_7 - 1])) : (33423360))))));
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7 - 1] [i_7 - 1] [i_7]))) : (arr_10 [i_8] [i_8] [i_8]))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551612ULL)) ? (886209135681836184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_22 [i_2] [i_2]))));
                }
                /* LoopSeq 2 */
                for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_23 [i_2] [i_7]))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) var_9);
                        var_27 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [i_2] [i_7] [i_8] [i_10])) ? (arr_14 [i_2] [i_7] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_8] [i_10]))))) != (((/* implicit */unsigned long long int) arr_10 [i_11] [i_8] [i_8]))));
                    }
                    arr_36 [i_8] = ((/* implicit */short) ((unsigned int) arr_15 [i_7 - 1]));
                    /* LoopSeq 4 */
                    for (unsigned char i_12 = 2; i_12 < 18; i_12 += 2) 
                    {
                        var_28 += ((/* implicit */_Bool) ((signed char) var_8));
                        var_29 = ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_12 [i_7 - 2] [i_7 + 1] [i_12 - 1])));
                        arr_40 [i_8] [i_8] [i_8] [i_2] = ((/* implicit */long long int) ((unsigned long long int) 5843885438875477547LL));
                    }
                    for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) 18446744073709551615ULL);
                        arr_44 [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_34 [i_2] [i_8] [i_8]))))) / (var_3)));
                    }
                    for (unsigned char i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
                    {
                        var_31 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) / (-211197054390834285LL)));
                        arr_47 [i_2] [i_10] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_31 [i_2] [i_7 - 1] [i_8] [i_10])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [17ULL] [i_2] [i_7 - 4] [i_2])) ? (-2LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
                    {
                        arr_50 [i_2] [i_2] [i_2] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 9140574811337986830LL)) ^ (arr_14 [i_7 - 4] [i_7 - 3] [i_8])));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_15] [i_7] [i_7 - 2])) && (((/* implicit */_Bool) arr_14 [i_2] [i_15] [i_7 - 2])))))));
                    }
                }
                for (long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    var_33 *= ((/* implicit */unsigned int) arr_32 [i_7] [1U] [i_16]);
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 4; i_17 < 18; i_17 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */long long int) 886209135681836162ULL);
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((arr_28 [i_17 - 4]) ^ (((((/* implicit */_Bool) var_7)) ? (arr_49 [i_2] [i_2] [i_2] [i_2] [i_2] [i_17] [i_2]) : (arr_48 [i_2] [i_16] [(short)3] [(short)3] [i_17] [i_2]))))))));
                    }
                    for (unsigned int i_18 = 4; i_18 < 18; i_18 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -4LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (886209135681836184ULL)))));
                        var_37 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_8])) & (arr_43 [2ULL] [i_7] [i_7] [i_16] [i_16])))) && (((/* implicit */_Bool) (signed char)-40))));
                    }
                    arr_60 [i_2] [i_8] [i_8] [i_16] [i_8] [i_16] = ((/* implicit */unsigned long long int) arr_28 [i_2]);
                }
                var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) var_4))));
                var_39 = ((/* implicit */unsigned char) arr_56 [i_2] [i_2] [i_7 - 2] [i_7] [i_7] [i_8]);
            }
            for (unsigned char i_19 = 1; i_19 < 18; i_19 += 2) 
            {
                var_40 = arr_49 [i_2] [i_2] [i_2] [6U] [i_7] [(unsigned char)14] [i_19];
                var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) arr_35 [i_19]))));
            }
        }
        /* LoopNest 2 */
        for (unsigned char i_20 = 0; i_20 < 19; i_20 += 2) 
        {
            for (long long int i_21 = 0; i_21 < 19; i_21 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 0; i_22 < 19; i_22 += 4) 
                    {
                        var_42 = ((/* implicit */int) ((1552317921324106999LL) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_66 [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) (unsigned char)133))))))));
                        var_43 = ((/* implicit */_Bool) arr_24 [i_21]);
                        arr_71 [i_20] [i_20] = ((/* implicit */unsigned int) (signed char)-18);
                    }
                    arr_72 [i_20] = ((/* implicit */int) 18446744073709551615ULL);
                    var_44 = ((/* implicit */int) (((~(2130303778816LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_21] [i_20] [i_2] [i_2] [7])))));
                }
            } 
        } 
        arr_73 [i_2] [i_2] = ((/* implicit */long long int) var_3);
        var_45 = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_45 [i_2] [i_2] [(short)17] [i_2])))) <= (9223372036854775807LL));
        /* LoopSeq 2 */
        for (short i_23 = 0; i_23 < 19; i_23 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_24 = 0; i_24 < 19; i_24 += 3) 
            {
                /* LoopSeq 3 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                {
                    arr_81 [i_2] [i_23] [i_23] = ((/* implicit */unsigned char) ((arr_76 [i_23] [i_23] [i_24] [i_23]) ^ (arr_76 [i_23] [i_23] [i_23] [i_23])));
                    arr_82 [i_23] [i_23] [i_24] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_66 [i_23] [i_25] [i_2] [i_25])) ? (arr_9 [i_2] [i_2]) : (((((/* implicit */_Bool) (unsigned char)63)) ? (arr_58 [i_24] [i_25] [i_24] [i_2] [(signed char)1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_2] [i_23] [i_2] [i_23] [i_2] [i_2] [i_2])))))));
                    var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_2] [i_2] [i_2] [6] [i_2] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)192)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_79 [2ULL] [i_23] [i_24])))))))))));
                }
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                {
                    arr_87 [i_2] [i_23] [i_2] [i_26] [i_24] [(signed char)11] = ((/* implicit */signed char) arr_80 [i_26] [i_2] [i_2] [i_2] [i_2] [i_2]);
                    var_47 = ((/* implicit */long long int) (_Bool)1);
                    var_48 = ((/* implicit */unsigned char) var_4);
                }
                for (short i_27 = 0; i_27 < 19; i_27 += 2) 
                {
                    var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_2] [i_24] [i_24] [i_24])) ? (((/* implicit */int) arr_17 [i_2] [i_23] [i_2] [i_27])) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_23]))));
                    arr_91 [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14ULL)) ? (2088960ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) arr_75 [i_2] [i_2] [i_2])) : ((~(((/* implicit */int) (short)11926))))));
                }
                var_50 += ((/* implicit */int) ((((((/* implicit */int) arr_34 [i_2] [(signed char)10] [i_24])) / (((/* implicit */int) arr_22 [i_2] [i_23])))) != (((/* implicit */int) (!(((/* implicit */_Bool) -5843885438875477536LL)))))));
            }
            var_51 = ((/* implicit */unsigned int) ((arr_7 [i_2] [14]) % (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073707462655ULL)) ? (((/* implicit */int) arr_19 [i_2] [i_23])) : (((/* implicit */int) var_6)))))));
            var_52 = ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_23] [i_23] [i_23] [i_2] [i_23] [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_33 [i_2] [i_2] [i_2] [i_2] [i_23] [i_23])));
        }
        for (unsigned long long int i_28 = 0; i_28 < 19; i_28 += 4) 
        {
            arr_95 [i_2] [i_2] [i_2] = ((/* implicit */int) (~(var_7)));
            var_53 = ((/* implicit */signed char) var_1);
        }
    }
}
