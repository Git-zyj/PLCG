/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169561
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((var_8) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -565797359)) ? (((/* implicit */unsigned int) -593100518)) : (2815883759U)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))))));
    var_11 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)253)), (2851032691222718983LL)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_3 [(unsigned char)9] = ((/* implicit */unsigned short) arr_2 [i_0]);
        var_12 = ((/* implicit */signed char) ((int) ((7458327195678090271LL) >> (((((/* implicit */int) arr_0 [i_0] [5U])) + (169))))));
        var_13 = ((/* implicit */signed char) var_8);
        arr_4 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_4)) / (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 3])), (arr_2 [i_0]))))) >> (((((((/* implicit */_Bool) -7458327195678090271LL)) ? (var_1) : (((/* implicit */long long int) var_9)))) >> ((((+(((/* implicit */int) arr_0 [i_0] [i_0])))) + (166)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) var_7);
        arr_8 [i_1] [i_1] = ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1])));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((7458327195678090271LL) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))));
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) 7458327195678090254LL))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                arr_15 [i_1] [i_2] [i_3] = ((signed char) var_4);
                var_16 = ((/* implicit */signed char) arr_5 [i_1]);
                arr_16 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((arr_13 [i_1] [i_2] [(signed char)15] [16LL]) % (((((/* implicit */_Bool) (signed char)122)) ? (7458327195678090254LL) : (((/* implicit */long long int) 1723030738))))));
                arr_17 [2] = ((/* implicit */long long int) (-((~(var_9)))));
                var_17 = arr_9 [i_3] [i_2] [i_1];
            }
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                arr_21 [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2] [i_2])) ? (arr_13 [i_1] [i_1] [i_2] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    arr_25 [i_1] [i_1] [i_4] [i_5] [i_4] = ((/* implicit */long long int) arr_6 [i_1]);
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (+(var_4))))));
                    arr_26 [i_1] [i_1] [i_4] [i_5] = ((/* implicit */int) 7458327195678090271LL);
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_30 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [12LL] [i_2] [i_6] [i_6]))) : (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)202))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -7458327195678090268LL)) == (arr_9 [i_6] [i_1] [i_1]))))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_1] [i_2])) ? (arr_23 [i_6]) : (arr_23 [i_1]))))));
                var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -2094019116208393516LL)))) ? (((/* implicit */int) ((_Bool) -7458327195678090253LL))) : ((~(((/* implicit */int) (unsigned char)4))))));
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    arr_33 [i_1] [i_2] [i_1] [i_2] [i_7] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)15]))) : (arr_23 [i_1]))));
                    var_21 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))) : (9671513789938822245ULL))) ^ (arr_22 [i_1] [i_1] [i_1] [(unsigned short)19] [i_6] [i_7])));
                    arr_34 [i_7] [i_6] [1U] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_13 [i_1] [(signed char)6] [(signed char)6] [i_7]))) & (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))));
                }
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned long long int) var_0)))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (_Bool)1))));
                    /* LoopSeq 4 */
                    for (short i_9 = 3; i_9 < 21; i_9 += 1) /* same iter space */
                    {
                        var_24 += ((/* implicit */int) arr_28 [i_1] [i_2] [i_2]);
                        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_18 [16] [i_2])) * (var_7))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_9 [(unsigned char)8] [i_2] [i_2]) : (((/* implicit */unsigned long long int) 4294967295U))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_8] [8] [i_9] [i_9 + 3])))));
                    }
                    for (short i_10 = 3; i_10 < 21; i_10 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_10 + 2] [i_10 + 2] [i_10] [i_10 + 3])) ? (((/* implicit */int) arr_20 [i_10] [(unsigned char)20] [i_10 + 3] [i_10 - 2])) : (((/* implicit */int) arr_20 [i_10 - 3] [i_10 - 3] [i_10] [i_10 - 2])))))));
                        arr_45 [i_1] [i_8] [i_10] = ((/* implicit */short) (+(((/* implicit */int) arr_38 [i_1] [i_1]))));
                        var_28 |= ((/* implicit */long long int) arr_29 [i_1] [i_2] [i_6] [i_8]);
                        arr_46 [i_10] [i_8] [i_10] [i_6] [i_10] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -2094019116208393490LL)) ? (((/* implicit */int) arr_10 [i_8] [i_8])) : (arr_39 [i_1] [i_2] [i_6] [i_6]))) == (((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1]))));
                    }
                    for (short i_11 = 3; i_11 < 21; i_11 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_11 + 2])) || (((/* implicit */_Bool) arr_23 [i_11 - 3])))))));
                        var_30 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 7458327195678090271LL)) ? (7458327195678090273LL) : (-7458327195678090274LL))));
                        arr_49 [i_11 + 2] [i_8] [i_1] [7LL] [i_1] = ((((/* implicit */int) (!(((/* implicit */_Bool) 8760199667230080571ULL))))) >> ((((+(7458327195678090234LL))) - (7458327195678090229LL))));
                    }
                    for (short i_12 = 3; i_12 < 21; i_12 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned long long int) arr_40 [i_2] [i_2] [i_2] [15LL]);
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (4070393637U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_2] [i_6] [12LL] [i_6])))))) ? (arr_44 [i_1] [i_1] [i_6] [i_8] [i_6]) : (arr_50 [i_1] [i_12 - 1] [i_6] [(signed char)16] [(short)19] [i_6])));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(var_3)))) == (var_8)));
                    }
                    arr_52 [(signed char)4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)125))) : (arr_13 [i_1] [i_2] [i_6] [i_8])));
                }
            }
            for (unsigned long long int i_13 = 4; i_13 < 20; i_13 += 1) 
            {
                var_34 = ((/* implicit */long long int) ((((var_7) <= (((/* implicit */unsigned long long int) arr_18 [(unsigned short)6] [i_13])))) ? (arr_19 [i_13 - 4] [i_2] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [(unsigned char)1] [i_2])))));
                arr_55 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)242)) ? (-7458327195678090274LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_2] [i_13 + 1] [(signed char)9])))));
                arr_56 [i_1] [i_2] [i_2] [i_1] = ((((/* implicit */_Bool) (short)-20316)) ? (((/* implicit */unsigned long long int) arr_48 [i_13 - 2] [i_13 + 2])) : (arr_9 [i_1] [i_2] [(signed char)7]));
                /* LoopSeq 3 */
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 24; i_15 += 1) 
                    {
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((int) arr_29 [i_13 - 3] [i_13 + 2] [i_13 + 4] [i_13])))));
                        arr_62 [i_1] [i_1] [i_13] [8ULL] [i_1] = (-(arr_40 [i_13 + 3] [i_13] [i_13 - 3] [i_13 - 4]));
                        arr_63 [i_1] [i_1] [i_1] [i_1] [12LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_1] [i_2] [i_13] [i_14] [i_15])) ? ((-(-155478891))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (short)20317))))));
                    }
                    var_36 = ((((/* implicit */long long int) (-(((/* implicit */int) arr_36 [i_1] [i_2] [9LL] [(signed char)20] [(unsigned char)12] [i_14]))))) - (arr_43 [i_13 + 1] [18LL] [i_13] [i_13] [i_13 - 3]));
                }
                for (unsigned short i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                {
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (!(((/* implicit */_Bool) arr_39 [i_13 - 4] [i_13 - 4] [i_13 - 4] [i_13 - 3])))))));
                    arr_67 [i_1] [6] [i_13 - 2] [i_16] = ((/* implicit */unsigned int) (-((-(var_3)))));
                    var_38 ^= ((/* implicit */_Bool) ((int) ((((var_3) + (2147483647))) << (((((/* implicit */int) (signed char)21)) - (21))))));
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1] [i_13 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_3)) <= (4294967275U))))) : (((arr_18 [i_2] [i_2]) - (((/* implicit */unsigned int) var_9)))))))));
                }
                for (unsigned short i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
                {
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_17] [i_13 - 2] [i_13 + 4] [i_2])) >> (((((((/* implicit */_Bool) arr_60 [i_1] [i_1])) ? (arr_23 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) - (2108543229U)))));
                    var_41 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_3))))));
                    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_31 [i_17] [i_13] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_54 [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                }
            }
        }
        for (signed char i_18 = 0; i_18 < 24; i_18 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_19 = 1; i_19 < 22; i_19 += 1) 
            {
                var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7458327195678090261LL)) ? (7458327195678090240LL) : (((/* implicit */long long int) ((/* implicit */int) (short)20311)))));
                arr_77 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((int) 2147483647)) : (((((/* implicit */int) arr_20 [i_1] [i_18] [i_19] [i_1])) ^ (((/* implicit */int) (short)-20297))))));
            }
            /* LoopSeq 1 */
            for (signed char i_20 = 2; i_20 < 23; i_20 += 1) 
            {
                var_44 = ((/* implicit */short) ((((/* implicit */_Bool) arr_79 [i_18] [i_1] [i_20 - 1])) && (((/* implicit */_Bool) arr_79 [i_18] [i_18] [i_20 - 2]))));
                /* LoopSeq 3 */
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    var_45 += ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((unsigned long long int) 6118637420769976899LL)) : (((/* implicit */unsigned long long int) ((var_9) % (((/* implicit */int) arr_27 [(_Bool)1] [(_Bool)1])))))));
                    var_46 = ((((/* implicit */int) ((((/* implicit */_Bool) 2429143829756931980ULL)) && (((/* implicit */_Bool) arr_54 [i_1]))))) >> ((((-(arr_40 [i_1] [i_1] [i_1] [i_1]))) - (4075711154U))));
                    arr_83 [3ULL] [3ULL] [i_18] = ((/* implicit */long long int) arr_37 [i_21 - 1] [i_20] [i_18]);
                }
                for (signed char i_22 = 2; i_22 < 22; i_22 += 1) 
                {
                    arr_86 [i_18] [i_18] [i_22 + 1] = ((/* implicit */_Bool) (short)32767);
                    var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)24)) ? (((arr_78 [i_1] [i_1] [23ULL] [i_18]) >> (((/* implicit */int) arr_47 [i_22] [i_20] [i_20] [i_18] [i_18] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (7458327195678090273LL)))))));
                }
                for (signed char i_23 = 2; i_23 < 20; i_23 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 2; i_24 < 23; i_24 += 1) 
                    {
                        arr_94 [i_1] [22ULL] [i_20] [i_23 + 3] [i_1] [15] [i_18] = (i_18 % 2 == 0) ? (((((((/* implicit */int) ((signed char) var_9))) + (2147483647))) >> ((+(((/* implicit */int) arr_85 [i_24] [i_18] [i_20] [i_18] [17ULL])))))) : (((((((/* implicit */int) ((signed char) var_9))) + (2147483647))) >> ((((+(((/* implicit */int) arr_85 [i_24] [i_18] [i_20] [i_18] [17ULL])))) - (54)))));
                        var_48 ^= ((/* implicit */short) arr_68 [i_1] [i_18] [i_20] [i_23 + 4]);
                        var_49 = ((/* implicit */unsigned char) 16017600243952619611ULL);
                        arr_95 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */short) arr_38 [i_24 + 1] [i_24 - 2]);
                    }
                    for (long long int i_25 = 3; i_25 < 21; i_25 += 1) 
                    {
                        var_50 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_82 [i_25] [i_18] [i_18] [i_18]))))));
                        var_51 += ((/* implicit */unsigned int) 2074657734891764246LL);
                    }
                    var_52 = ((/* implicit */int) (_Bool)1);
                    arr_100 [i_18] [i_18] [i_20] [i_20] [i_20] [(unsigned char)12] = ((((/* implicit */_Bool) arr_70 [i_1] [(unsigned short)13] [i_20 + 1] [i_1] [i_23 - 2] [i_18])) && (((/* implicit */_Bool) arr_64 [i_1] [i_20 - 2] [i_23] [i_23] [i_23 + 3] [i_23 + 3])));
                    var_53 = ((/* implicit */short) ((arr_88 [i_18] [i_18] [i_20] [i_20 + 1]) + (((/* implicit */long long int) arr_39 [19ULL] [i_18] [i_20] [i_20 - 2]))));
                }
                var_54 = ((/* implicit */unsigned long long int) max((var_54), (((((var_7) / (((/* implicit */unsigned long long int) arr_53 [i_1] [20ULL] [i_18] [i_20])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                var_55 = ((/* implicit */long long int) arr_84 [i_1] [i_18] [i_20]);
            }
        }
    }
    var_56 = ((/* implicit */signed char) (~(min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3811016314U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))))));
}
