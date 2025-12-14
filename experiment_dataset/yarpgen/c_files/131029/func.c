/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131029
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) != (((/* implicit */int) (short)1023))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) >= ((~(((/* implicit */int) (unsigned short)8160)))))) && (((/* implicit */_Bool) ((short) var_2)))));
        arr_4 [(unsigned short)6] [(unsigned short)6] |= (unsigned short)2855;
        var_15 = ((/* implicit */short) ((max(((~(3081508980U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))) != (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-32)) + (2147483647))) >> (min((((/* implicit */unsigned int) (signed char)15)), (1423276290U))))))));
    }
    for (signed char i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_10 [i_1] [(short)1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)1)) << ((((+(((/* implicit */int) (short)27376)))) - (27355)))));
            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) 3584U)))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (3561451090U)))) : (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) arr_7 [i_4]))))));
                    var_17 += ((/* implicit */unsigned int) (short)-1012);
                }
                var_18 -= ((/* implicit */unsigned int) var_11);
            }
            for (short i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_1 + 1]))));
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62681)) && (((/* implicit */_Bool) arr_14 [i_2])))))));
            }
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    {
                        arr_25 [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) ((unsigned int) arr_11 [i_1] [i_1 - 2] [i_7] [i_1]));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_1] [i_1])) * (((/* implicit */int) (short)-1023)))))));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)1041))))) || (((/* implicit */_Bool) (signed char)87))));
                        }
                        for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
                            arr_31 [(short)7] [i_2] [i_6] [(unsigned short)0] = ((/* implicit */short) (-(((/* implicit */int) (signed char)-32))));
                        }
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_7] [i_7] [i_7] [i_1]))) : (2378815998U))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_10 = 3; i_10 < 15; i_10 += 4) 
            {
                var_25 = ((/* implicit */short) var_13);
                /* LoopNest 2 */
                for (unsigned int i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-39)))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)62680)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (unsigned short)21621)) ? (arr_9 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12)))))));
                            arr_40 [i_1 + 1] [i_2] [i_10] [i_12] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)1)) > (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_13)))))));
                        }
                    } 
                } 
            }
            for (short i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                var_28 ^= ((((/* implicit */_Bool) 3081508979U)) ? (arr_38 [i_1] [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))));
                arr_45 [i_13] [i_2] [i_13] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_6))))));
                var_29 = ((/* implicit */signed char) ((((((/* implicit */int) var_9)) / (((/* implicit */int) (short)1041)))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-7259)) : (((/* implicit */int) (unsigned short)23837))))));
                arr_46 [i_13] [i_13] [(unsigned short)15] = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_6 [i_1])))));
                var_30 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_29 [i_1] [i_2] [i_2] [i_13] [i_13] [i_13] [i_13])) < (((/* implicit */int) arr_43 [i_1])))))));
            }
        }
        var_31 *= ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)-6387)), (max((((/* implicit */unsigned short) var_10)), ((unsigned short)1))))))));
    }
    var_32 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned short) var_11))), (((((/* implicit */_Bool) 4294966784U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (((((/* implicit */_Bool) 2675876264U)) ? (3373727747U) : (297763125U)))))));
    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) var_1))));
}
