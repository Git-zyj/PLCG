/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147475
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
    var_13 &= ((/* implicit */signed char) ((((/* implicit */int) var_3)) << ((((+(((/* implicit */int) var_3)))) - (88)))));
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_6)))) * (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))));
    var_15 = ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))));
            arr_6 [i_0] [i_0] [i_0] = ((((/* implicit */int) (short)32759)) > (((((/* implicit */int) var_2)) - (((/* implicit */int) var_2)))));
            /* LoopNest 3 */
            for (signed char i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */short) max((var_17), (var_2)));
                            var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) ((var_7) && (arr_11 [i_4] [i_3] [i_2 - 1] [i_1] [i_0]))))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)12105)) * (((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) var_7);
                        var_21 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)(-32767 - 1)))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((unsigned char) ((((/* implicit */int) arr_17 [i_6] [i_1] [i_0])) <= (((/* implicit */int) var_9))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_23 = ((/* implicit */_Bool) ((signed char) var_1));
            /* LoopSeq 1 */
            for (signed char i_8 = 0; i_8 < 12; i_8 += 1) 
            {
                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (short)31495)))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_10])) ? (((/* implicit */int) arr_3 [i_10])) : (((/* implicit */int) (short)0)))))));
                            arr_30 [i_10] [(short)4] [i_9] [i_8] [i_8] [i_7] [i_10] &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_22 [i_0]))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_10] [i_9] [(unsigned char)11] [i_7] [i_0])) && (var_10)));
                            var_27 = (short)32759;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_11 = 3; i_11 < 10; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        {
                            arr_36 [i_12] [i_12] &= ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_8 [i_11 - 1] [i_11 + 1] [i_11 + 1]))));
                            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (short)-32767))) * (((var_10) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12))))));
                            arr_37 [i_0] [i_7] [i_8] [(short)8] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                            var_29 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_4 [i_8] [i_7] [i_0])))))));
            }
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_9)))))));
                arr_40 [i_0] [i_13] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) (unsigned char)4))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)145)))) : (((/* implicit */int) (short)-32745))));
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                var_32 = ((/* implicit */_Bool) max((var_32), (((((/* implicit */int) arr_0 [i_14 - 1] [i_14 - 1])) > (((/* implicit */int) var_4))))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((var_7) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned char)35)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))))));
                            var_34 -= ((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
            }
        }
        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(_Bool)0] [(signed char)0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_11)))))));
        var_36 = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) <= (((/* implicit */int) (short)-32102)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0]))));
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */int) ((short) (unsigned char)114))) * (((/* implicit */int) ((((/* implicit */int) (short)27995)) == (((/* implicit */int) arr_32 [i_0] [i_0]))))))))));
    }
    for (unsigned char i_17 = 0; i_17 < 20; i_17 += 4) 
    {
        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)141)) * (((/* implicit */int) arr_50 [i_17]))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (unsigned char)128)))))))));
        /* LoopNest 2 */
        for (short i_18 = 3; i_18 < 17; i_18 += 2) 
        {
            for (signed char i_19 = 3; i_19 < 17; i_19 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 2; i_20 < 17; i_20 += 4) 
                    {
                        for (short i_21 = 2; i_21 < 18; i_21 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)27995)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))) * (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_55 [(_Bool)1] [(_Bool)1] [i_19 - 3] [i_19])))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))));
                                var_40 &= ((/* implicit */short) var_0);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_41 = ((/* implicit */_Bool) arr_62 [i_22] [i_17] [i_18] [i_17] [i_17]);
                        var_42 &= ((/* implicit */signed char) min(((~(((/* implicit */int) arr_55 [i_18] [i_18 - 3] [i_18 + 1] [i_18 - 1])))), (max((((/* implicit */int) min(((short)-2216), (((/* implicit */short) var_11))))), (((var_10) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_12))))))));
                        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_5))) % (((/* implicit */int) arr_56 [i_18 - 3] [i_18 + 3] [i_18 - 1]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-4096)) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) arr_57 [i_17] [i_17] [i_19] [i_22])))))));
                        arr_66 [i_17] [i_18 - 3] [i_22] [i_22] [i_22] [i_18 + 3] = ((/* implicit */short) (((((+(((/* implicit */int) var_11)))) * ((+(((/* implicit */int) var_5)))))) << (((max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)24))))), (((((/* implicit */int) var_8)) % (((/* implicit */int) var_12)))))) - (31)))));
                    }
                    for (short i_23 = 0; i_23 < 20; i_23 += 2) 
                    {
                        arr_71 [i_17] [i_17] [i_17] = ((/* implicit */short) min((min((((/* implicit */unsigned char) max((var_10), ((_Bool)1)))), (((unsigned char) var_5)))), (((/* implicit */unsigned char) var_12))));
                        var_44 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)3072)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_70 [i_23] [i_19 + 1] [i_18] [i_18 - 2] [i_18] [i_18])))), ((-((-(((/* implicit */int) arr_50 [i_19]))))))));
                    }
                    for (short i_24 = 4; i_24 < 18; i_24 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_25 = 0; i_25 < 20; i_25 += 4) /* same iter space */
                        {
                            var_45 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_53 [i_18 + 3] [i_18 + 3]))))) ? ((+(((/* implicit */int) arr_76 [i_18 + 2] [i_18])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-18485)) : (((/* implicit */int) var_1))))));
                            var_46 -= ((/* implicit */unsigned char) (+(min(((+(((/* implicit */int) arr_64 [i_17] [i_17] [i_17] [i_17])))), (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (unsigned char)18)))))))));
                            var_47 -= ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */short) var_8)), (arr_64 [(short)15] [i_18] [i_18 + 1] [i_18]))))));
                        }
                        for (short i_26 = 0; i_26 < 20; i_26 += 4) /* same iter space */
                        {
                            arr_80 [i_26] [i_18] [i_24] [i_18] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (unsigned char)111))))) & (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (short)29207)))))))) ? (((((/* implicit */int) arr_69 [i_18 - 1] [i_19 - 3] [i_24 - 4])) * (((/* implicit */int) var_6)))) : (max((((/* implicit */int) ((signed char) (_Bool)1))), ((~(((/* implicit */int) (short)1043))))))));
                            var_48 &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_24 - 4] [i_18 - 3] [i_24] [i_18 - 3]))))) == ((-(((/* implicit */int) var_10))))));
                            arr_81 [i_17] [i_17] [i_17] [i_24] [i_17] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */short) var_6)), (arr_56 [i_24 + 1] [i_24 - 2] [i_18 - 1]))))));
                        }
                        var_49 &= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        arr_82 [(short)14] [i_24] [i_18] [i_24] [i_17] = ((/* implicit */short) (((-(((/* implicit */int) max(((unsigned char)145), (((/* implicit */unsigned char) var_10))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                    }
                }
            } 
        } 
    }
    var_50 -= ((/* implicit */short) ((((((/* implicit */int) (unsigned char)192)) <= (((((/* implicit */int) var_10)) + (((/* implicit */int) var_1)))))) ? (((min((var_7), (var_7))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_8))));
}
