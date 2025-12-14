/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177556
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = arr_2 [(signed char)8];
                    var_18 -= ((/* implicit */signed char) (-(((((/* implicit */int) arr_5 [i_2 + 2] [i_2 - 2] [i_2 - 1])) * (((/* implicit */int) arr_5 [i_2 + 1] [i_2 - 1] [i_2 - 1]))))));
                    var_19 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */int) min((arr_1 [i_0]), ((unsigned short)61335)))), (((((/* implicit */int) (unsigned short)7)) + (((/* implicit */int) (unsigned short)4210)))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)39768)), (((((/* implicit */int) (unsigned short)11)) / (((/* implicit */int) arr_2 [i_2 + 3]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        arr_12 [i_3] &= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_3)) && ((_Bool)1))) && (((/* implicit */_Bool) arr_11 [i_3])))) && (((((/* implicit */_Bool) arr_11 [i_3])) || (((/* implicit */_Bool) ((unsigned short) arr_11 [i_3])))))));
        var_20 ^= ((/* implicit */signed char) arr_11 [i_3]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_4] [i_3])) >> (((((/* implicit */int) (signed char)-52)) + (60)))));
            var_22 += ((/* implicit */signed char) (((+(((/* implicit */int) arr_15 [(_Bool)1] [(_Bool)1])))) == (((/* implicit */int) ((unsigned short) (unsigned short)4200)))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (((/* implicit */int) (unsigned short)4211)) : (((/* implicit */int) ((unsigned short) (unsigned short)61315)))));
            arr_16 [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_13 [i_3] [i_4]))));
        }
        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
        {
            arr_19 [i_3] = ((/* implicit */signed char) (unsigned short)39871);
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)80))))) ? (((/* implicit */int) ((((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) var_11)))) <= (((((/* implicit */int) (unsigned short)4204)) + (((/* implicit */int) arr_10 [i_6]))))))) : (((/* implicit */int) min((arr_21 [i_6] [i_6] [(signed char)14] [i_3]), (((/* implicit */unsigned short) arr_20 [i_3] [(unsigned short)2] [i_3] [i_5])))))));
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) (((-(((/* implicit */int) (unsigned short)4201)))) <= (((/* implicit */int) arr_11 [i_6]))))) : (((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (signed char)-83))))) | ((+(((/* implicit */int) var_4)))))))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned short i_8 = 3; i_8 < 23; i_8 += 1) 
                    {
                        {
                            arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */signed char) min(((~(((/* implicit */int) ((unsigned short) arr_17 [i_5] [i_5]))))), (((/* implicit */int) var_10))));
                            arr_27 [i_8 - 1] [i_8 - 1] [i_8 - 3] [i_8 - 2] [i_6] [i_8] [i_8] = ((/* implicit */unsigned short) arr_23 [i_3] [i_7 - 1] [i_6] [i_8] [(unsigned short)6] [(unsigned short)6]);
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)7936)) >= (((/* implicit */int) (unsigned short)25664))))) > (((/* implicit */int) (unsigned short)15479))));
                            var_27 ^= ((unsigned short) var_10);
                        }
                    } 
                } 
                var_28 = (i_6 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_6])) <= (((/* implicit */int) arr_11 [i_3]))))) << ((((+(((/* implicit */int) arr_25 [i_3] [(unsigned short)8] [i_3] [i_3] [i_5] [(unsigned short)21] [i_6])))) - (37634)))))) : (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_6])) <= (((/* implicit */int) arr_11 [i_3]))))) << ((((((+(((/* implicit */int) arr_25 [i_3] [(unsigned short)8] [i_3] [i_3] [i_5] [(unsigned short)21] [i_6])))) - (37634))) - (12105))))));
            }
            for (signed char i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned short)39541)))))));
                /* LoopSeq 3 */
                for (unsigned short i_10 = 1; i_10 < 24; i_10 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_11 = 2; i_11 < 24; i_11 += 1) 
                    {
                        arr_34 [i_11] [(signed char)18] = ((/* implicit */signed char) (unsigned short)25664);
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((signed char) ((unsigned short) arr_10 [i_10]))))));
                    }
                    var_31 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_20 [i_10 + 1] [i_10 - 1] [i_9] [i_10 - 1])) ? (((/* implicit */int) arr_20 [i_10 + 1] [i_10 - 1] [i_3] [i_10 + 1])) : (((/* implicit */int) arr_31 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]))))));
                    var_32 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4194)) ? (((/* implicit */int) (unsigned short)15479)) : (((/* implicit */int) (unsigned short)51453))))) ? (((/* implicit */int) ((((/* implicit */int) arr_24 [i_3])) == (((/* implicit */int) (signed char)-58))))) : (((/* implicit */int) arr_31 [(unsigned short)20] [i_5] [i_10 - 1] [i_10 - 1])))), (((((/* implicit */int) min(((unsigned short)65529), (arr_11 [i_5])))) / (((/* implicit */int) (unsigned short)14067))))));
                }
                for (unsigned short i_12 = 1; i_12 < 24; i_12 += 2) /* same iter space */
                {
                    arr_38 [i_3] [i_3] [i_3] [i_3] [i_3] = ((_Bool) (+(((/* implicit */int) (_Bool)1))));
                    var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) var_1)) & (((/* implicit */int) arr_35 [i_3] [i_5] [(unsigned short)21])))) <= ((~(((/* implicit */int) (unsigned short)65526))))))) - (((((/* implicit */int) (_Bool)1)) | ((+(((/* implicit */int) arr_10 [i_3]))))))));
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)66))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [(signed char)15] [i_5] [i_3]))))) ? (((/* implicit */int) (unsigned short)4)) : ((+(((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) arr_22 [i_5] [i_9] [i_9]))))) ? (((/* implicit */int) arr_20 [i_12] [i_12 - 1] [i_3] [i_12 + 1])) : ((+(((/* implicit */int) (signed char)-6))))))));
                }
                for (unsigned short i_13 = 1; i_13 < 24; i_13 += 2) /* same iter space */
                {
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) max((((/* implicit */int) (!(var_12)))), ((~(((/* implicit */int) (unsigned short)61315)))))))));
                    var_36 ^= ((/* implicit */unsigned short) (_Bool)1);
                }
                /* LoopSeq 1 */
                for (unsigned short i_14 = 1; i_14 < 21; i_14 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_15 = 3; i_15 < 24; i_15 += 3) 
                    {
                        arr_47 [i_14] [i_9] [i_14] = ((/* implicit */_Bool) (unsigned short)65530);
                        arr_48 [i_3] [i_15] [i_15] [i_14] [i_15] = ((/* implicit */signed char) (-((+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (signed char)14)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        var_37 &= ((signed char) (signed char)-1);
                        arr_51 [i_3] [i_5] [i_3] [i_14] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-116))));
                    }
                    var_38 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)16)) >> (((/* implicit */int) arr_18 [i_14] [(unsigned short)8] [(unsigned short)8])))))) + (((((/* implicit */int) (unsigned short)40789)) / (((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_10)))))))));
                    var_39 = min((min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)37493)) >= (((/* implicit */int) (unsigned short)56832))))), (max(((unsigned short)16940), (((/* implicit */unsigned short) (_Bool)1)))))), (var_4));
                }
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (unsigned short)22))));
            }
            /* vectorizable */
            for (signed char i_17 = 0; i_17 < 25; i_17 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    arr_57 [i_18] [i_5] [i_17] [i_5] [i_18] [i_5] = ((/* implicit */signed char) (unsigned short)509);
                    arr_58 [(signed char)10] [i_5] [i_18] [i_5] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)0)))) ? (((((/* implicit */int) (unsigned short)14074)) << (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) var_7))));
                    var_41 = ((/* implicit */unsigned short) ((arr_10 [i_18 - 1]) ? (((/* implicit */int) arr_44 [i_5] [i_18] [i_17])) : (((/* implicit */int) (unsigned short)63230))));
                    var_42 &= ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)344)))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-57)) <= (((/* implicit */int) (signed char)127)))))));
                }
                for (signed char i_19 = 0; i_19 < 25; i_19 += 1) 
                {
                    arr_62 [(signed char)23] [i_17] [(unsigned short)18] [(unsigned short)18] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-123)) * (((/* implicit */int) arr_56 [i_3]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        arr_65 [i_20] [i_20] [i_20] [(_Bool)1] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)20496)) | (((/* implicit */int) ((signed char) (signed char)-105)))));
                        arr_66 [i_20] [i_20] [i_20] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) arr_11 [i_3])) % (((/* implicit */int) arr_39 [i_19] [(signed char)23] [(unsigned short)2] [(unsigned short)2] [(_Bool)1]))))));
                        var_43 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_36 [i_17]))));
                        var_44 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)42533)) >= (((/* implicit */int) arr_49 [i_3] [i_5] [i_17] [i_20] [i_20]))));
                    }
                    for (unsigned short i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        var_45 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                        arr_70 [i_5] [i_3] [i_5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [(signed char)7])) ? (((/* implicit */int) arr_14 [i_3] [(signed char)7])) : (((/* implicit */int) arr_14 [(unsigned short)7] [i_19]))));
                        arr_71 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((signed char) ((unsigned short) (unsigned short)37518)));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_22 = 2; i_22 < 23; i_22 += 1) 
                {
                    for (signed char i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        {
                            arr_76 [i_23] [i_5] [i_17] [i_22] [(signed char)8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (signed char)-22)))) != (((((/* implicit */_Bool) (unsigned short)24287)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) arr_44 [i_3] [i_23] [i_17]))))));
                            arr_77 [i_23] [i_22] [i_5] [i_5] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_16))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))));
                            var_46 = ((/* implicit */unsigned short) max((var_46), (arr_33 [i_22 - 1])));
                            arr_78 [i_3] [i_5] [i_3] [i_17] [i_23] &= ((/* implicit */_Bool) arr_68 [i_5] [(signed char)2] [(unsigned short)10] [i_5] [i_5] [i_22 - 2]);
                        }
                    } 
                } 
            }
            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (signed char)0))) * (((arr_23 [i_3] [i_3] [i_3] [i_3] [(signed char)10] [i_5]) ? (((/* implicit */int) arr_36 [i_3])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_33 [i_5])) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1])) > (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-44)))))))))));
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            var_48 += ((/* implicit */_Bool) var_2);
            var_49 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27816)))))))));
            var_50 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-91))))));
        }
        arr_81 [i_3] = ((unsigned short) min((((/* implicit */int) ((unsigned short) (_Bool)1))), (((((/* implicit */int) arr_64 [i_3] [(signed char)11] [(signed char)11] [(signed char)11] [i_3])) & (((/* implicit */int) arr_74 [i_3] [i_3] [i_3] [i_3] [i_3]))))));
    }
    for (unsigned short i_25 = 2; i_25 < 20; i_25 += 4) 
    {
        var_51 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_79 [i_25] [i_25] [i_25 - 2])) * (((/* implicit */int) arr_25 [i_25] [i_25] [i_25] [i_25] [i_25 + 3] [i_25] [i_25]))))) ? (((((/* implicit */int) arr_31 [i_25 - 2] [i_25 + 3] [i_25 + 2] [i_25 + 1])) >> (((((/* implicit */int) arr_24 [i_25])) + (37))))) : (((((((/* implicit */int) arr_13 [i_25] [i_25 - 2])) % (((/* implicit */int) var_16)))) + ((-(((/* implicit */int) arr_23 [i_25 - 2] [i_25] [i_25] [(unsigned short)16] [i_25] [i_25]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_26 = 0; i_26 < 24; i_26 += 4) 
        {
            arr_88 [i_25] = ((signed char) (unsigned short)14086);
            /* LoopNest 3 */
            for (signed char i_27 = 0; i_27 < 24; i_27 += 4) 
            {
                for (unsigned short i_28 = 1; i_28 < 23; i_28 += 4) 
                {
                    for (unsigned short i_29 = 1; i_29 < 22; i_29 += 1) 
                    {
                        {
                            var_52 = ((unsigned short) ((((/* implicit */int) arr_17 [i_25 - 2] [i_29 - 1])) * (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (unsigned short)8713)))))));
                            var_53 ^= ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) ((unsigned short) (signed char)-1))) / (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)91))))))));
                        }
                    } 
                } 
            } 
        }
    }
}
