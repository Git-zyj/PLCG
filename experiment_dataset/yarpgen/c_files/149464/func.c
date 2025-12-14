/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149464
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
    var_12 &= ((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) (unsigned short)3655))))))));
    var_13 += ((/* implicit */_Bool) (unsigned short)61440);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_14 = arr_2 [i_3];
                            arr_13 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_1 - 4])) ? (((/* implicit */int) (unsigned short)4088)) : (((/* implicit */int) arr_8 [i_2] [i_1] [i_1 - 4]))))));
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3] = (short)(-32767 - 1);
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_3 + 3]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) max(((short)-25786), (((/* implicit */short) arr_0 [i_0]))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)25816)) : (((/* implicit */int) arr_6 [i_3] [i_1 - 4])))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 3; i_5 < 14; i_5 += 3) 
                    {
                        arr_20 [i_4] |= ((/* implicit */unsigned short) arr_8 [(short)13] [i_1 - 3] [(short)5]);
                        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-25786))));
                        var_17 = ((/* implicit */short) var_2);
                    }
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) var_7);
                        var_19 *= (_Bool)1;
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            arr_28 [(short)7] [i_7] [i_4] [(short)2] [(short)7] [(short)1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)28348)) | ((~(((/* implicit */int) (short)23567))))));
                            arr_29 [i_0] [i_7] [i_4] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)46139)) % (((/* implicit */int) var_2))));
                            arr_30 [(unsigned short)2] [i_1 - 4] [i_4] [i_6] [i_7] [i_4] [i_7] = (short)9342;
                            arr_31 [i_0] [i_7] [i_4] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_1 + 1] [i_1] [i_1] [i_6] [i_1 + 1])) ? ((+(((/* implicit */int) arr_15 [i_0] [(_Bool)1] [i_0] [i_0])))) : ((-(((/* implicit */int) var_8))))));
                            arr_32 [i_0] [i_0] [i_7] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_21 [i_0] [i_1 - 4] [i_0] [i_1 - 3])) : (((/* implicit */int) arr_21 [i_0] [i_1 + 1] [i_0] [i_1 - 3]))));
                        }
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_1 - 2] [i_1] [i_1 - 2] [i_1 - 4] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_4] [i_1 - 3])))))));
                    }
                    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_1] [i_1 - 4] [i_1] [i_1 - 4])) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_18 [i_0] [i_4] [(unsigned short)11]))));
                    arr_33 [i_0] [i_1 - 2] [i_4] &= ((/* implicit */_Bool) (unsigned short)56229);
                    arr_34 [i_0] [i_0] [i_1 - 1] [(short)13] = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        for (short i_10 = 3; i_10 < 13; i_10 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) (((~((~(((/* implicit */int) (short)28216)))))) - ((~(((((/* implicit */int) (short)25785)) | (((/* implicit */int) (unsigned short)56235))))))));
                                arr_41 [i_1 - 4] [i_1 - 4] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_1] [i_1 - 2] [i_8])), (arr_11 [(unsigned short)7] [i_1 - 1] [i_1 - 1] [i_10 - 2])))) : ((~(((/* implicit */int) (short)4298))))));
                            }
                        } 
                    } 
                    arr_42 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((arr_17 [i_0] [i_8]), (var_5)))) ? ((-(((/* implicit */int) arr_19 [(short)9] [i_8] [i_1] [i_0] [i_0] [i_0])))) : ((-(((/* implicit */int) (_Bool)1))))))));
                }
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_37 [i_1 - 3] [i_1 - 2])) <= (((/* implicit */int) var_6))))) ^ (((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1])))))))));
                arr_43 [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2]);
            }
        } 
    } 
    var_24 = ((short) var_10);
}
