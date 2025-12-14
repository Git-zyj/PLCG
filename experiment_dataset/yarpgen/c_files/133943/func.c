/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133943
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 -= ((/* implicit */short) (((((+(((/* implicit */int) arr_3 [i_0])))) / (((/* implicit */int) ((_Bool) var_9))))) <= (((((((/* implicit */_Bool) (unsigned short)35826)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) var_6)))) - ((-(((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) ((unsigned short) (short)-25988))), ((~(((/* implicit */int) arr_2 [i_0])))))));
            arr_8 [i_0] [i_1] |= ((/* implicit */unsigned short) max((((/* implicit */int) ((short) var_1))), ((~(((/* implicit */int) var_3))))));
            var_15 *= ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */int) var_8)) / (((/* implicit */int) (short)-3644))))));
            var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0])), (min((var_11), (arr_4 [i_0] [i_1] [i_0]))))))))));
        }
        for (short i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_16 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned short) min((var_4), (((/* implicit */short) var_13))))), (((unsigned short) arr_5 [i_0] [i_0]))));
                        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            var_18 |= ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned short) var_4)))));
                            arr_19 [i_2] [i_2] [i_3] [(short)14] [(_Bool)1] [(unsigned short)16] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_2)))));
                            arr_20 [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((min((var_3), (var_13))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_3 - 2] [i_2] [i_3 - 1] [(_Bool)1])))))))) / (((/* implicit */int) var_11))));
                            arr_21 [i_2] [i_2] [(unsigned short)11] [i_4] = (short)25987;
                            arr_22 [i_0] [i_0] [i_3] [i_4] [i_2] [i_0] = ((((arr_17 [i_5] [i_2] [i_3 + 1] [i_4] [i_5]) && (var_3))) && ((!((_Bool)1))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            arr_27 [i_2] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1))))))));
                            var_19 *= ((/* implicit */unsigned short) (!(((_Bool) var_12))));
                        }
                        arr_28 [i_0] [(_Bool)1] [i_3 - 1] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) ((_Bool) (_Bool)0))))));
                    }
                } 
            } 
            arr_29 [i_2] [(_Bool)1] [i_2] = ((/* implicit */short) ((((/* implicit */int) min((arr_13 [i_0] [i_2] [i_2]), (((/* implicit */unsigned short) var_8))))) > ((+((-(((/* implicit */int) var_7))))))));
            var_20 *= ((/* implicit */short) min((((/* implicit */int) ((_Bool) (-(((/* implicit */int) (_Bool)0)))))), ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_35 [i_2] [i_2] [i_2] = ((/* implicit */short) ((_Bool) ((_Bool) (+(((/* implicit */int) var_1))))));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_17 [i_0] [i_2] [(_Bool)1] [i_8] [i_7]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-17970)))))))), ((unsigned short)35826)))));
                    }
                } 
            } 
        }
        for (short i_9 = 1; i_9 < 21; i_9 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                arr_40 [(_Bool)1] [i_9 + 2] [i_10] &= ((/* implicit */_Bool) (-((-(((/* implicit */int) min((arr_11 [i_0] [i_9]), (var_2))))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_22 = ((short) ((((/* implicit */int) arr_39 [i_0] [i_9 + 2])) == (((/* implicit */int) arr_39 [i_12] [i_9 + 1]))));
                            arr_45 [i_0] [i_0] [i_0] [i_11] [i_12] [i_9] = ((/* implicit */short) ((_Bool) ((_Bool) var_8)));
                            var_23 += ((/* implicit */short) (~((~(((/* implicit */int) arr_15 [(_Bool)1] [(short)4] [i_10] [i_11]))))));
                        }
                    } 
                } 
                arr_46 [(short)6] [(short)6] [i_9] = ((/* implicit */unsigned short) ((short) ((_Bool) arr_0 [i_9 + 1])));
            }
            for (short i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                arr_50 [i_9] [i_9] [i_13] = ((/* implicit */short) (!(((((/* implicit */int) arr_25 [i_9 - 1] [i_9 - 1] [i_0] [i_9 - 1] [i_0])) == (((/* implicit */int) arr_25 [i_9] [i_9] [i_9] [i_9 + 1] [i_9]))))));
                arr_51 [(unsigned short)8] [(unsigned short)8] [i_13] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_6 [i_13] [(_Bool)1])))) + (((/* implicit */int) (unsigned short)20930))))) ? (((/* implicit */int) ((short) ((_Bool) (unsigned short)35831)))) : (((/* implicit */int) max((var_0), ((_Bool)1))))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_55 [i_9] [i_14] [(short)8] [i_0] = (_Bool)0;
                /* LoopNest 2 */
                for (short i_15 = 1; i_15 < 20; i_15 += 1) 
                {
                    for (short i_16 = 1; i_16 < 19; i_16 += 4) 
                    {
                        {
                            arr_62 [i_14] [i_9 + 2] [i_14] [i_9] [i_9] [i_16] [i_16] = ((/* implicit */unsigned short) (!(((arr_54 [i_0] [i_9] [i_9] [i_9]) && (var_1)))));
                            var_24 = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((_Bool) (short)-32709))))), (((/* implicit */int) min((var_4), (((/* implicit */short) ((((/* implicit */int) var_9)) > (((/* implicit */int) (short)25987))))))))));
                        }
                    } 
                } 
                arr_63 [i_0] [i_9] [i_9] = ((/* implicit */_Bool) max(((+((+(((/* implicit */int) (_Bool)1)))))), ((-(((/* implicit */int) var_0))))));
            }
            arr_64 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) max((var_10), (((/* implicit */unsigned short) var_4)))))))));
        }
        for (short i_17 = 0; i_17 < 23; i_17 += 3) 
        {
            arr_67 [i_0] [i_17] = ((/* implicit */short) (((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))))) * (((/* implicit */int) var_8))));
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_70 [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-3644))))) ? (((/* implicit */int) max((arr_59 [i_0] [i_17] [i_18] [(unsigned short)22]), (arr_38 [(unsigned short)4] [(unsigned short)4])))) : (((/* implicit */int) var_12)))));
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 23; i_19 += 2) 
                {
                    for (unsigned short i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) ((min((((/* implicit */int) (short)32701)), (((var_13) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))))) ^ (((/* implicit */int) max((arr_44 [i_18] [i_17] [i_18] [i_19] [(short)15] [i_19]), (arr_44 [(_Bool)1] [i_17] [i_20] [i_19] [i_20] [i_20]))))));
                            arr_75 [i_0] = ((/* implicit */unsigned short) min(((((~(((/* implicit */int) var_9)))) - (((((/* implicit */int) var_3)) / (((/* implicit */int) var_8)))))), (((/* implicit */int) ((short) ((((/* implicit */int) arr_42 [i_19] [i_20] [i_18])) % (((/* implicit */int) var_11))))))));
                            arr_76 [i_0] [i_0] [(_Bool)1] [i_19] [i_20] = ((/* implicit */unsigned short) (-(((((/* implicit */int) var_1)) >> (((/* implicit */int) arr_32 [i_19]))))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (_Bool)1))));
                        }
                    } 
                } 
            }
            var_27 -= ((/* implicit */_Bool) ((((((/* implicit */int) var_2)) - (((/* implicit */int) var_3)))) >> (((/* implicit */int) ((unsigned short) var_3)))));
            var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_71 [i_0] [i_17] [i_0] [i_0] [i_17] [i_0])) ? (((/* implicit */int) min((arr_41 [i_17] [i_17] [i_0] [i_17] [i_17]), (((/* implicit */unsigned short) var_3))))) : (((/* implicit */int) min(((unsigned short)5805), (((/* implicit */unsigned short) var_8))))))) < (((/* implicit */int) ((_Bool) max((((/* implicit */short) var_1)), ((short)-11442)))))));
            arr_77 [(_Bool)1] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_53 [i_0] [i_17] [i_17])) ? (((/* implicit */int) (unsigned short)1667)) : (((/* implicit */int) var_6)))) * (((/* implicit */int) (unsigned short)8257)))) / (((/* implicit */int) arr_49 [i_0] [i_0] [(_Bool)1]))));
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_21 = 0; i_21 < 20; i_21 += 3) 
    {
        for (short i_22 = 0; i_22 < 20; i_22 += 4) 
        {
            {
                arr_83 [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) (_Bool)1))))));
                var_29 *= ((/* implicit */short) ((unsigned short) (((!(var_1))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) var_0)))));
                arr_84 [i_21] [i_21] [i_22] = ((/* implicit */_Bool) (short)-32759);
            }
        } 
    } 
}
