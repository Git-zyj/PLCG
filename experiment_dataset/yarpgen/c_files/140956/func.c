/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140956
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)56)) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1] [i_0]))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                        {
                            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (~(((/* implicit */int) (short)-7750)))))));
                            arr_12 [i_0] [(signed char)1] [i_2] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-106))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            arr_15 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [i_3] [i_0] [i_3] [(unsigned short)1]));
                            arr_16 [i_3] [i_3] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_1]))));
                        }
                        for (short i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            arr_19 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((arr_7 [i_0] [i_1] [(short)14] [i_3]) ? (((/* implicit */int) arr_7 [i_0] [i_0] [(unsigned short)5] [i_0])) : (((/* implicit */int) arr_9 [(signed char)14] [i_2])))) - (((/* implicit */int) arr_13 [i_0] [i_1] [i_2]))));
                            var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_7 = 2; i_7 < 14; i_7 += 1) 
                        {
                            arr_22 [i_0] [i_1] [(_Bool)1] [i_1] [i_7] [i_3] [(unsigned short)8] &= ((/* implicit */short) (~(((/* implicit */int) arr_7 [(unsigned short)17] [i_3] [i_2] [i_0]))));
                            arr_23 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (short)7760)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (short)4420))))))) ? (((/* implicit */int) min((max((((/* implicit */short) arr_2 [i_0] [i_0])), ((short)-4421))), (((/* implicit */short) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (_Bool)1)))))))) : (max((((/* implicit */int) (signed char)74)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)55792))))))));
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_1))));
                            arr_24 [i_3] = (!(((/* implicit */_Bool) arr_17 [i_0] [i_7 + 3] [i_2] [i_3] [i_7])));
                        }
                        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) arr_26 [i_0])))));
                            arr_27 [i_0] [i_3] [i_2] [i_3] [(unsigned short)16] = ((/* implicit */short) (unsigned short)38854);
                        }
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(((/* implicit */int) (short)-4420)))))));
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                        {
                            var_17 -= ((/* implicit */unsigned short) arr_25 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0]);
                            arr_31 [i_0] [i_0] [i_3] [i_2] [i_3] [i_9] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_30 [i_0] [i_1] [i_2] [i_3] [i_2])), (min((arr_18 [i_0] [i_1] [i_2] [i_3] [i_1] [(unsigned short)17]), (((/* implicit */short) arr_0 [i_0])))))))));
                        }
                        for (short i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
                        {
                            arr_34 [i_0] [i_0] [i_2] [i_3] [i_10] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)306), (((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [(_Bool)1] [i_1])))))))) ? (((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_2] [i_2] [i_10] [i_0])) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_2] [i_3] [i_3] [i_10])) : (((/* implicit */int) arr_32 [i_10] [i_1] [i_2] [i_1] [i_0] [i_0])))) : (((/* implicit */int) var_3))));
                            arr_35 [i_0] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) min(((unsigned short)45282), (((/* implicit */unsigned short) arr_29 [i_0] [i_0] [i_0] [i_0] [(_Bool)0] [(unsigned short)4])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */short) var_9)))))))) : (((arr_11 [i_0] [(signed char)2] [i_0] [(unsigned short)5] [i_10]) ? (((/* implicit */int) (short)27548)) : (((/* implicit */int) min((var_7), (((/* implicit */short) arr_7 [i_0] [(short)15] [(short)15] [i_10])))))))));
                            var_18 = ((/* implicit */signed char) max((var_18), (arr_29 [(short)9] [(short)9] [i_1] [i_2] [i_2] [i_10])));
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-4407)) ? (((/* implicit */int) (short)-4421)) : (((/* implicit */int) (signed char)31))));
                        }
                        for (short i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_17 [(signed char)17] [i_1] [i_2] [i_3] [i_11])) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_0])) : (((/* implicit */int) (signed char)45)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_21 = ((/* implicit */_Bool) (short)-17148);
                            var_22 += ((/* implicit */_Bool) min(((unsigned short)33279), (((/* implicit */unsigned short) arr_9 [i_3] [i_11]))));
                        }
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_42 [i_12] [i_1] [i_2] [i_2] [i_2] = arr_13 [i_0] [i_0] [i_2];
                        arr_43 [i_12] [i_1] [i_2] [i_12 - 1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) (short)-26009)) : (((/* implicit */int) var_2))))));
                        var_23 ^= ((/* implicit */signed char) max(((short)7732), (max((((short) var_5)), (((/* implicit */short) min(((signed char)16), (((/* implicit */signed char) arr_40 [i_0] [i_1] [i_2] [i_2])))))))));
                        var_24 = max((min((arr_38 [i_0] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]), (((short) arr_21 [i_0] [i_12] [i_12])))), (((/* implicit */short) ((_Bool) (signed char)-114))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_46 [i_13] [i_12 - 1] [i_12] [i_12] [(signed char)5] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) arr_10 [i_0] [i_12] [i_2] [i_12] [i_13])), (((((/* implicit */int) min((arr_17 [i_13] [i_12] [i_0] [i_1] [i_0]), (((/* implicit */short) var_2))))) & (((/* implicit */int) arr_39 [i_0] [i_12 - 1] [i_2] [i_12] [i_13]))))));
                            var_25 += ((/* implicit */short) (unsigned short)33403);
                        }
                    }
                    /* LoopSeq 1 */
                    for (short i_14 = 1; i_14 < 16; i_14 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) var_0);
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_27 *= ((/* implicit */_Bool) (signed char)-89);
                            arr_52 [i_15] [i_15] [i_14] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((short) ((((((/* implicit */_Bool) (unsigned short)10691)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_32 [i_0] [(_Bool)1] [i_2] [i_14 - 1] [i_15] [i_1])))) & (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_41 [i_0] [i_14 + 1])))))));
                            var_28 += ((/* implicit */_Bool) min((var_7), (max((((/* implicit */short) var_9)), (var_5)))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned short) var_10);
                            arr_55 [i_0] [i_0] [i_0] [(short)4] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((signed char) arr_39 [(unsigned short)7] [i_1] [i_2] [i_14] [i_16]))) < (((/* implicit */int) (_Bool)1))));
                        }
                        for (short i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) arr_37 [i_0] [i_14] [i_2] [i_1] [i_0]);
                            var_31 *= ((/* implicit */short) arr_10 [i_0] [i_1] [i_0] [i_0] [i_1]);
                            arr_59 [i_0] [i_1] [i_2] [i_14 + 2] [i_17] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-43))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_32 *= ((/* implicit */_Bool) min((min((((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) var_0)))), ((~(((/* implicit */int) arr_26 [i_0]))))));
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) min((((/* implicit */short) arr_37 [i_0] [i_0] [i_18] [i_18] [(short)4])), ((short)-29441))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned short) ((unsigned short) (_Bool)1))))));
            /* LoopNest 3 */
            for (short i_19 = 3; i_19 < 15; i_19 += 3) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 18; i_21 += 1) 
                    {
                        {
                            var_34 = (signed char)-81;
                            var_35 = ((/* implicit */_Bool) min((arr_53 [i_0] [i_18] [i_19] [(signed char)11] [i_21] [i_19 - 2]), (((/* implicit */short) arr_49 [i_0] [i_20] [i_21]))));
                            arr_73 [i_19] [i_18] [i_19] [i_20] [i_19] = ((/* implicit */short) var_6);
                            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (!((!((_Bool)1))))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_22 = 0; i_22 < 18; i_22 += 2) /* same iter space */
        {
            var_37 -= ((/* implicit */signed char) arr_45 [i_0]);
            var_38 -= ((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) var_4))), (max((((/* implicit */short) min((arr_29 [i_0] [(short)9] [i_0] [i_22] [i_22] [(unsigned short)16]), (((/* implicit */signed char) arr_9 [i_0] [i_22]))))), (var_4)))));
        }
        for (signed char i_23 = 0; i_23 < 18; i_23 += 2) /* same iter space */
        {
            arr_80 [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)-1);
            arr_81 [i_0] = ((/* implicit */_Bool) max((arr_44 [i_0] [i_23] [i_0] [i_23] [i_23] [(_Bool)1]), (arr_62 [i_0] [i_0] [i_0])));
            arr_82 [i_0] [i_23] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_64 [i_0])), ((((!((_Bool)1))) ? (((/* implicit */int) min((var_7), (arr_58 [i_0] [(_Bool)1] [(_Bool)1] [i_23] [(_Bool)1])))) : (((arr_25 [i_0] [i_0] [i_0] [i_23] [i_23] [i_0] [i_23]) ? (((/* implicit */int) arr_10 [i_0] [i_23] [i_0] [(unsigned short)12] [i_23])) : (((/* implicit */int) var_5))))))));
            var_39 -= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0])) << (((((((/* implicit */_Bool) arr_37 [i_23] [i_23] [i_23] [i_0] [i_0])) ? (((/* implicit */int) arr_33 [i_0] [i_23] [i_23] [i_0])) : (((/* implicit */int) min((var_8), (arr_7 [i_23] [i_23] [i_0] [i_0])))))) - (107)))));
        }
    }
    var_40 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min(((short)32767), (((/* implicit */short) (signed char)-26)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)32132))));
    var_41 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)64512))))))), (max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)15))))), (var_6)))));
}
