/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136852
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */unsigned short) var_7);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((var_7) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)67)))))));
                            var_21 ^= ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)6120))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5] [i_2 - 1]))))) ^ (((/* implicit */int) ((unsigned char) arr_12 [(unsigned short)5] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                    arr_17 [i_0] [i_1 - 2] [i_2] [i_5] = ((/* implicit */unsigned long long int) (short)-15551);
                }
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    var_23 = ((/* implicit */short) (-(((int) (signed char)16))));
                    arr_20 [i_6] [i_1 - 1] [i_2] [i_2] [i_1 - 1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)87)), (arr_6 [i_0] [i_1 + 1])))) ? (((((/* implicit */_Bool) (short)13559)) ? (((/* implicit */int) var_13)) : (-1529224118))) : (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1 - 4] [i_1 - 4] [i_2 - 1])) ? (((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_1] [i_0] [i_2 - 1] [i_0])) : ((-(((/* implicit */int) var_12))))))) : ((+(((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_1] [i_2] [i_2] [i_6])))))))));
                }
                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)102)), ((unsigned short)58713)));
            }
            for (int i_7 = 2; i_7 < 16; i_7 += 1) 
            {
                arr_25 [i_0] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) ((_Bool) arr_9 [i_7] [i_1 + 1]))) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_1] [i_7] [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        {
                            var_25 = max((var_3), (((unsigned int) ((((/* implicit */_Bool) 67603543U)) ? (arr_22 [i_7] [i_0] [i_7 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1] [i_8])))))));
                            var_26 = ((/* implicit */unsigned short) arr_15 [i_9] [i_7] [i_7 - 2] [i_7]);
                            var_27 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((3552012594U) << (((var_7) - (940175357878958111ULL)))))) ? (max((((/* implicit */unsigned int) var_15)), (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_8] [i_8] [i_9]))))))));
                            var_28 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) 30617151U)) || (((/* implicit */_Bool) (signed char)-17))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (unsigned char i_12 = 2; i_12 < 17; i_12 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */short) var_6);
                            arr_41 [i_11] = ((unsigned char) (!(((/* implicit */_Bool) var_10))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_1 - 2] [i_12 - 1] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_1 + 1] [i_12 - 2]))) : (var_1)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_13 = 2; i_13 < 17; i_13 += 3) 
                {
                    for (int i_14 = 4; i_14 < 15; i_14 += 4) 
                    {
                        {
                            arr_46 [i_13] [i_14] = var_11;
                            var_31 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_16 = 2; i_16 < 15; i_16 += 2) 
                {
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) arr_22 [i_1] [i_16] [i_17]);
                            var_33 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-28119))))) ? ((+(arr_40 [i_0] [i_1 - 2] [i_16 - 2] [i_16 + 3] [i_1 - 1] [i_1 - 1]))) : (((arr_40 [i_0] [i_1 + 1] [i_16 + 3] [i_16] [i_1 - 3] [i_0]) / (arr_40 [i_17] [i_16 + 2] [i_16 - 2] [i_16 + 2] [i_1 - 2] [i_1])))));
                            var_34 = ((/* implicit */unsigned long long int) var_18);
                            arr_54 [i_0] [i_1 - 1] [i_1 - 1] [i_15] [i_16] [i_1 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1] [i_17])) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_15] [i_17 - 1])) : (((/* implicit */int) var_4)))))));
                            arr_55 [i_0] [i_0] [i_0] [i_16 - 1] [i_17] [i_17 - 1] = ((/* implicit */unsigned long long int) var_18);
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_37 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)25628)))))) ? (((/* implicit */unsigned int) (+(var_14)))) : (1790686929U)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_1 - 4] [i_0] [i_15] [i_0] [i_1 - 2])) << (((((/* implicit */int) var_0)) - (47)))))) : (((((/* implicit */_Bool) arr_9 [i_1 - 2] [(unsigned short)1])) ? (arr_9 [i_1 - 3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
            }
            arr_56 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_12)) << (((/* implicit */int) arr_31 [i_0] [i_1 + 1] [i_1 - 2] [i_1 - 4] [i_1 - 2]))))));
            var_36 = (short)17457;
        }
        for (unsigned int i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_19 = 3; i_19 < 14; i_19 += 3) 
            {
                for (short i_20 = 0; i_20 < 18; i_20 += 3) 
                {
                    {
                        var_37 = max((((/* implicit */int) (!(((((/* implicit */int) arr_5 [i_0] [i_18] [i_0])) > (var_14)))))), (((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_16 [i_20] [i_20] [i_20] [i_19] [i_18] [i_0])) - (84))))));
                        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-61)), ((short)-29221))))));
                    }
                } 
            } 
            arr_67 [i_0] = ((/* implicit */unsigned long long int) arr_59 [i_18] [i_18] [i_18] [i_18]);
        }
        for (unsigned int i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
            {
                var_39 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)28838))));
                var_40 = ((/* implicit */signed char) ((unsigned short) arr_48 [i_22] [i_22] [i_21] [i_0]));
                /* LoopSeq 3 */
                for (unsigned int i_23 = 0; i_23 < 18; i_23 += 2) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned short) (~(var_7)));
                    arr_75 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_5 [i_0] [i_21] [i_22])) : (((/* implicit */int) var_17))));
                }
                for (unsigned int i_24 = 0; i_24 < 18; i_24 += 2) /* same iter space */
                {
                    arr_79 [i_0] [i_0] [i_21] [i_22] [i_24] [i_24] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_24] [i_22] [i_22] [i_22] [i_0] [i_0])) ? (var_14) : (((/* implicit */int) var_18))));
                    var_42 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)29221))));
                    var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (-(arr_28 [i_0] [i_0] [i_22] [i_24]))))));
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)5441)) : (((/* implicit */int) arr_72 [i_24] [i_0]))));
                    arr_80 [i_21] [i_21] [i_21] [i_21] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (var_1)));
                }
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_45 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (unsigned short)41046)) / (((/* implicit */int) (short)21024)))));
                    arr_83 [i_21] [i_21] = ((/* implicit */int) arr_32 [i_0] [i_21] [i_22] [i_25] [i_25]);
                    var_46 = ((/* implicit */unsigned int) arr_51 [i_0] [i_21] [i_22] [i_25]);
                }
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_27 = 4; i_27 < 17; i_27 += 1) 
                {
                    for (unsigned short i_28 = 0; i_28 < 18; i_28 += 4) 
                    {
                        {
                            var_47 = arr_58 [i_27] [i_27 - 2];
                            var_48 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18))));
                            arr_93 [i_0] [i_21] [i_26] [i_27] = ((/* implicit */_Bool) (~(((unsigned long long int) arr_84 [i_21] [i_26]))));
                            arr_94 [i_0] [i_28] [i_26] [i_21] [i_28] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)23830)) ? (3888751542U) : (3373475027U)));
                            var_49 = ((/* implicit */short) var_2);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_29 = 0; i_29 < 18; i_29 += 3) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 18; i_30 += 2) 
                    {
                        {
                            arr_99 [i_0] [i_21] [i_21] [i_26] [i_21] [i_30] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (short)-29221)) && (((/* implicit */_Bool) 5393260947203996708ULL))))));
                            var_50 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13053483126505554908ULL)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) arr_65 [i_29] [i_29] [i_21] [i_29]))))))) ? (((((/* implicit */_Bool) ((int) arr_66 [i_0] [i_30] [i_21] [i_30]))) ? (((/* implicit */int) arr_74 [i_0] [i_0] [i_30])) : (((/* implicit */int) min(((short)29221), (((/* implicit */short) arr_35 [i_0] [i_26] [i_29] [i_26]))))))) : (((/* implicit */int) ((short) var_12)))));
                        }
                    } 
                } 
                var_51 = ((/* implicit */unsigned int) var_5);
                arr_100 [i_21] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) var_15)) != (((((/* implicit */_Bool) 11494539869016812592ULL)) ? (arr_47 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_18))))))), (((arr_78 [i_0] [i_21] [i_26] [i_26]) <= (((/* implicit */unsigned long long int) 1901706994210470680LL))))));
            }
            for (unsigned short i_31 = 1; i_31 < 17; i_31 += 2) 
            {
                var_52 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_0] [i_31 + 1] [i_31 + 1] [i_31])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */int) arr_102 [i_0] [i_31 + 1] [i_31] [i_31])) / (((/* implicit */int) var_18)))) : ((~(((/* implicit */int) (short)29220))))));
                var_53 = (((+((+(((/* implicit */int) (signed char)108)))))) / (((/* implicit */int) var_18)));
                arr_103 [i_21] [i_21] [i_31] = ((/* implicit */_Bool) var_3);
            }
            arr_104 [i_0] [i_21] [i_21] = ((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_0] [i_21] [i_21]))));
        }
        var_54 -= ((/* implicit */unsigned int) ((signed char) (-(6092997448760707258LL))));
    }
    var_55 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (var_10) : (11494539869016812592ULL)));
    var_56 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 13053483126505554908ULL)) || (((/* implicit */_Bool) (short)23161)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))));
}
