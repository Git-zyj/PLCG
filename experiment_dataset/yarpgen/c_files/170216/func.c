/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170216
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (var_4)));
    var_15 = var_1;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_10 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((signed char) var_8));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((var_3), (var_9))))));
                            var_17 = ((/* implicit */unsigned short) arr_2 [i_0] [i_1]);
                            arr_13 [i_1] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_6))))), (arr_2 [i_3 + 1] [i_3 + 1])))) - (min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_6)), (var_8)))), (min((var_1), (((/* implicit */unsigned int) arr_1 [i_4]))))))));
                        }
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_3] = ((/* implicit */unsigned int) ((_Bool) var_12));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_3 - 1] [i_2])))))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (max((var_10), (((/* implicit */unsigned short) arr_1 [i_2]))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [i_3] [3U] [i_3] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_6] [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_6] [i_3 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) arr_4 [i_3 + 1] [i_1] [i_3 + 1]))));
                            arr_21 [i_3] [i_3 - 1] [i_2] [i_1] [i_3] = ((unsigned short) var_1);
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_3 + 1] [5] [i_3 + 1] [i_2] [i_3 + 1] [i_2])) ? (((/* implicit */unsigned int) ((int) var_4))) : (((var_1) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 - 1])))))));
                        }
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_0] [i_1] [i_0] [i_3 + 1] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */int) min((var_22), ((-((-(((/* implicit */int) arr_8 [i_0] [i_3 - 1] [i_3] [i_0]))))))));
                            var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) 1759810938U)) || (((/* implicit */_Bool) 2)))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                {
                    arr_32 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15510)))))))));
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)));
                        /* LoopSeq 2 */
                        for (int i_11 = 2; i_11 < 10; i_11 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_0))));
                            var_26 = min((((/* implicit */unsigned short) ((signed char) 2250264846U))), (arr_22 [i_0] [(signed char)10] [4] [i_9] [4] [i_9]));
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 10; i_12 += 2) /* same iter space */
                        {
                            arr_44 [i_0] [i_0] [i_9] [i_10] [i_10] [(signed char)9] = ((/* implicit */unsigned short) (-((+(arr_23 [i_9] [i_9] [i_9] [i_9] [i_12])))));
                            var_27 = ((_Bool) arr_36 [i_8 - 1] [i_8 - 1] [i_8 - 1] [(signed char)8] [i_8 - 1]);
                            var_28 = ((/* implicit */signed char) ((unsigned short) (unsigned short)56433));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                        }
                        var_30 = ((/* implicit */int) ((signed char) max((((/* implicit */unsigned int) ((unsigned short) var_3))), (max((var_12), (((/* implicit */unsigned int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 1; i_13 < 10; i_13 += 1) 
                    {
                        var_31 = ((/* implicit */int) min((var_31), ((~(((/* implicit */int) (signed char)-120))))));
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((signed char) arr_29 [i_0] [i_8 - 1] [i_0])))));
                    }
                    arr_48 [i_9] [i_9] [(unsigned short)0] [i_0] = max((arr_7 [3U] [(signed char)7] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) var_11)) <= (((/* implicit */int) max((arr_39 [i_8 - 1]), (var_3))))))));
                }
            } 
        } 
        arr_49 [i_0] = ((/* implicit */unsigned short) var_0);
        var_33 = ((/* implicit */_Bool) var_11);
        var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned short) ((signed char) (unsigned short)42148))), (var_11)))))));
    }
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) var_0))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            arr_55 [i_14] = ((/* implicit */signed char) arr_52 [i_14 - 1] [i_15]);
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (+(((/* implicit */int) arr_50 [i_14 - 1])))))));
            /* LoopSeq 2 */
            for (signed char i_16 = 1; i_16 < 22; i_16 += 4) 
            {
                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_14])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_58 [i_14] [i_15] [i_14] [i_15]))))));
                /* LoopSeq 4 */
                for (signed char i_17 = 2; i_17 < 22; i_17 += 4) 
                {
                    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) << (((1461498509) - (1461498481))))))));
                    var_39 = ((/* implicit */_Bool) min((var_39), ((!(((/* implicit */_Bool) (+(var_12))))))));
                    arr_61 [i_14] [i_15] [i_16 - 1] [(signed char)20] [(_Bool)1] = ((/* implicit */unsigned int) arr_50 [i_14 - 1]);
                    arr_62 [i_14] [i_14 - 1] [i_14] = ((signed char) (signed char)127);
                    var_40 = ((/* implicit */int) max((var_40), (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-119))))) / (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (signed char)-19))))))));
                }
                for (signed char i_18 = 4; i_18 < 20; i_18 += 2) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned short) ((signed char) var_8));
                    arr_66 [i_14] [i_14] [i_14] [i_15] [i_14] [(signed char)17] = ((/* implicit */signed char) ((unsigned short) arr_64 [i_14 - 1] [i_16 + 1] [i_18 - 2] [(_Bool)1]));
                    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) var_3))));
                }
                for (signed char i_19 = 4; i_19 < 20; i_19 += 2) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) var_0))));
                    var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) arr_51 [i_14]))));
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_72 [i_14] [i_14] [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) ((unsigned int) arr_56 [i_14 - 1] [i_14 - 1] [i_14 - 1]));
                        arr_73 [i_20] [i_20] [i_16] [i_19] [i_20] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_69 [i_14] [i_19 - 3] [i_19] [i_19 + 3]))));
                        var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) var_4))));
                    }
                    var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_69 [i_14] [i_15] [i_16] [17])) ? (((var_6) ? (((/* implicit */int) arr_63 [i_14] [i_15] [i_16] [i_15])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) arr_58 [i_14] [i_14] [i_14] [i_19])))))));
                }
                for (unsigned short i_21 = 0; i_21 < 23; i_21 += 2) 
                {
                    var_47 = ((/* implicit */_Bool) min((var_47), (arr_65 [i_14] [i_15] [i_16] [i_21] [i_21])));
                    arr_76 [i_14 - 1] [i_14] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_68 [i_14] [i_15] [i_16 + 1] [(unsigned short)8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))));
                }
                var_48 = ((/* implicit */signed char) var_4);
                arr_77 [i_14] [(_Bool)1] = ((/* implicit */_Bool) var_1);
            }
            for (unsigned short i_22 = 3; i_22 < 21; i_22 += 4) 
            {
                arr_80 [i_15] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) & (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_11)))))));
                var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_56 [i_14 - 1] [i_22] [i_22 - 2])) : (((/* implicit */int) arr_75 [i_14 - 1] [i_14 - 1] [(unsigned short)15])))))));
                arr_81 [i_22 - 2] [i_15] [i_14] = ((/* implicit */unsigned int) (-(((int) (_Bool)0))));
                var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_14]))) : (arr_64 [i_14 - 1] [i_15] [i_22] [i_14 - 1])))) || (((/* implicit */_Bool) arr_64 [i_15] [i_22 + 1] [i_22] [i_22])))))));
                arr_82 [i_22] [i_14] [i_14] [i_14] = ((unsigned short) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_9))));
            }
            var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + ((+(((/* implicit */int) (signed char)33)))))))));
        }
        for (int i_23 = 0; i_23 < 23; i_23 += 2) 
        {
            var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) arr_74 [i_14] [i_14] [i_23] [i_23]))));
            var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_8)))), (min((((/* implicit */int) var_3)), (arr_68 [i_14] [i_14] [i_14 - 1] [i_14]))))))));
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            var_54 = ((/* implicit */signed char) max((var_54), (((signed char) max((arr_53 [i_14 - 1] [i_24] [i_24]), (((/* implicit */unsigned short) arr_69 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1])))))));
            /* LoopNest 2 */
            for (unsigned short i_25 = 1; i_25 < 20; i_25 += 3) 
            {
                for (unsigned short i_26 = 3; i_26 < 21; i_26 += 3) 
                {
                    {
                        var_55 = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [(signed char)9] [i_25] [i_14]))))), (arr_70 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))) << (((arr_89 [(signed char)20] [i_24] [i_25]) - (1847466352U)))));
                        arr_94 [i_24] = var_11;
                    }
                } 
            } 
        }
    }
    for (int i_27 = 2; i_27 < 8; i_27 += 4) 
    {
        var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (3721633761U))))));
        var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))), (max((var_7), (((/* implicit */unsigned int) arr_56 [i_27] [i_27] [i_27])))))) == (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_13))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_7))))))))));
        var_58 = ((/* implicit */signed char) min((var_58), (((/* implicit */signed char) max(((-(293883999))), (max((((2147483643) << (((((/* implicit */int) (unsigned short)76)) - (76))))), (((/* implicit */int) (unsigned short)40418)))))))));
        arr_97 [i_27] [i_27] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (min((((/* implicit */unsigned int) min((((/* implicit */int) arr_86 [i_27] [14])), (arr_68 [i_27] [i_27] [i_27] [i_27])))), ((-(var_1))))) : (((unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1)))))));
    }
    for (signed char i_28 = 2; i_28 < 19; i_28 += 4) 
    {
        arr_102 [i_28] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)26156)), (min((822850173), (((/* implicit */int) (signed char)119))))))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_90 [i_28 - 2] [i_28 - 1] [i_28 + 1] [i_28 - 1]))) != (((((/* implicit */int) arr_54 [(unsigned short)14] [(unsigned short)1] [(unsigned short)1])) / (((/* implicit */int) var_13))))))) : (max((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_86 [i_28 + 1] [i_28])))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_57 [i_28 + 1])) : (((/* implicit */int) var_13))))))));
        arr_103 [i_28] = ((/* implicit */unsigned short) arr_70 [(unsigned short)20] [i_28] [i_28] [i_28] [(unsigned short)20] [i_28] [i_28]);
        var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_71 [i_28] [i_28] [i_28] [i_28] [(_Bool)1] [i_28 + 1]))))) ? (((/* implicit */int) ((unsigned short) arr_84 [3] [i_28 - 2]))) : ((-(((/* implicit */int) var_8))))));
    }
    var_60 = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
    var_61 = ((/* implicit */_Bool) var_4);
}
