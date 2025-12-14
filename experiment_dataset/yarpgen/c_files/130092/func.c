/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130092
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
    var_15 = ((/* implicit */signed char) var_9);
    var_16 -= (~(((/* implicit */int) var_4)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 |= ((/* implicit */signed char) 0U);
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_18 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 234518823)) ? (((/* implicit */int) arr_1 [i_2] [i_1])) : (((/* implicit */int) arr_6 [i_0] [(signed char)13] [(short)10])))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 13; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_11 [(_Bool)1] [i_1] [i_3] = ((/* implicit */int) (-(4294967287U)));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_3 [i_1 + 1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3 - 1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2] [i_4])) && (((/* implicit */_Bool) var_4))))) : (((int) (unsigned char)6)))))));
                            var_20 -= ((/* implicit */short) arr_3 [i_1] [i_4]);
                            var_21 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_10)) ? (2431956527U) : (1428145115U)))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) 2123305636);
            }
            for (short i_5 = 2; i_5 < 12; i_5 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    for (int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        {
                            arr_20 [i_7] = ((/* implicit */signed char) ((unsigned char) arr_8 [i_7] [i_7] [i_0] [i_5 + 2] [i_0]));
                            var_23 = ((/* implicit */unsigned char) ((signed char) 2923166965U));
                            var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((2866822180U) < (((/* implicit */unsigned int) 2147483647)))))));
                            arr_21 [i_7] [i_7] = ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((arr_18 [i_0] [i_5 + 2] [i_1 - 1] [4] [i_0] [6LL] [i_0]) || (((/* implicit */_Bool) 4294967292U)))) ? (-3042057375338075594LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_5 + 1] [i_5] [i_5])))))))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            var_26 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)213)) && (((/* implicit */_Bool) arr_5 [i_0] [i_5 + 1] [i_0] [i_0])))))));
                            var_27 |= ((((/* implicit */int) (signed char)35)) ^ (((((/* implicit */_Bool) arr_3 [i_8] [i_5 - 1])) ? (((/* implicit */int) arr_15 [i_8] [i_1 + 1] [i_5 - 1])) : (((/* implicit */int) var_11)))));
                            var_28 = ((/* implicit */unsigned char) ((unsigned int) 22U));
                            arr_26 [i_8] [i_1] [i_8] [i_1] [i_8] = var_11;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    arr_30 [i_0] [(_Bool)1] [i_5] = ((/* implicit */signed char) (unsigned char)250);
                    var_29 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_5] [i_1 + 2] [i_1 - 1] [i_1 + 2]))));
                    var_30 = ((/* implicit */int) ((unsigned int) arr_22 [i_1] [i_1 + 2] [i_5 + 1] [i_10]));
                    var_31 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned char)76))));
                }
            }
            for (short i_11 = 2; i_11 < 12; i_11 += 4) /* same iter space */
            {
                var_32 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)129))));
                /* LoopNest 2 */
                for (signed char i_12 = 3; i_12 < 12; i_12 += 4) 
                {
                    for (unsigned char i_13 = 1; i_13 < 13; i_13 += 2) 
                    {
                        {
                            var_33 -= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_13 + 1] [i_12 - 3])) <= (((/* implicit */int) arr_2 [i_13 - 1] [i_12 + 1]))));
                            var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_0] [i_12] [i_0] [i_11] [(signed char)7] [i_1 - 1] [i_13 + 1]))));
                        }
                    } 
                } 
            }
            for (short i_14 = 2; i_14 < 12; i_14 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (+((~(arr_16 [i_0] [1] [i_14 + 1] [i_14 + 1]))))))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 14; i_15 += 1) 
                {
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) 2029049045U))));
                            var_37 += ((((/* implicit */_Bool) arr_40 [i_14 + 2] [i_1 - 1])) ? (arr_29 [i_14] [i_14] [i_14] [i_16] [i_1 + 1] [(short)1]) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((((/* implicit */int) var_4)) + (30328))) - (12)))))));
                            var_38 = ((/* implicit */int) (~(var_9)));
                        }
                    } 
                } 
                var_39 = ((/* implicit */int) min((var_39), (((arr_32 [i_1 - 1] [i_1 - 1] [i_14 + 1] [i_14 + 1]) ? (((/* implicit */int) arr_32 [i_1 - 1] [i_1 - 1] [i_14 - 2] [i_14 + 2])) : (((/* implicit */int) arr_32 [i_1 + 2] [i_1 + 1] [i_14 - 2] [i_14 + 1]))))));
            }
            arr_47 [i_0] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))))));
            arr_48 [i_1 + 1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (-7243368684242355758LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (arr_28 [i_1] [i_1] [i_1] [i_0] [i_0]) : (((/* implicit */int) var_11))));
        }
        for (signed char i_17 = 1; i_17 < 12; i_17 += 3) /* same iter space */
        {
            var_40 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) arr_2 [(unsigned char)12] [i_17 - 1]))))));
            var_41 = ((/* implicit */signed char) arr_16 [i_17] [(unsigned char)11] [i_0] [(short)8]);
        }
        /* LoopNest 2 */
        for (unsigned char i_18 = 1; i_18 < 13; i_18 += 1) 
        {
            for (signed char i_19 = 0; i_19 < 14; i_19 += 2) 
            {
                {
                    var_42 = ((/* implicit */_Bool) min((var_42), (arr_34 [7] [7])));
                    var_43 = ((/* implicit */unsigned int) (-(arr_9 [i_18 - 1] [i_18 - 1] [i_18 - 1] [i_18 - 1])));
                    /* LoopSeq 2 */
                    for (unsigned int i_20 = 4; i_20 < 13; i_20 += 1) 
                    {
                        var_44 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) var_5)) % (3U)));
                        var_45 = ((unsigned int) arr_27 [i_0] [i_0] [i_0] [(unsigned char)1]);
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_20 - 4])) ? (((/* implicit */int) arr_12 [i_19])) : (((/* implicit */int) arr_12 [i_19]))));
                    }
                    for (int i_21 = 0; i_21 < 14; i_21 += 4) 
                    {
                        arr_63 [2U] [i_18] = ((/* implicit */long long int) arr_34 [i_0] [i_21]);
                        var_47 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) arr_39 [(unsigned char)0] [i_18] [i_18] [(unsigned char)6] [i_18] [i_21] [i_21])) + (((/* implicit */int) (short)-23758)))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_22 = 0; i_22 < 14; i_22 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_23 = 0; i_23 < 14; i_23 += 1) 
        {
            for (short i_24 = 0; i_24 < 14; i_24 += 2) 
            {
                {
                    var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_24] [i_24] [i_24])))))));
                    /* LoopSeq 4 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_26 = 0; i_26 < 14; i_26 += 3) 
                        {
                            var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) arr_69 [(signed char)11]))));
                            var_50 = ((((((/* implicit */int) arr_19 [i_26] [i_25] [i_24] [i_23] [i_22])) + (2147483647))) >> (((arr_5 [i_23] [i_22] [6LL] [i_25]) + (1429973880))));
                            arr_77 [i_22] [i_24] [i_24] [(_Bool)1] |= ((/* implicit */long long int) (-(arr_55 [i_23])));
                        }
                        var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) (~(((1911291061U) & (((/* implicit */unsigned int) arr_43 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24])))))))));
                    }
                    for (short i_27 = 0; i_27 < 14; i_27 += 4) /* same iter space */
                    {
                        var_52 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) (unsigned char)16)))));
                        var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_78 [i_22] [i_23] [i_24] [i_27])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_22] [i_22] [i_22]))) : (3224090925U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((1371800335U) < (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
                        var_54 = ((/* implicit */int) (((-(arr_37 [i_22] [i_23] [i_23] [i_27] [i_27]))) & (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_22] [i_22] [(unsigned char)8] [(unsigned char)10] [i_22] [i_22] [i_23])))));
                    }
                    for (short i_28 = 0; i_28 < 14; i_28 += 4) /* same iter space */
                    {
                        var_55 = ((/* implicit */unsigned char) max((var_55), (((/* implicit */unsigned char) arr_5 [i_28] [(_Bool)0] [(_Bool)0] [i_22]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_29 = 2; i_29 < 10; i_29 += 4) 
                        {
                            var_56 = ((/* implicit */unsigned int) arr_2 [i_29] [i_22]);
                            var_57 = ((/* implicit */int) ((arr_37 [i_22] [i_22] [i_23] [i_28] [i_29 + 1]) / (((/* implicit */long long int) (~(arr_43 [i_22] [(_Bool)1] [i_22] [i_28] [i_29] [8LL]))))));
                        }
                        arr_86 [(short)12] [(short)12] [i_23] [i_23] [i_22] [i_22] = ((/* implicit */short) 750179339U);
                    }
                    for (short i_30 = 0; i_30 < 14; i_30 += 4) /* same iter space */
                    {
                        var_58 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_22])) ? (-9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)18)))));
                        var_59 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (short)-24346))))));
                    }
                }
            } 
        } 
        arr_89 [i_22] [11LL] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_75 [i_22] [i_22] [(unsigned char)4] [12] [i_22])) >= (-1144419664))))));
        /* LoopSeq 2 */
        for (long long int i_31 = 2; i_31 < 12; i_31 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_32 = 2; i_32 < 12; i_32 += 2) 
            {
                for (unsigned char i_33 = 0; i_33 < 14; i_33 += 1) 
                {
                    {
                        var_60 = ((/* implicit */int) 1848486265U);
                        arr_101 [(unsigned char)4] [(unsigned char)4] [i_33] [i_33] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_62 [i_22] [i_22] [i_22]))) + (288230376151580672LL)))) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) arr_0 [i_22]))));
                    }
                } 
            } 
            var_61 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_91 [i_22] [i_22] [i_31 + 2])) ? (arr_72 [i_22] [i_22] [i_22] [i_22]) : (((/* implicit */int) (_Bool)1)))) & (((((/* implicit */_Bool) arr_19 [i_22] [i_31] [(unsigned char)11] [i_22] [(unsigned char)11])) ? (((/* implicit */int) arr_4 [(_Bool)1] [i_22] [i_31 - 1])) : (((/* implicit */int) (unsigned char)248))))));
        }
        for (long long int i_34 = 2; i_34 < 12; i_34 += 4) /* same iter space */
        {
            var_62 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [(unsigned char)10] [i_34])) && (((/* implicit */_Bool) arr_56 [i_34] [i_34] [i_34]))));
            var_63 = ((/* implicit */short) (+(((2330121658331986517LL) / (((/* implicit */long long int) 3835686589U))))));
        }
        var_64 = ((((/* implicit */int) arr_96 [i_22] [i_22] [i_22])) & (((/* implicit */int) (unsigned char)181)));
    }
    for (unsigned char i_35 = 0; i_35 < 14; i_35 += 1) /* same iter space */
    {
        var_65 = ((/* implicit */short) min((((((/* implicit */_Bool) min(((unsigned char)117), (((/* implicit */unsigned char) arr_34 [i_35] [i_35]))))) ? (arr_37 [i_35] [i_35] [(_Bool)1] [i_35] [i_35]) : (arr_37 [(short)6] [(short)6] [(unsigned char)6] [12U] [12]))), (((/* implicit */long long int) (unsigned char)235))));
        var_66 = ((/* implicit */_Bool) max((min((((/* implicit */signed char) arr_84 [12U] [4U] [4U] [4U] [12U])), (arr_96 [i_35] [i_35] [10]))), (max((var_12), (arr_41 [i_35] [i_35] [(_Bool)1] [i_35])))));
        var_67 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) ((unsigned char) var_14))), (((((/* implicit */_Bool) 1848486255U)) ? (-288230376151580663LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    }
    /* vectorizable */
    for (unsigned char i_36 = 0; i_36 < 11; i_36 += 3) 
    {
        var_68 = ((((/* implicit */_Bool) arr_38 [(signed char)11] [i_36])) ? (arr_38 [i_36] [i_36]) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
        arr_110 [i_36] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (3835686589U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (arr_28 [i_36] [i_36] [i_36] [i_36] [i_36]) : (((/* implicit */int) (!(((/* implicit */_Bool) 1108931547)))))));
    }
}
