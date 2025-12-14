/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150677
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_3))));
    var_15 = ((/* implicit */_Bool) min((var_15), (var_11)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_9 [i_0] [2U] [2U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)7])) ? (arr_6 [i_0] [(unsigned short)3]) : (arr_6 [i_0] [i_0]))) : (arr_2 [i_0] [i_1])));
                    var_16 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned short) (_Bool)1)), (arr_1 [i_1]))), (min((arr_1 [i_0]), (arr_1 [i_0])))));
                }
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    var_17 = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) == (var_8)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 3; i_4 < 11; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) arr_1 [i_4 - 2])) : ((~(((((/* implicit */int) var_6)) << (((/* implicit */int) (_Bool)1))))))));
                            var_19 = ((/* implicit */unsigned int) arr_16 [i_4 - 1] [(_Bool)1] [i_4 + 1] [i_4 + 1] [i_4]);
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+((-(arr_0 [i_0])))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_20 &= ((/* implicit */_Bool) arr_16 [i_4 - 2] [i_4] [i_4] [i_4 - 2] [i_4]);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((unsigned short)65524), (((/* implicit */unsigned short) (!(arr_10 [i_3] [i_4]))))))), ((~(arr_18 [i_0] [i_0] [i_0] [(unsigned short)8] [(_Bool)1] [i_0] [(_Bool)1])))));
                            var_21 = ((/* implicit */unsigned int) ((unsigned char) (+((~(arr_2 [i_0] [(_Bool)1]))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~((-(((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 3])))))))));
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_15 [i_4] [i_4 - 3] [i_4] [i_4 - 2] [i_4 + 1])) - (96))))), (((/* implicit */int) var_9)))))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 11; i_8 += 4) 
                        {
                            arr_28 [i_4] [(_Bool)1] = ((/* implicit */unsigned short) (~((~(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)92))))))));
                            var_24 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [10U] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_4 [i_3] [i_3] [i_3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870904U)) ? (arr_24 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_3] [i_4] [4U])))))) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_25 [i_0] [i_1] [i_4])))))))) : (((/* implicit */int) ((unsigned short) arr_8 [i_4] [(_Bool)1] [0U] [0U])))));
                        }
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) arr_6 [i_0] [i_4]);
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) && (arr_8 [i_0] [i_0] [i_0] [(unsigned short)0])))) | (((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) arr_23 [i_0] [i_0])) : (((/* implicit */int) var_3))))))) ? ((~(((/* implicit */int) arr_16 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [5U] [(_Bool)1] [i_4 - 3] [i_0])) || (((/* implicit */_Bool) var_2)))))));
                            var_27 |= ((/* implicit */unsigned short) max((((/* implicit */int) var_13)), ((+(((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4]))))));
                            var_28 = ((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1]);
                            var_29 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [(unsigned char)7] [3U] [i_0] [i_0] [i_0] [i_0])) ? (arr_18 [i_3] [(unsigned short)9] [i_3] [i_3] [(unsigned short)9] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? ((~(((/* implicit */int) (unsigned char)83)))) : (((/* implicit */int) arr_27 [i_9] [i_9] [11U] [i_9] [i_9] [i_9] [(unsigned short)10]))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (2301051346U))));
                        }
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned short)11)))))))) ? ((-((~(((/* implicit */int) (unsigned char)47)))))) : (((/* implicit */int) var_9))));
                    }
                    for (unsigned short i_10 = 3; i_10 < 10; i_10 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_1))))) | (min((arr_4 [i_10] [i_10 - 3] [i_10 - 1]), (arr_4 [i_3] [i_10] [i_10 - 3])))));
                            var_32 = 1911045054U;
                            var_33 = ((/* implicit */unsigned char) (_Bool)0);
                            arr_37 [i_0] [i_0] [i_0] [10U] [i_0] = ((/* implicit */_Bool) max((4287857020U), (arr_2 [(_Bool)0] [(unsigned short)2])));
                        }
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            var_34 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65534))));
                            var_35 = ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1])))))))) ? (((((/* implicit */_Bool) arr_26 [i_10 + 2] [i_10 + 2] [i_10] [i_10 + 2] [i_10 - 1] [i_10 + 1] [(unsigned short)3])) ? (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1]))) : (2383922242U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) > (1911045033U))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_10 - 2] [i_10 - 2] [i_10] [(unsigned char)7] [10U])) ^ (((/* implicit */int) arr_34 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_10] [(_Bool)1] [i_10 + 1] [(_Bool)1]))))));
                        }
                        var_36 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)173))))))));
                    }
                    var_37 ^= ((/* implicit */unsigned short) var_11);
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        arr_45 [5U] = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */int) arr_32 [i_0] [i_0] [(unsigned short)9] [i_0] [i_0] [i_0])) << (((((/* implicit */int) arr_25 [i_3] [i_3] [i_3])) - (156)))))) ? ((+(((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_21 [i_3] [i_3] [i_3]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_27 [i_0] [i_1] [i_3] [i_0] [i_13] [i_13] [i_13]), (var_9)))))))));
                        var_38 = ((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_13]);
                    }
                    for (unsigned int i_14 = 1; i_14 < 9; i_14 += 4) 
                    {
                        var_39 *= ((/* implicit */_Bool) var_4);
                        arr_48 [i_0] [10U] [i_0] [(unsigned short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (arr_24 [i_0] [(unsigned char)5] [(unsigned char)5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [i_0] [i_1] [i_3] [i_14]) || (((/* implicit */_Bool) var_9)))))) : (min((arr_2 [i_0] [(unsigned short)3]), (((/* implicit */unsigned int) (_Bool)1))))))) ? ((+(((((/* implicit */int) arr_38 [(unsigned short)0] [i_1] [(unsigned char)4])) & (((/* implicit */int) arr_35 [i_0] [i_1] [i_1] [i_14] [2U])))))) : (((/* implicit */int) ((((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_7 [i_14] [(_Bool)1] [i_14])))) == (((/* implicit */int) (unsigned short)55010)))))));
                    }
                }
                var_40 = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) (unsigned short)64248)))) ? (((unsigned int) (_Bool)1)) : ((+(arr_18 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_4)))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_10)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_15 = 1; i_15 < 9; i_15 += 2) 
    {
        var_42 = ((/* implicit */unsigned short) var_9);
        /* LoopSeq 3 */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_53 [i_15 + 1] [i_15 + 3])))))));
            var_44 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_53 [i_15] [i_15])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_50 [3U] [(unsigned char)12]))))));
            /* LoopSeq 1 */
            for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) 
            {
                var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_52 [i_16] [i_17]))))) ? (((/* implicit */int) arr_55 [i_16 + 1] [i_16])) : (((/* implicit */int) arr_52 [(_Bool)1] [(unsigned char)0]))));
                var_46 ^= ((((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_15 - 1] [i_15 + 4] [(unsigned char)2] [(unsigned char)2]))) % (((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [(unsigned char)7] [(unsigned char)7]))) | (255671147U))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_18 = 0; i_18 < 13; i_18 += 4) 
            {
                var_47 = ((/* implicit */_Bool) min((var_47), (((((/* implicit */int) var_1)) < (((/* implicit */int) arr_56 [i_15] [i_15 + 1] [i_18] [i_15]))))));
                var_48 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_54 [i_16 + 1] [i_18] [i_16 + 1])) : (((((/* implicit */_Bool) arr_60 [i_15] [i_15 + 3] [i_15] [i_15])) ? (((/* implicit */int) arr_58 [i_18])) : (((/* implicit */int) arr_49 [i_15]))))));
                var_49 = ((/* implicit */unsigned char) min((var_49), ((unsigned char)255)));
                var_50 = ((/* implicit */unsigned short) 1911045041U);
            }
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_51 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (_Bool)1))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_60 [i_15] [i_15] [i_15] [i_15])) && (((/* implicit */_Bool) 3669483716U)))))));
            arr_63 [i_15] = ((/* implicit */unsigned char) arr_50 [(_Bool)0] [(_Bool)0]);
            var_52 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_2)))) ? (255671147U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_61 [i_15])) : (((/* implicit */int) var_9)))))));
            var_53 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_54 [12U] [(unsigned char)0] [(_Bool)1]))));
        }
        for (unsigned char i_20 = 0; i_20 < 13; i_20 += 2) 
        {
            var_54 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_56 [i_15] [0U] [i_20] [i_15])) > (((/* implicit */int) arr_52 [i_15] [i_15])))))));
            var_55 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4039296141U)))))));
        }
    }
    for (unsigned int i_21 = 0; i_21 < 14; i_21 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_22 = 0; i_22 < 14; i_22 += 3) 
        {
            var_56 |= ((/* implicit */_Bool) ((unsigned short) arr_69 [i_21] [i_22]));
            var_57 = ((/* implicit */_Bool) var_10);
            arr_71 [(unsigned short)13] [i_22] = ((/* implicit */unsigned char) arr_70 [i_21] [(_Bool)1] [(_Bool)1]);
            var_58 ^= ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
            arr_72 [(unsigned char)7] [i_22] [i_22] = ((/* implicit */unsigned char) 1096405400U);
        }
        for (unsigned int i_23 = 1; i_23 < 13; i_23 += 3) 
        {
            var_59 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))) >= (1911045073U))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_24 = 0; i_24 < 14; i_24 += 1) 
            {
                var_60 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                var_61 = ((/* implicit */unsigned char) min((var_61), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_69 [i_23 + 1] [i_23])))))));
                var_62 = ((/* implicit */unsigned char) ((_Bool) arr_75 [i_23]));
            }
            for (unsigned char i_25 = 0; i_25 < 14; i_25 += 4) 
            {
                var_63 += ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) (_Bool)1))))))))));
                var_64 = (+(var_8));
            }
            for (unsigned char i_26 = 0; i_26 < 14; i_26 += 2) 
            {
                var_65 += ((/* implicit */unsigned char) var_8);
                var_66 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_5)))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_78 [i_21] [i_23] [i_23] [(_Bool)1]))))) == (4095U))))));
                arr_83 [i_23] [12U] [i_26] = ((/* implicit */unsigned char) min((((1970095063U) << (((((/* implicit */int) (unsigned char)205)) - (200))))), (((((_Bool) arr_79 [i_23])) ? (arr_82 [i_23 - 1]) : (max((((/* implicit */unsigned int) var_10)), (1970095065U)))))));
            }
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            var_67 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_70 [i_21] [i_27] [i_27]))))))), (((var_13) ? (((((/* implicit */_Bool) 2383922239U)) ? (arr_79 [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_12)) ? (2583515353U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
            arr_88 [i_21] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((arr_85 [i_21] [i_21] [i_27]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_68 [i_21] [i_27])))))) ? (((/* implicit */int) max((var_10), (arr_87 [2U])))) : (((/* implicit */int) var_12))));
            var_68 = ((/* implicit */unsigned int) min((var_68), (2583515353U)));
        }
        var_69 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_21])) ? (((/* implicit */int) arr_86 [(unsigned short)12] [(unsigned short)12] [i_21])) : (((/* implicit */int) arr_78 [i_21] [i_21] [i_21] [i_21]))))) ? (max((((/* implicit */unsigned int) arr_77 [(_Bool)1] [i_21] [i_21] [i_21])), (((unsigned int) arr_77 [i_21] [i_21] [i_21] [i_21])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))));
        var_70 = ((/* implicit */unsigned short) min((var_70), (((/* implicit */unsigned short) (~(((arr_82 [i_21]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_21] [i_21]))))))))));
    }
}
