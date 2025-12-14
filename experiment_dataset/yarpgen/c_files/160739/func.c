/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160739
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned short)61210)) & (((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) arr_4 [(unsigned short)5] [i_1]))))))));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_0 [i_0]))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((((((/* implicit */int) arr_0 [(unsigned char)0])) <= (((/* implicit */int) arr_10 [i_0] [(short)6] [i_1] [i_2])))) ? ((-(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2])))) : (((((/* implicit */_Bool) (unsigned short)47426)) ? (((/* implicit */int) (short)27568)) : (((/* implicit */int) (unsigned char)120))))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((_Bool) (~(((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1]))) : (((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */int) (unsigned short)59587)) : (((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)4] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : ((-(((/* implicit */int) (!(arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3]))))))));
                    arr_16 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_9 [i_3] [i_2] [(unsigned short)2]);
                    var_20 = ((/* implicit */unsigned short) min((var_20), (arr_4 [i_0] [i_1 + 2])));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                    {
                        var_21 = arr_14 [(unsigned short)3] [(unsigned char)12] [(unsigned short)3] [(unsigned char)0] [i_4] [(unsigned char)11];
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (unsigned short)19791))) != (((((/* implicit */int) arr_4 [i_2] [i_2])) * (((/* implicit */int) arr_13 [i_1] [i_1]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1 - 2] [i_1] [i_3] [i_5 + 1] [(unsigned char)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3])) ? (((/* implicit */int) arr_6 [i_1] [(short)1])) : (((/* implicit */int) arr_10 [i_0] [i_0] [(short)12] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3] [i_1])) - (((/* implicit */int) arr_4 [i_1] [i_3])))))));
                        arr_23 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((arr_0 [(unsigned char)6]) && (arr_13 [i_1 - 1] [i_1 - 1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(short)6] [i_1] [i_2] [i_5 + 1])) && (arr_13 [i_2] [(_Bool)1])))) : (((/* implicit */int) ((_Bool) arr_19 [i_5])))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_3])) % (((/* implicit */int) arr_4 [i_1] [i_1 + 1])))) & (((/* implicit */int) ((_Bool) arr_14 [(unsigned short)4] [i_5] [i_3] [(unsigned short)4] [i_1] [(short)8]))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_6 [i_1] [(unsigned short)0])) | (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        arr_27 [(_Bool)1] [i_0] [i_0] [i_3] [(_Bool)1] [i_0] [i_0] |= ((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]);
                    }
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (((~(((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_17 [i_3] [i_1 - 1] [i_3] [i_2] [i_2] [i_3] [i_3])))))) * (((((/* implicit */_Bool) ((unsigned char) arr_24 [(unsigned char)11] [i_1] [i_1] [(short)0] [i_1] [i_1] [i_1]))) ? (((((/* implicit */int) arr_15 [i_3] [i_1] [i_1] [i_0])) ^ (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) : (((((/* implicit */int) arr_14 [(unsigned char)9] [i_1 + 1] [i_1 - 2] [i_2] [i_2] [i_3])) ^ (((/* implicit */int) arr_18 [i_0] [(unsigned short)10] [i_1 - 1] [i_2] [i_2] [i_3])))))))))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_31 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */_Bool) (~((+(((/* implicit */int) ((unsigned short) (unsigned short)23118)))))));
                    arr_32 [i_1] [(unsigned short)6] [(unsigned short)6] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (short)4))) ^ (((/* implicit */int) ((unsigned short) arr_17 [i_1] [i_0] [(_Bool)1] [i_1] [i_1] [i_1] [i_7])))));
                }
            }
            for (short i_8 = 2; i_8 < 11; i_8 += 2) 
            {
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_18 [(unsigned char)7] [i_1 - 2] [i_1] [i_1 - 2] [i_0] [i_0]))));
                var_27 = (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)21113)) | (((/* implicit */int) (short)-31102))))));
            }
        }
    }
    for (unsigned char i_9 = 2; i_9 < 17; i_9 += 2) 
    {
        var_28 = ((/* implicit */_Bool) max((var_28), (((_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_35 [i_9] [(unsigned char)8]))))))));
        arr_37 [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) ((short) ((unsigned char) arr_36 [i_9])))) * (((/* implicit */int) ((short) ((((/* implicit */int) arr_35 [i_9] [i_9 + 2])) / (((/* implicit */int) arr_36 [i_9]))))))));
    }
}
