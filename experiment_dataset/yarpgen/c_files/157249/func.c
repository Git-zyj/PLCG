/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157249
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
    var_17 = var_9;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            arr_11 [i_4] [i_3] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_3])) ? (((/* implicit */int) arr_4 [i_1] [i_2] [i_4])) : ((~(((/* implicit */int) var_2))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */int) var_15);
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_6))));
                var_22 = ((/* implicit */unsigned long long int) arr_12 [i_5] [i_1] [i_5]);
            }
            for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 3) 
            {
                arr_16 [i_0] [i_1] [i_6 + 4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [(signed char)10] [i_6 + 1]))));
                /* LoopSeq 3 */
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((arr_5 [i_0 + 1] [i_6 + 1]) <= (((/* implicit */long long int) arr_17 [i_0] [i_0 + 1])))))));
                    arr_19 [i_0] [i_7] [i_0] [i_0 - 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7])) ? (arr_17 [i_7] [i_1]) : (var_4))))));
                }
                for (unsigned short i_8 = 1; i_8 < 11; i_8 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        arr_26 [i_0] [i_0 - 1] [i_0] [i_8] [i_0] = ((/* implicit */long long int) ((var_12) % (((/* implicit */int) arr_10 [i_8 - 1] [2ULL] [i_9] [i_9] [i_9]))));
                        var_24 = ((/* implicit */int) var_9);
                        var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_9] [i_8 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_24 [i_1] [i_1])))) : (((unsigned int) -3936171237010035360LL))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_15 [i_6 - 1]) : (((/* implicit */unsigned long long int) var_3)))));
                        var_27 = ((/* implicit */unsigned long long int) (+(((arr_18 [(short)11] [(short)11] [i_6] [i_8] [i_10]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56)))))));
                        arr_29 [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_8] [i_8 - 1])) ? (arr_24 [i_8] [i_8 + 2]) : (arr_24 [i_8] [i_8 - 1])));
                        var_28 = ((/* implicit */int) (~(var_8)));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_0] [i_8 + 2] [i_8] [i_11])) <= ((+(var_14)))));
                        arr_33 [i_6] [i_8] [i_6] [i_8] [(short)1] = ((/* implicit */unsigned long long int) ((short) (signed char)-49));
                    }
                    var_30 = ((/* implicit */unsigned int) arr_9 [i_1] [i_1]);
                }
                for (short i_12 = 0; i_12 < 13; i_12 += 3) 
                {
                    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_6 + 1])) ^ (((/* implicit */int) var_1))))))));
                    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))))))))));
                }
                var_33 = ((/* implicit */long long int) ((int) arr_15 [i_6 - 2]));
                var_34 = (+(((/* implicit */int) arr_23 [i_6 - 1] [i_0 - 2] [i_1] [i_0 - 2] [i_0])));
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 1; i_13 < 10; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                    {
                        var_35 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_14])) ? (((/* implicit */int) (signed char)112)) : (var_14)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_14] [i_13 + 3] [i_14]))));
                        var_36 &= ((unsigned short) ((signed char) arr_25 [i_14] [i_13] [i_6 - 1] [i_1] [i_0 - 1] [(unsigned short)1]));
                        var_37 = ((/* implicit */unsigned int) var_10);
                        arr_41 [i_0] [i_1] [i_6 - 3] [i_13] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_27 [i_14] [i_13 + 3] [i_13] [i_13] [i_6]))));
                    }
                    for (long long int i_15 = 0; i_15 < 13; i_15 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_13] [9LL] [i_13]))));
                        arr_45 [i_13] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (signed char)-113));
                        var_39 = (-(((((/* implicit */_Bool) arr_36 [i_0] [i_1] [i_6] [i_13])) ? (var_5) : (var_5))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        var_40 ^= ((/* implicit */_Bool) var_13);
                        var_41 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) ^ (((arr_37 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) | (((/* implicit */long long int) ((/* implicit */int) arr_48 [10LL] [i_1] [i_1] [i_13 + 1] [2LL]))))));
                        var_42 = ((/* implicit */short) ((long long int) arr_6 [i_0] [i_1]));
                        var_43 = ((/* implicit */unsigned long long int) ((long long int) arr_10 [i_13 - 1] [i_13 - 1] [4LL] [2LL] [i_13]));
                    }
                    var_44 = ((/* implicit */_Bool) ((arr_47 [i_6 + 2] [i_13 + 2] [i_13 + 2] [i_13]) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_6] [i_13])))))));
                }
            }
        }
    }
    for (int i_17 = 2; i_17 < 9; i_17 += 4) 
    {
        arr_52 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_17] [i_17] [i_17 - 2] [i_17] [i_17 - 2] [i_17 - 2])) ? (((/* implicit */int) arr_50 [i_17 - 1] [i_17])) : (((/* implicit */int) (unsigned char)84))))) ? (((((/* implicit */_Bool) 364451084)) ? (-7007573272089514470LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_17] [i_17] [i_17])) / (var_4))))))) ? (((long long int) arr_8 [i_17] [i_17] [i_17 - 2] [i_17])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [(short)3] [i_17] [i_17 - 1] [(short)3] [i_17])) || (((/* implicit */_Bool) var_4))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_18 = 0; i_18 < 10; i_18 += 3) 
        {
            var_45 = ((/* implicit */unsigned int) ((signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_17] [i_17 - 2]))) : (arr_37 [6U] [i_17] [i_17] [i_17] [i_17 - 2] [i_17]))));
            var_46 = ((arr_28 [i_18] [i_18] [i_17 + 1]) / (arr_1 [i_17]));
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            for (unsigned short i_20 = 3; i_20 < 9; i_20 += 1) 
            {
                {
                    var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_46 [i_17] [i_17] [3LL] [i_19] [i_20])) ? (min((((((/* implicit */_Bool) 10590798954751652751ULL)) ? (((/* implicit */unsigned long long int) -364451087)) : (arr_39 [i_17] [i_17] [i_17 - 1] [i_17] [i_17] [i_17 + 1] [i_17]))), (((/* implicit */unsigned long long int) ((signed char) var_0))))) : (((/* implicit */unsigned long long int) (+(var_15))))));
                    arr_61 [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_17] [i_17] [i_17 - 1] [i_17 - 2] [i_20 - 3] [i_17])) ? (max((arr_25 [i_17] [i_17] [i_17 + 1] [i_20] [i_20 - 1] [i_20]), (arr_25 [i_17] [i_17] [i_17 - 1] [(unsigned short)4] [i_20 - 3] [i_20 - 3]))) : (((/* implicit */long long int) var_4))));
                }
            } 
        } 
        arr_62 [i_17 - 2] = ((/* implicit */int) -2072635058836616166LL);
        /* LoopSeq 1 */
        for (short i_21 = 0; i_21 < 10; i_21 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_22 = 0; i_22 < 10; i_22 += 4) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_30 [i_23] [i_22] [i_21]), ((signed char)-115)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_21] [i_17])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_30 [i_17] [8LL] [i_23])))) > (((((/* implicit */_Bool) arr_66 [(unsigned char)7] [i_21] [i_21])) ? (((/* implicit */int) arr_0 [i_21])) : (((/* implicit */int) arr_65 [i_21] [i_22] [i_23]))))))) : (((/* implicit */int) arr_50 [i_21] [i_22])))))));
                        var_49 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_9)))))))));
                    }
                } 
            } 
            arr_69 [i_17] [i_17] [i_17] = ((/* implicit */int) var_7);
            var_50 = ((/* implicit */long long int) arr_35 [i_17 - 1] [i_17 - 1] [i_21] [(unsigned short)7] [i_17 - 1] [i_21]);
            /* LoopSeq 1 */
            for (int i_24 = 0; i_24 < 10; i_24 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_25 = 0; i_25 < 10; i_25 += 2) 
                {
                    for (unsigned short i_26 = 4; i_26 < 9; i_26 += 3) 
                    {
                        {
                            var_51 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 826367435)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (unsigned short)3469)))) : (((/* implicit */int) (unsigned char)72))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17] [i_17]))) : (((((var_16) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)0] [i_26 - 3])) ? (((/* implicit */int) arr_65 [i_17] [i_17] [i_17])) : (((/* implicit */int) (unsigned char)72))))) : (min((((/* implicit */long long int) arr_59 [i_25] [(unsigned short)8] [i_26])), (var_3)))))));
                            var_52 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_68 [i_17 + 1] [i_17 - 2] [i_17 - 1] [i_17]))));
                            arr_78 [i_24] [i_24] [i_24] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((((/* implicit */_Bool) 2474275505U)) && (((/* implicit */_Bool) 4294967281U))))) - (((/* implicit */int) var_1))))));
                            arr_79 [i_24] [i_24] [1U] [i_25] [i_26] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((var_11) % (((/* implicit */unsigned long long int) var_3)))))))));
                        }
                    } 
                } 
                var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) min(((+(((arr_60 [i_17] [i_17]) * (((/* implicit */unsigned long long int) arr_18 [i_17] [i_17] [i_21] [i_24] [i_24])))))), (((/* implicit */unsigned long long int) (+(65280LL)))))))));
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 10; i_27 += 4) 
                {
                    for (signed char i_28 = 0; i_28 < 10; i_28 += 3) 
                    {
                        {
                            var_54 -= ((/* implicit */unsigned long long int) var_0);
                            arr_86 [i_17] [i_21] [i_24] [i_27] [i_28] &= ((/* implicit */unsigned long long int) arr_54 [i_21] [i_28]);
                            var_55 = ((/* implicit */long long int) (~(arr_7 [i_21] [i_24] [i_27] [i_27])));
                            arr_87 [i_17] [2U] [i_17] [i_24] [i_24] [i_17] [i_17] = ((/* implicit */long long int) ((unsigned int) var_9));
                            arr_88 [i_28] [0] [(unsigned char)2] [i_28] [(signed char)7] [i_24] [i_28] = ((/* implicit */long long int) arr_12 [i_24] [i_24] [i_27]);
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned int i_29 = 3; i_29 < 20; i_29 += 1) 
    {
        var_56 = ((/* implicit */int) ((long long int) 826367463));
        arr_93 [i_29] [4LL] = ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) (unsigned char)65)) : (826367463)))));
    }
}
