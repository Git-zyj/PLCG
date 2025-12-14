/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115927
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
    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1 - 3] [i_0] [i_1 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)25547)) && (var_6)))) > (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)220))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)38)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25547)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) arr_3 [i_0]))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) (unsigned char)219))));
                        var_17 = ((/* implicit */_Bool) arr_0 [(unsigned char)1]);
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            arr_14 [i_0] [i_1] [i_3 - 2] = ((((/* implicit */_Bool) arr_6 [i_0] [i_3 - 1] [i_1 - 1] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */int) (short)25557)) >> (((((/* implicit */int) var_3)) - (124)))))));
                            var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_4] [i_2] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_2 [i_3 - 1])) : (((/* implicit */int) ((_Bool) (short)23824)))));
                        }
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)0)))) || (((/* implicit */_Bool) var_15))));
                        var_19 = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) var_15)))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) == (((/* implicit */int) (unsigned char)3))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_24 [i_5] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
            arr_25 [i_5] [i_5] = ((/* implicit */short) (unsigned short)57770);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_8 = 3; i_8 < 15; i_8 += 2) 
            {
                arr_33 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)255))));
                var_21 = ((/* implicit */unsigned char) (!(var_8)));
            }
            arr_34 [i_5] [i_5] [i_5] = ((unsigned char) (short)-1273);
        }
    }
    for (short i_9 = 2; i_9 < 20; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (unsigned short i_11 = 3; i_11 < 20; i_11 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (unsigned char)162)) - (146)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
                        {
                            arr_50 [i_9] [(unsigned char)10] [i_9] [i_12] [i_12] [i_11] = ((/* implicit */_Bool) (unsigned char)255);
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)37), (var_3)))) ? (((((/* implicit */_Bool) (unsigned short)16132)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_4)))))));
                        }
                        arr_51 [i_9 - 2] [(_Bool)1] [i_11] [i_12] [i_12] [(_Bool)1] = ((/* implicit */unsigned short) var_0);
                    }
                    for (unsigned short i_14 = 1; i_14 < 19; i_14 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)-25558)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)4)))), ((~(((/* implicit */int) (unsigned short)7765))))));
                        var_25 = ((/* implicit */short) max(((~(((/* implicit */int) (!((_Bool)0)))))), ((~(((((/* implicit */int) var_3)) & (((/* implicit */int) var_8))))))));
                        var_26 = var_3;
                        arr_54 [i_14] [i_10] [i_11] [i_14] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [i_9] [i_10] [i_11] [(_Bool)1]))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_38 [i_10])) : (((/* implicit */int) var_13)))) != ((+(((/* implicit */int) (short)19762)))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        arr_57 [i_15] [i_15] = ((/* implicit */_Bool) ((((var_1) && (((/* implicit */_Bool) arr_38 [i_11 - 1])))) ? (((/* implicit */int) min((var_14), (((/* implicit */unsigned char) var_8))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)8)))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))) : (((((/* implicit */int) arr_47 [i_9 + 1] [i_10] [i_9 + 1] [i_15])) << (((((/* implicit */int) (unsigned short)65168)) - (65153)))))));
                        var_28 = ((/* implicit */short) (((_Bool)1) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */int) (short)-25558)) & (((/* implicit */int) var_2))))));
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_60 [i_9] [i_10] [i_16] [i_16] = ((/* implicit */unsigned char) var_6);
                        arr_61 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-11403)) : (((/* implicit */int) (short)-5937))));
                        arr_62 [i_9] [i_16] [i_16] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65168)) ? (((/* implicit */int) arr_45 [i_11 - 2] [i_11 - 2] [i_11 - 3])) : (((/* implicit */int) var_5))));
                        var_29 = var_15;
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_38 [i_9])) : (((/* implicit */int) (unsigned short)13967))));
                    }
                }
            } 
        } 
        arr_63 [i_9] [i_9] = ((/* implicit */unsigned short) min(((+(((((/* implicit */int) var_14)) * (((/* implicit */int) (_Bool)1)))))), (((((((/* implicit */int) var_1)) * (((/* implicit */int) var_7)))) * ((-(((/* implicit */int) (_Bool)0))))))));
        /* LoopSeq 1 */
        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 1) 
        {
            arr_68 [i_17] [i_9 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)368)))))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) min(((_Bool)1), (var_6)))) : (((/* implicit */int) max((max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63241))), (var_7))))));
            arr_69 [i_17] [i_9] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_13)))) && (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))))));
            arr_70 [i_9] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) arr_66 [i_9] [i_17] [i_17]))))))) ? (((/* implicit */int) (_Bool)1)) : (((arr_44 [i_9 - 2] [i_17] [i_17] [i_17]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
        }
        arr_71 [i_9 - 2] [i_9] = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_2))))));
    }
    for (unsigned char i_18 = 1; i_18 < 16; i_18 += 1) /* same iter space */
    {
        arr_76 [i_18] [i_18 + 3] = (unsigned char)133;
        arr_77 [(unsigned char)9] = ((/* implicit */unsigned char) (short)-583);
        arr_78 [i_18] [i_18] = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) min(((short)22526), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || ((_Bool)1))))))));
        var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)36))));
    }
    for (unsigned char i_19 = 1; i_19 < 16; i_19 += 1) /* same iter space */
    {
        arr_83 [i_19 + 2] [i_19] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (_Bool)1)))));
        /* LoopNest 3 */
        for (unsigned short i_20 = 0; i_20 < 19; i_20 += 1) 
        {
            for (short i_21 = 0; i_21 < 19; i_21 += 4) 
            {
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned short)0))));
                        arr_92 [i_20] [i_20] [i_21] = ((/* implicit */unsigned char) max((((((/* implicit */int) (_Bool)1)) - ((+(((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) (short)-32751)) ? (((/* implicit */int) (unsigned char)171)) : (((/* implicit */int) (unsigned short)3))))));
                    }
                } 
            } 
        } 
        arr_93 [i_19 + 1] [i_19 + 1] = ((/* implicit */short) (((~(((/* implicit */int) (short)14939)))) % ((((_Bool)1) ? (((/* implicit */int) (unsigned short)61357)) : (((/* implicit */int) (short)14939))))));
    }
}
