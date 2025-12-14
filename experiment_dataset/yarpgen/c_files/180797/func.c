/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180797
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (arr_2 [i_0 + 1] [i_0 + 1]) : (((((/* implicit */_Bool) arr_2 [(short)13] [i_0 - 1])) ? (var_13) : (((/* implicit */int) (short)23719))))));
        arr_3 [i_0 - 1] [i_0 - 1] = arr_0 [i_0 + 1] [i_0];
        var_17 = ((/* implicit */unsigned char) (+((+(arr_2 [i_0 + 1] [i_0 - 1])))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_0 + 1] [i_1 - 3] [i_1] = ((/* implicit */_Bool) min((((int) var_7)), ((-(arr_2 [i_3 - 1] [i_3 - 1])))));
                        arr_14 [i_3 - 1] [i_1] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)-15812))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned char) arr_1 [i_4 + 1]);
        arr_19 [(unsigned char)6] [(_Bool)1] = ((/* implicit */_Bool) arr_12 [i_4] [i_4 - 1] [i_4] [i_4] [(unsigned char)10]);
    }
    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 2) 
    {
        arr_23 [i_5 + 1] [i_5 + 1] = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [(short)0]))))), (((((/* implicit */_Bool) arr_1 [i_5 + 2])) ? (((/* implicit */int) arr_1 [i_5 + 2])) : (((/* implicit */int) arr_1 [i_5 - 1])))));
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_26 [(_Bool)1] [i_6] [i_5] &= ((/* implicit */unsigned char) max((((((/* implicit */int) arr_0 [i_5 - 1] [i_5 - 1])) / (((/* implicit */int) arr_5 [i_5 + 2] [i_5 + 1])))), ((-(((/* implicit */int) arr_0 [i_5 - 1] [i_5 + 1]))))));
            arr_27 [i_5 + 2] [(short)0] &= ((((var_14) ? (((/* implicit */int) arr_8 [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_8 [i_5 + 1] [i_5])))) + ((-(min((arr_12 [i_6] [i_6] [i_6] [14] [(_Bool)1]), (arr_10 [i_5] [i_5] [i_5 - 1] [i_5] [16]))))));
            var_18 *= var_3;
        }
        for (short i_7 = 2; i_7 < 16; i_7 += 3) 
        {
            var_19 = ((/* implicit */short) arr_2 [i_7 + 1] [i_7]);
            var_20 = ((/* implicit */unsigned char) min((var_20), (arr_25 [(_Bool)1] [i_7] [(_Bool)1])));
            /* LoopNest 3 */
            for (unsigned char i_8 = 3; i_8 < 16; i_8 += 4) 
            {
                for (unsigned char i_9 = 1; i_9 < 15; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_40 [i_10] [i_7] [i_9 + 1] [8] = ((/* implicit */_Bool) (((+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_4 [i_5] [i_8 - 1] [i_10])))))) << ((((-(((((/* implicit */int) arr_20 [i_10] [i_9 + 1])) / (((/* implicit */int) arr_33 [i_8 - 2] [i_10])))))) + (9)))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((short) var_7)))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_24 [i_7] [(unsigned char)2] [i_10]))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */int) ((unsigned char) ((short) arr_32 [i_5 - 1] [i_5 + 1] [i_7] [i_5 - 1])));
            /* LoopNest 3 */
            for (short i_11 = 1; i_11 < 16; i_11 += 3) 
            {
                for (int i_12 = 2; i_12 < 16; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_48 [i_13] [i_13] [i_12] [i_11] [i_11 + 1] [i_7] [(short)8] = var_8;
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_1 [i_5])))) << (((((/* implicit */int) (short)32015)) - (32000)))))) ? ((+(max((arr_12 [8] [(unsigned char)9] [(unsigned char)9] [i_12 - 1] [i_11]), (((/* implicit */int) var_11)))))) : (((/* implicit */int) max(((short)-22763), ((short)32767))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_14 = 1; i_14 < 15; i_14 += 4) 
        {
            var_25 *= ((/* implicit */short) arr_22 [i_5 + 1]);
            var_26 = ((/* implicit */unsigned char) arr_38 [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5] [i_5 - 1] [i_14 + 1] [i_14]);
            var_27 = ((/* implicit */short) arr_43 [i_5 + 2] [i_5 - 1] [i_5] [i_14 - 1]);
            arr_52 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            arr_53 [i_5 + 1] [(short)8] &= ((/* implicit */_Bool) ((((/* implicit */int) ((short) -1207297934))) << (((((min((arr_24 [i_14 + 1] [(short)2] [i_14]), (((/* implicit */int) (!(((/* implicit */_Bool) -1207297957))))))) + (557369842))) - (6)))));
        }
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((_Bool) (short)21444)) ? (((((/* implicit */_Bool) (short)-6680)) ? (var_13) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) arr_30 [i_5 + 1] [i_5 + 2])) == (((/* implicit */int) (short)-15799)))))))) ? (((/* implicit */int) min((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) arr_33 [i_5 + 1] [i_5]))))) : (((/* implicit */int) var_10)))))));
    }
    var_29 = ((/* implicit */unsigned char) var_5);
}
