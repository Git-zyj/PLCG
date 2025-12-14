/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166624
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */int) arr_1 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max(((unsigned short)51134), (((/* implicit */unsigned short) (short)-1))))) ? (((/* implicit */int) (short)10)) : (((((/* implicit */_Bool) (short)-13182)) ? (((/* implicit */int) (short)-7104)) : (540268753)))))));
                                arr_14 [(short)4] [i_1] [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_4]))))) ? (((/* implicit */int) arr_10 [i_1] [i_1] [(unsigned short)18] [(unsigned short)9] [i_1] [i_1])) : (((/* implicit */int) var_7))));
                                var_17 = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [12]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_5] [i_0] [i_1] [i_1] [i_0])) ? (540268753) : (((/* implicit */int) arr_16 [11] [i_2] [i_1] [(signed char)19]))))));
                        arr_17 [i_1] [i_1] [i_2] [7] = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
                        arr_18 [i_2] [(_Bool)1] [i_2] = ((/* implicit */signed char) (!((_Bool)1)));
                    }
                    for (unsigned short i_6 = 1; i_6 < 23; i_6 += 3) /* same iter space */
                    {
                        arr_22 [(signed char)18] [i_2] [i_2] [i_0] = (+(((((/* implicit */int) arr_6 [i_6] [i_6 + 1] [i_6] [i_6 - 1])) & ((+(((/* implicit */int) arr_6 [i_2] [i_2] [(unsigned short)3] [i_0])))))));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((arr_20 [i_1] [i_6 + 1] [i_6] [i_6 - 1]), (((/* implicit */unsigned short) min((((/* implicit */short) ((((/* implicit */int) arr_5 [i_1] [i_6])) <= (((/* implicit */int) var_12))))), (var_1)))))))));
                        var_20 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) -360492642)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_6 - 1]))))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_6] [i_2] [i_1] [i_0])) : (540268759))) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)14393)) < (((/* implicit */int) (short)-13163)))))))))))));
                        arr_23 [i_2] = ((/* implicit */short) (~(-424910377)));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        arr_27 [i_0] [(short)22] [i_0] [i_2] [i_0] = var_3;
                        arr_28 [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_16 [i_7 - 1] [i_1] [i_2] [i_2])) <= (((/* implicit */int) arr_16 [i_7 - 1] [(unsigned short)14] [i_1] [i_1]))));
                        arr_29 [(unsigned short)22] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) var_14);
                    }
                    arr_30 [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)70))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (signed char i_8 = 2; i_8 < 19; i_8 += 2) 
    {
        for (short i_9 = 1; i_9 < 18; i_9 += 4) 
        {
            {
                arr_36 [i_8] [i_9] = 30057422;
                arr_37 [i_9 + 2] [i_9] = (short)-13179;
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
    {
        arr_42 [i_10] = ((/* implicit */unsigned short) ((max((((((/* implicit */int) arr_0 [i_10])) * (((/* implicit */int) var_14)))), (((/* implicit */int) var_3)))) & (((((/* implicit */int) arr_0 [i_10])) & (-360492642)))));
        var_23 = ((/* implicit */short) (+(((/* implicit */int) arr_0 [i_10]))));
        /* LoopSeq 2 */
        for (int i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            arr_47 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-32753))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))));
            arr_48 [i_10] [i_11] = ((/* implicit */_Bool) min((((var_3) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((-883059087) < (((/* implicit */int) arr_4 [14] [(signed char)15] [(unsigned short)17]))))))), (((/* implicit */int) var_6))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_24 = (~(-352625970));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) -634421201);
                        arr_57 [i_10] [(_Bool)1] [(_Bool)1] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_14] [i_13])) - (var_10)))) || (((/* implicit */_Bool) min((arr_9 [i_10] [i_10] [(signed char)22] [(_Bool)1] [i_14]), (var_2))))))) : (arr_40 [i_13])));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_10] [i_13] [i_14])) ? ((-(((/* implicit */int) arr_26 [(short)0])))) : (((/* implicit */int) arr_10 [i_10] [(_Bool)1] [i_12] [i_13] [i_14] [i_14]))));
                    }
                } 
            } 
            var_27 = ((/* implicit */int) arr_38 [(_Bool)1]);
        }
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */short) (~(((/* implicit */int) arr_19 [i_15] [i_15] [(unsigned short)14] [i_15] [i_15] [i_15]))));
        var_29 = (((-(((/* implicit */int) var_9)))) & (((((/* implicit */int) var_13)) ^ (((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned short i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_17 = 1; i_17 < 19; i_17 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                arr_70 [i_16] [i_17 - 1] [i_18] [i_17 - 1] = ((/* implicit */_Bool) arr_7 [i_18] [i_18] [i_17] [i_17] [i_16]);
                arr_71 [i_16] [i_16] = ((/* implicit */int) arr_9 [(_Bool)1] [i_18] [1] [i_16] [i_16]);
                /* LoopSeq 1 */
                for (int i_19 = 0; i_19 < 22; i_19 += 1) 
                {
                    arr_74 [i_16] [i_17] [i_16] [i_16] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)114)))), (((/* implicit */int) arr_1 [i_18] [(_Bool)1]))));
                    arr_75 [i_16] [i_17] [i_16] = ((int) ((var_0) ? (((/* implicit */int) min(((unsigned short)59882), (((/* implicit */unsigned short) (short)-13164))))) : (((arr_16 [i_19] [i_18] [i_17] [i_16]) ? (((/* implicit */int) arr_7 [2] [2] [2] [i_18] [2])) : (((/* implicit */int) var_13))))));
                }
            }
            arr_76 [i_16] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_16] [i_16] [i_16] [i_17 + 2])) ? (((/* implicit */int) ((-1) <= (((/* implicit */int) arr_3 [i_16]))))) : (((/* implicit */int) arr_59 [i_16]))));
        }
        for (unsigned short i_20 = 0; i_20 < 22; i_20 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_21 = 0; i_21 < 22; i_21 += 2) 
            {
                arr_81 [i_16] [(short)16] [i_16] [i_21] = ((/* implicit */signed char) arr_12 [i_21] [i_20] [i_20] [i_16] [(short)15]);
                var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */_Bool) ((((/* implicit */int) (short)12578)) * (((/* implicit */int) arr_4 [i_21] [i_20] [i_16]))))) ? (((((/* implicit */_Bool) arr_79 [i_21] [i_20] [i_16] [i_16])) ? (var_10) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_5))))));
            }
            var_31 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1972)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_10 [i_16] [i_16] [i_16] [i_20] [i_20] [i_20]))))))), (((((/* implicit */_Bool) arr_4 [i_16] [i_20] [i_16])) || (((/* implicit */_Bool) ((int) (_Bool)0)))))));
            arr_82 [i_16] [i_16] = ((/* implicit */int) var_4);
            /* LoopNest 2 */
            for (short i_22 = 2; i_22 < 20; i_22 += 2) 
            {
                for (short i_23 = 0; i_23 < 22; i_23 += 4) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)73))))) ? (((/* implicit */int) arr_1 [i_22 - 1] [i_22 - 1])) : (((((/* implicit */_Bool) (unsigned short)73)) ? (((/* implicit */int) arr_80 [i_16] [i_22 + 1] [i_16])) : (((/* implicit */int) (signed char)6))))));
                        /* LoopSeq 3 */
                        for (short i_24 = 0; i_24 < 22; i_24 += 4) 
                        {
                            var_33 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */short) arr_25 [i_22 + 2] [i_22] [i_22] [i_22 + 2])), ((short)-32757)))), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_25 [i_16] [i_20] [i_22 + 2] [i_24]))))) ? (((/* implicit */int) arr_15 [i_24] [i_24] [i_24] [i_24])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)8160)))))))));
                            arr_91 [(unsigned short)18] [i_20] [i_20] [i_16] [13] [(short)16] [i_24] = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13)))), (((/* implicit */int) arr_0 [i_24]))))));
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            arr_95 [(_Bool)1] [i_23] [i_16] [i_16] [i_20] [i_16] = (-(((/* implicit */int) (!(((((/* implicit */int) arr_67 [(_Bool)1] [i_20] [i_16])) == (((/* implicit */int) (short)32758))))))));
                            arr_96 [i_16] [i_20] [i_22] [i_16] [i_25] = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (short)-14502)) == (((/* implicit */int) (signed char)-16))))), ((+((-(((/* implicit */int) var_12))))))));
                        }
                        for (short i_26 = 2; i_26 < 19; i_26 += 4) 
                        {
                            arr_99 [i_16] [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_13)))))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (~((~((~(((/* implicit */int) (_Bool)1)))))))))));
                            var_35 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_0))))) ? (((arr_77 [i_23] [i_23]) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (unsigned short)50939)))) : (((((/* implicit */_Bool) (unsigned short)23271)) ? (((/* implicit */int) arr_64 [i_26] [(short)14] [i_22])) : (((/* implicit */int) var_3)))))), (min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_8))))));
                            var_36 = ((/* implicit */_Bool) var_14);
                        }
                    }
                } 
            } 
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (~(max((((/* implicit */int) var_5)), ((-(((/* implicit */int) var_5)))))))))));
        }
        arr_100 [i_16] = min((-1538396033), (((/* implicit */int) (unsigned short)12749)));
        arr_101 [i_16] [i_16] = (!(((/* implicit */_Bool) min((arr_12 [i_16] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */short) ((var_9) && (arr_62 [i_16] [i_16]))))))));
    }
}
