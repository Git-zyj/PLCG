/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159236
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) (short)10744)) : (((/* implicit */int) (unsigned short)39829))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_0] [i_3 - 1] [i_1 - 1] [i_1 - 1] [i_0]))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)39850))))) ^ (arr_8 [i_0] [i_1 - 2] [i_2] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)113)) & (((/* implicit */int) (unsigned short)25678)))))));
                        var_15 = ((/* implicit */unsigned short) ((unsigned int) ((unsigned long long int) arr_10 [i_0] [i_1 + 2] [(short)0] [i_1 + 2] [i_3 - 1] [i_3])));
                        var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */int) (unsigned short)25681)) >= (((/* implicit */int) (short)32766))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            var_17 ^= ((/* implicit */short) ((int) ((((/* implicit */int) (unsigned short)25716)) >= (((((/* implicit */_Bool) arr_14 [i_1] [i_0] [i_1 + 1] [i_1])) ? (((/* implicit */int) (unsigned short)25685)) : (285617989))))));
                            var_18 = ((/* implicit */int) ((unsigned short) (short)-32766));
                        }
                    }
                } 
            } 
        }
        arr_15 [i_0] = (+(((/* implicit */int) (unsigned char)126)));
    }
    /* vectorizable */
    for (short i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (unsigned char)114))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            var_20 |= ((/* implicit */unsigned char) (!(arr_16 [i_5 - 2])));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-10745)) ? (1637252099U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_22 [i_7] [i_7] [(unsigned short)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_5])) / (((/* implicit */int) var_2))))) ? (arr_19 [i_5] [i_7] [4U]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2949887224U)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) arr_17 [i_5])))))));
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 19; i_8 += 1) 
            {
                for (unsigned char i_9 = 3; i_9 < 22; i_9 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 3155987486U)) ? (((/* implicit */int) arr_26 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_20 [i_5] [i_8 + 1] [i_8 + 1])))))))));
                        arr_29 [i_5 - 1] [i_8] [i_8] [i_9 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) arr_27 [i_5 + 1] [i_5 + 1] [i_7] [i_8] [i_9]))));
                    }
                } 
            } 
            arr_30 [i_5] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_5 + 1])) > (((/* implicit */int) arr_17 [i_5 + 1]))));
            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_21 [i_5 - 2] [i_5 + 1] [i_5 - 2]))));
        }
    }
    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
    {
        arr_33 [i_10] = (-(((((((/* implicit */_Bool) arr_18 [i_10])) && (((/* implicit */_Bool) arr_31 [i_10] [i_10])))) ? (((/* implicit */int) arr_23 [i_10] [i_10] [i_10] [i_10])) : (((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) arr_28 [i_10])) : (((/* implicit */int) arr_27 [i_10] [i_10] [i_10] [i_10] [i_10])))))));
        arr_34 [i_10] = arr_25 [i_10] [i_10] [i_10] [i_10];
    }
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_12))) / (((/* implicit */int) (short)-32766))));
}
