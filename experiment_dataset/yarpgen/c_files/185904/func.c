/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185904
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
    var_10 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned char)8] &= ((/* implicit */signed char) var_9);
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            var_11 = ((/* implicit */long long int) (((((-(((/* implicit */int) var_5)))) + (2147483647))) << (((((((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) + (2147483647))) >> (((((/* implicit */int) var_5)) - (38738))))) - (131070)))));
            var_12 *= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0])))))));
            arr_8 [i_0] [10] = ((/* implicit */signed char) min(((~(arr_6 [i_0]))), (((arr_6 [i_0]) | (arr_6 [i_0])))));
            var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) min((1152921500311879680LL), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1152921500311879680LL)) || (((/* implicit */_Bool) arr_0 [i_0])))))) : (((arr_6 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))))))), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
        }
        var_14 = ((/* implicit */_Bool) min(((~(max((var_8), (((/* implicit */unsigned long long int) 1152921500311879689LL)))))), (((/* implicit */unsigned long long int) ((arr_6 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (var_0))))))))));
        var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0])))))))), ((+((-(var_0)))))));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) (unsigned short)4);
            arr_16 [i_2] [(_Bool)1] [i_2] = ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)49171))))));
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (unsigned short)39009))));
            arr_17 [5LL] [5LL] [i_3] = ((/* implicit */signed char) ((arr_12 [i_2] [i_3] [i_2]) / (((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [(signed char)16])))) || (((/* implicit */_Bool) arr_6 [8LL])))))));
        }
        for (signed char i_4 = 3; i_4 < 8; i_4 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */long long int) (-(((((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), (var_4)))) * (var_0)))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29751)) ? (var_2) : (((/* implicit */int) arr_9 [(_Bool)1])))))))) ? (min((min((var_8), (((/* implicit */unsigned long long int) 914552116U)))), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3072)) ? (((/* implicit */int) arr_4 [i_4] [i_4 - 3])) : (((/* implicit */int) arr_4 [i_4] [i_4 - 2])))))));
        }
        for (signed char i_5 = 3; i_5 < 8; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                arr_26 [i_5] [i_5 + 2] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) var_9))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [(signed char)0]))))) / (var_6))) / (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)96)))) >> (((((((/* implicit */_Bool) arr_20 [i_2] [i_6])) ? (arr_12 [i_6] [i_5 + 2] [i_5 + 2]) : (((/* implicit */int) var_3)))) - (587936619)))))))))));
            }
            for (int i_7 = 4; i_7 < 7; i_7 += 3) 
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) arr_27 [i_2] [i_5 + 1] [i_5 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_2] [i_5 - 2] [i_7]))))) : (((/* implicit */int) ((((/* implicit */int) arr_27 [i_2] [i_5 - 1] [i_7])) >= (var_2))))));
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        arr_36 [i_2] [i_5] [i_7] [(_Bool)1] [(signed char)6] [i_8] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1152921500311879676LL), (((/* implicit */long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [(signed char)4] [(signed char)4])) & (((/* implicit */int) var_9))))) : ((+(var_8)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [(short)20]), (((/* implicit */unsigned short) var_1)))))))))));
                        arr_37 [i_9] [i_9] [i_8] [i_9] [i_8] |= ((/* implicit */_Bool) min((var_6), (min((((/* implicit */unsigned long long int) ((-1152921500311879682LL) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))))), (((((/* implicit */_Bool) arr_22 [i_2] [i_5] [i_7 - 1] [i_8])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        var_22 |= var_9;
                        var_23 = ((/* implicit */int) max((var_23), (var_4)));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8]))) > (var_0))))) < (var_8))))));
                    }
                    var_25 = ((/* implicit */long long int) (+(var_0)));
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_2] [i_5] [i_8]))) - ((((_Bool)1) ? (arr_15 [i_2] [i_7 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) | (((/* implicit */unsigned long long int) min((arr_31 [i_5 + 2] [i_5 + 1] [i_5 - 1]), (((/* implicit */long long int) arr_39 [(unsigned short)0] [i_7 + 1] [(unsigned short)0] [i_7] [i_8]))))))))));
                }
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_31 [i_2] [i_5 - 2] [1])) ? (((((/* implicit */long long int) var_7)) ^ (6832697287693985101LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (var_0)))))), (((/* implicit */long long int) (!(arr_11 [i_7 - 2])))))))));
            }
            arr_40 [i_5] = ((/* implicit */unsigned long long int) min((((((var_4) / (((/* implicit */int) arr_27 [i_2] [i_2] [i_2])))) % (((/* implicit */int) arr_2 [i_5] [i_5])))), (min((arr_39 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5]), (((((/* implicit */int) arr_2 [i_5] [i_5])) - (((/* implicit */int) arr_34 [i_5] [i_5 - 3] [i_2] [i_2] [i_2]))))))));
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 10; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_49 [i_5] [i_5 + 1] [(unsigned char)4] [i_5 + 2] [i_5 - 1] = ((/* implicit */unsigned char) 1152921500311879683LL);
                            arr_50 [(unsigned short)0] [i_5] [i_5] [i_12] [i_11] [8LL] = ((/* implicit */short) min((arr_47 [i_11] [i_2]), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_5] [i_5])), (((((-1152921500311879676LL) + (9223372036854775807LL))) << (((((/* implicit */int) (short)29739)) - (29739))))))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 3 */
        for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            arr_55 [7LL] [i_14] = ((140737354137600ULL) << (((((/* implicit */int) (signed char)-12)) + (58))));
            var_28 = var_8;
            var_29 &= ((/* implicit */int) var_1);
        }
        for (int i_15 = 1; i_15 < 9; i_15 += 2) 
        {
            arr_58 [2LL] [i_15] |= var_7;
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    {
                        arr_63 [8LL] [i_16] [i_15] [(signed char)3] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_46 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 + 1])))) ? (((((/* implicit */_Bool) arr_46 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1])) ? (arr_46 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1]) : (arr_46 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1]))) : (((((/* implicit */_Bool) arr_46 [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15 + 1])) ? (arr_46 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 - 1]) : (arr_46 [i_15 - 1] [i_15 - 1] [i_15 + 1] [i_15 + 1])))));
                        var_30 = ((/* implicit */_Bool) arr_57 [i_15]);
                        arr_64 [i_2] [i_2] [i_2] [(unsigned char)3] [i_2] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) | (((/* implicit */int) min((arr_1 [i_2]), (((/* implicit */unsigned short) (signed char)11)))))))) ? (((/* implicit */unsigned long long int) ((arr_21 [i_15 - 1] [i_15 - 1]) >> (((arr_21 [i_15 - 1] [i_15 + 1]) - (3105744477U)))))) : (min((min((var_6), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_3))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_29 [i_15] [i_15] [i_15 + 1])) - (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_15] [i_2])) & (((/* implicit */int) var_3))))) % (arr_32 [i_15 - 1] [i_15] [i_15 - 1] [i_15 - 1] [1] [i_15])))));
        }
        for (long long int i_18 = 1; i_18 < 7; i_18 += 3) 
        {
            var_32 = ((/* implicit */short) min(((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [(short)8] [i_18 + 2] [i_2]))))))), ((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_18] [0])))))))));
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (arr_13 [i_2])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (var_0)))));
        }
    }
    var_34 = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_8) | (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) var_2)) : (140737354137609ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) << (((1073741824) - (1073741814)))))) ? (((((/* implicit */int) var_9)) - (((/* implicit */int) (short)-26344)))) : (((((/* implicit */int) var_9)) << (((((/* implicit */int) var_9)) - (8053))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_19 = 2; i_19 < 13; i_19 += 2) 
    {
        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_19] [i_19]))));
        var_36 -= var_8;
        /* LoopSeq 2 */
        for (unsigned short i_20 = 0; i_20 < 14; i_20 += 1) 
        {
            var_37 = (unsigned short)55013;
            /* LoopNest 2 */
            for (signed char i_21 = 0; i_21 < 14; i_21 += 1) 
            {
                for (int i_22 = 0; i_22 < 14; i_22 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_23 = 2; i_23 < 10; i_23 += 3) 
                        {
                            arr_81 [i_23] [i_22] = ((/* implicit */signed char) (~((+(536870656)))));
                            arr_82 [i_23] [i_21] [i_21] [i_22] [i_19 - 2] = ((/* implicit */unsigned char) var_4);
                        }
                        arr_83 [i_19 - 2] [i_19 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)30373)) ? (((/* implicit */unsigned long long int) var_2)) : (((arr_73 [i_20] [(unsigned short)13] [(unsigned short)13]) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_19])))))));
                    }
                } 
            } 
        }
        for (unsigned short i_24 = 0; i_24 < 14; i_24 += 2) 
        {
            var_38 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_75 [i_24] [(unsigned char)11] [i_19 + 1] [i_19 + 1] [i_19 - 1] [i_19 - 1]))));
            arr_88 [i_19] = ((/* implicit */short) ((arr_74 [i_19 + 1] [i_19 + 1]) - (arr_74 [i_19 + 1] [i_19 + 1])));
            /* LoopNest 2 */
            for (short i_25 = 1; i_25 < 13; i_25 += 4) 
            {
                for (long long int i_26 = 0; i_26 < 14; i_26 += 3) 
                {
                    {
                        var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_76 [i_19 - 1] [i_19 + 1] [i_25 - 1] [i_26] [i_25] [i_19]))));
                        arr_93 [i_19 - 1] [i_24] [(short)13] [i_26] = ((/* implicit */unsigned long long int) arr_84 [i_19] [i_24]);
                        arr_94 [i_19 + 1] [i_19 + 1] [i_19] [i_19] [8LL] = ((/* implicit */_Bool) -3251613236182971844LL);
                        /* LoopSeq 3 */
                        for (unsigned short i_27 = 0; i_27 < 14; i_27 += 3) /* same iter space */
                        {
                            arr_99 [i_19] [i_27] [i_25] [i_26] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (arr_91 [i_25] [i_19 - 2])));
                            arr_100 [i_19] [6] [7U] [7U] [i_27] = (i_27 % 2 == zero) ? (((((/* implicit */int) arr_80 [i_19] [i_19 - 1] [i_27] [i_19 + 1] [i_19 - 1])) >> (((((/* implicit */int) arr_80 [i_19] [i_19] [i_27] [i_19 - 2] [i_19])) - (17311))))) : (((((((/* implicit */int) arr_80 [i_19] [i_19 - 1] [i_27] [i_19 + 1] [i_19 - 1])) + (2147483647))) >> (((((((/* implicit */int) arr_80 [i_19] [i_19] [i_27] [i_19 - 2] [i_19])) - (17311))) + (40108)))));
                        }
                        for (unsigned short i_28 = 0; i_28 < 14; i_28 += 3) /* same iter space */
                        {
                            var_40 ^= 1551524432654027949LL;
                            arr_104 [i_19 - 1] [i_19 + 1] [i_19 - 1] [i_19] [i_19] [i_19] [i_19 + 1] = ((/* implicit */signed char) ((var_6) >> (((((/* implicit */int) var_3)) - (19500)))));
                        }
                        for (short i_29 = 0; i_29 < 14; i_29 += 3) 
                        {
                            arr_108 [i_19] [i_26] [i_25 + 1] [i_26] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15853)) << (((var_0) - (3155979875U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_98 [i_25] [i_25 - 1] [i_25 + 1] [i_24] [(unsigned short)12] [(unsigned short)12] [i_25]))) : (((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_24] [i_24] [i_26])))))));
                            var_41 -= ((/* implicit */unsigned short) (~(var_7)));
                            arr_109 [i_19 - 2] [(_Bool)1] [(short)10] = ((/* implicit */int) arr_0 [i_19]);
                        }
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-30441))));
        }
    }
    var_43 = ((/* implicit */unsigned int) var_6);
}
