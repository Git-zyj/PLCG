/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140592
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
    var_20 = ((/* implicit */_Bool) max((max((52571198U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) min((((var_17) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17)))), (((/* implicit */int) var_5)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) ((arr_1 [i_0]) - (52571198U)));
        var_22 = ((((/* implicit */unsigned long long int) 3663281844U)) - (((((/* implicit */_Bool) (unsigned char)73)) ? (var_2) : (((/* implicit */unsigned long long int) 52571198U)))));
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)73)) : (((/* implicit */int) var_19)))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned long long int) (+(arr_3 [i_0] [i_0])));
            arr_8 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) var_16);
            /* LoopNest 2 */
            for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        arr_16 [i_4] [9ULL] [i_4] = ((((/* implicit */unsigned long long int) ((var_15) + (2114975911U)))) - (((arr_4 [i_0] [i_2] [i_4]) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71))))));
                        var_26 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_15)))));
                    }
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((_Bool) (unsigned short)33897)))));
            var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (arr_15 [i_0] [i_0]) : (arr_15 [i_0] [i_0])));
            /* LoopSeq 2 */
            for (int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
            {
                arr_23 [i_0] [i_5] = ((/* implicit */unsigned int) arr_18 [i_0]);
                /* LoopSeq 4 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    var_29 = ((/* implicit */_Bool) ((arr_4 [i_0] [i_5] [i_6]) ? (((/* implicit */int) arr_4 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_4 [i_7] [i_6] [i_5]))));
                    var_30 = ((/* implicit */unsigned int) ((-4521342228297368758LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25394)))));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_0] [i_5] [i_6] [i_6] [i_7])))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_0] [21ULL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) arr_12 [i_0] [i_8] [i_6] [i_0] [i_5])) : (((/* implicit */int) arr_12 [(unsigned char)14] [i_5] [i_6] [i_0] [i_8]))));
                        arr_30 [i_0] [i_0] [i_6] [i_7] [i_0] &= ((/* implicit */short) arr_21 [i_0]);
                        arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [(_Bool)1] &= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56755))) | (arr_28 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31638)))));
                        var_32 &= ((/* implicit */unsigned short) ((unsigned char) arr_25 [i_8 + 1] [i_8 + 1] [i_8 + 1] [(unsigned char)4] [(short)21]));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_34 [i_0] [(unsigned short)9] = ((/* implicit */unsigned short) ((((var_13) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0]))) : (463457078011852483LL))) - (((/* implicit */long long int) arr_13 [i_6] [i_6] [i_6] [i_6]))));
                        arr_35 [i_7] [i_7] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((unsigned short) arr_22 [i_6] [i_6] [i_9]))) : (((/* implicit */int) ((((/* implicit */int) arr_21 [i_5])) != (((/* implicit */int) arr_6 [i_5])))))));
                        var_33 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_12))))));
                    }
                }
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) 0))));
                    var_35 = ((/* implicit */unsigned int) arr_4 [i_10 + 1] [i_10 + 1] [i_10 + 1]);
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(463457078011852478LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_6])))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0])))))));
                    var_37 *= ((/* implicit */_Bool) (unsigned char)213);
                }
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                {
                    arr_46 [i_12] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_44 [21U] [i_12]))));
                    arr_47 [i_0] [21LL] [i_6] [i_6] [i_12] [i_12 + 1] = ((/* implicit */unsigned char) arr_21 [i_6]);
                }
            }
            for (int i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
            {
                arr_50 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) 18446744073709551598ULL);
                arr_51 [(unsigned char)17] [i_5] [i_13] [i_13] = ((/* implicit */unsigned char) arr_10 [i_0] [i_5] [i_0] [i_0]);
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 2; i_16 < 20; i_16 += 4) 
            {
                {
                    var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((unsigned char) arr_9 [i_16] [i_16 + 2] [i_16])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        arr_60 [i_17] [i_17] [i_14] [i_14] [i_15] [i_14] = ((/* implicit */unsigned char) ((arr_13 [i_14] [i_17] [i_16 + 1] [(short)10]) >= (arr_13 [i_17] [i_14] [i_16 - 2] [i_17])));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_15] [i_16 - 1] [i_16 + 2] [i_16 + 2] [i_16 - 1] [i_17])) ? (((/* implicit */int) arr_25 [i_16 - 1] [i_16] [i_16 + 1] [i_16 - 1] [(short)3])) : (((/* implicit */int) arr_48 [i_14] [i_15] [i_16 + 1]))));
                        var_40 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_16 - 2] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_14] [i_16 - 2] [i_16] [i_16]))) : (arr_15 [i_16 - 2] [i_16])));
                    }
                }
            } 
        } 
        arr_61 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)511)) << (((((/* implicit */int) arr_18 [i_14])) - (23835)))));
    }
    for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) (unsigned char)123)))))), (max((((/* implicit */unsigned long long int) var_16)), (arr_37 [i_18] [i_18] [i_18] [i_18] [i_18])))));
        arr_65 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 52571182U)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_14 [i_18] [i_18] [i_18] [(unsigned char)20] [i_18]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15))))))))) : (max((-463457078011852478LL), (((/* implicit */long long int) (_Bool)0))))));
        var_42 = ((/* implicit */short) ((26125888) - (((/* implicit */int) (unsigned short)31638))));
        var_43 = ((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)248)), ((short)7264)));
    }
    for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned int) min((((arr_5 [i_19] [i_19] [i_19]) ? (((/* implicit */int) arr_5 [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_42 [18LL])))), (((arr_5 [i_19] [i_19] [i_19]) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_5 [i_19] [i_19] [i_19]))))));
        /* LoopSeq 3 */
        for (long long int i_20 = 0; i_20 < 22; i_20 += 1) 
        {
            var_45 = ((/* implicit */_Bool) max((var_45), (var_12)));
            arr_70 [i_20] = ((/* implicit */unsigned char) max((min((max((0ULL), (((/* implicit */unsigned long long int) arr_33 [i_19] [i_19])))), (((/* implicit */unsigned long long int) var_19)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)8780)), (((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (-1LL))))))));
            /* LoopNest 2 */
            for (short i_21 = 3; i_21 < 21; i_21 += 2) 
            {
                for (unsigned char i_22 = 0; i_22 < 22; i_22 += 2) 
                {
                    {
                        var_46 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)236)) ? (arr_0 [i_20]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_21 - 2] [i_21] [i_21 - 3] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_19] [i_22] [6LL] [i_22]))) : (max((((/* implicit */unsigned int) (unsigned char)116)), (1210402448U))))))));
                        var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((18446744073709551615ULL) | (((/* implicit */unsigned long long int) arr_69 [i_19] [i_20])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_22] [i_20] [(unsigned char)8] [i_20] [i_19])))))) ? (max((max((arr_13 [i_19] [i_21] [i_20] [i_19]), (arr_1 [i_22]))), (((/* implicit */unsigned int) arr_21 [i_21 + 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (var_3))))))))));
                        var_48 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_21 + 1] [i_21 - 3])) ? (arr_69 [i_21 - 3] [i_21 - 1]) : (arr_69 [i_21 - 2] [i_21 - 1]))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_23 = 0; i_23 < 22; i_23 += 3) 
        {
            var_49 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (short)-7264)) : (((/* implicit */int) arr_62 [i_19] [i_23])))));
            var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)238)) - (((/* implicit */int) (short)7267))));
        }
        for (unsigned short i_24 = 0; i_24 < 22; i_24 += 3) 
        {
            var_51 = ((/* implicit */unsigned long long int) var_17);
            arr_82 [i_19] = ((/* implicit */int) ((4033392520182562297ULL) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_73 [(unsigned char)12] [(unsigned char)12] [i_24] [i_24] [i_19] [i_24])))))));
        }
    }
}
