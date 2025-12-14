/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167526
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
    var_19 *= ((/* implicit */signed char) var_3);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 &= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_2 [(unsigned char)8])))) <= (((/* implicit */int) ((((/* implicit */int) arr_2 [(unsigned char)12])) <= (((/* implicit */int) var_2)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            var_21 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)54980))) - ((~(var_1)))));
            var_22 &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (min((9223372036854775807LL), (((/* implicit */long long int) var_16)))))))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned short i_3 = 4; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)3015), ((unsigned short)46469)))) ? (((/* implicit */int) (unsigned short)46469)) : (((/* implicit */int) arr_0 [i_0]))));
                        var_24 |= ((/* implicit */_Bool) max(((unsigned short)61163), (((/* implicit */unsigned short) (_Bool)0))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (arr_2 [(unsigned short)20])));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned short)46469)) <= (((/* implicit */int) (unsigned short)5710)))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_5 = 2; i_5 < 18; i_5 += 3) /* same iter space */
            {
                var_27 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_0] [i_4] [20LL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))) ^ (((/* implicit */int) ((_Bool) (unsigned char)46)))));
                var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5710))) : (arr_4 [i_0]))) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_5 + 4])))));
            }
            /* vectorizable */
            for (unsigned short i_6 = 2; i_6 < 18; i_6 += 3) /* same iter space */
            {
                var_29 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [(unsigned char)20] [i_4] [(unsigned char)16])) & (((/* implicit */int) arr_11 [(unsigned short)16] [i_4] [(unsigned short)10]))));
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    var_30 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)512)) && (((((/* implicit */_Bool) arr_9 [i_0] [i_4] [(unsigned char)18] [i_7])) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 1; i_8 < 18; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_2)) - (10709))))))));
                        var_32 &= ((/* implicit */unsigned char) var_6);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) var_11);
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)19067)))) ? (((/* implicit */int) arr_11 [i_6 + 4] [i_6] [(unsigned char)2])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)32720)) <= (((/* implicit */int) (unsigned short)65024))))))))));
                        var_35 |= ((unsigned char) arr_7 [(_Bool)1] [i_0] [i_6] [i_6 + 3]);
                    }
                }
                /* LoopSeq 2 */
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)32815));
                    var_37 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_28 [i_0] [i_4] [i_4] [i_6 + 4] [(_Bool)1] [i_0]))));
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) != ((~(((/* implicit */int) (unsigned char)225))))));
                    var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (+((+(var_1))))))));
                    var_40 = ((/* implicit */signed char) var_6);
                }
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                {
                    var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_2 [(unsigned char)16]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_42 = ((((/* implicit */_Bool) (unsigned char)255)) ? (-1902719485697974070LL) : (-5617205615960703899LL));
                        var_43 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) (unsigned char)161))));
                    }
                    var_44 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)56471)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))) : (var_1)));
                }
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) arr_12 [i_6 + 1] [i_6 - 2]))));
                    var_46 ^= ((/* implicit */signed char) arr_34 [i_0] [i_4] [i_6] [i_13]);
                    var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)18931)) | (((/* implicit */int) (unsigned char)153))));
                }
                for (unsigned short i_14 = 1; i_14 < 21; i_14 += 1) 
                {
                    var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)46469)) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                    var_49 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)32815)) >> (((((/* implicit */int) arr_16 [i_0] [i_4] [i_6] [i_14])) - (217))))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))));
                }
                var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [i_6 - 1])) : (((((/* implicit */_Bool) (unsigned short)16128)) ? (((/* implicit */int) (unsigned short)46469)) : (((/* implicit */int) (unsigned short)46468)))))))));
            }
            for (unsigned short i_15 = 2; i_15 < 18; i_15 += 3) /* same iter space */
            {
                var_51 -= ((/* implicit */unsigned short) (signed char)127);
                var_52 -= ((/* implicit */unsigned short) (signed char)-104);
            }
            var_53 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_0]))))));
        }
    }
    for (unsigned char i_16 = 2; i_16 < 6; i_16 += 1) /* same iter space */
    {
        var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned short)65024))))), (var_2)))) < (((/* implicit */int) arr_30 [(unsigned short)10] [(signed char)12] [i_16] [4LL] [i_16])))))));
        var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)0)))) | ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)210)) : (((/* implicit */int) var_17)))))))))));
        var_56 ^= arr_11 [(unsigned short)8] [i_16] [4LL];
    }
    /* vectorizable */
    for (unsigned char i_17 = 2; i_17 < 6; i_17 += 1) /* same iter space */
    {
        var_57 = (unsigned short)25744;
        /* LoopNest 2 */
        for (unsigned char i_18 = 2; i_18 < 7; i_18 += 3) 
        {
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_20 = 3; i_20 < 8; i_20 += 1) 
                    {
                        var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_17 + 2] [i_17 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                        var_59 |= ((/* implicit */unsigned short) ((((_Bool) arr_43 [i_17] [i_17] [i_19] [i_20])) ? (((/* implicit */int) arr_31 [i_18 - 1] [i_17 - 1])) : (((/* implicit */int) (unsigned short)35997))));
                        /* LoopSeq 3 */
                        for (unsigned char i_21 = 0; i_21 < 10; i_21 += 1) 
                        {
                            var_60 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_52 [i_17 + 2] [i_17 + 3]))));
                            var_61 = ((/* implicit */unsigned short) (unsigned char)192);
                            var_62 = ((/* implicit */unsigned short) min((var_62), (((/* implicit */unsigned short) (~(((((/* implicit */int) var_11)) * (((/* implicit */int) var_9)))))))));
                            var_63 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_18 - 1])) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) var_5))));
                        }
                        for (signed char i_22 = 0; i_22 < 10; i_22 += 4) 
                        {
                            var_64 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned char)209)))))));
                            var_65 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_62 [i_20 + 1] [i_18] [i_17 + 3])) ^ (((/* implicit */int) ((unsigned short) var_12)))));
                            var_66 = ((/* implicit */unsigned char) min((var_66), (((/* implicit */unsigned char) arr_10 [i_17 - 1] [i_18] [i_18]))));
                        }
                        for (unsigned short i_23 = 0; i_23 < 10; i_23 += 3) 
                        {
                            var_67 = ((/* implicit */unsigned short) arr_37 [(unsigned char)1]);
                            var_68 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)203)) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)86)))))));
                            var_69 = ((/* implicit */unsigned char) max((var_69), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_56 [i_23] [i_19] [i_17 - 1])))))));
                        }
                    }
                    var_70 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
                }
            } 
        } 
        var_71 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)220))));
    }
    var_72 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)128))));
}
