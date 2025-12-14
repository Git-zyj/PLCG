/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157720
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
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (short)63))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_19 *= min((((/* implicit */short) ((((/* implicit */_Bool) (short)63)) && (((/* implicit */_Bool) (short)-29394))))), ((short)19569));
                    arr_9 [(unsigned char)7] [i_1] [i_1] = ((/* implicit */short) min(((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))), (((/* implicit */int) (short)-63))));
                    var_20 = ((/* implicit */short) max((((/* implicit */int) arr_2 [i_0])), ((~(((/* implicit */int) min((var_8), ((short)-32766))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */short) ((unsigned char) ((short) var_17)));
                        var_22 = var_6;
                    }
                    for (unsigned char i_6 = 2; i_6 < 8; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_12 [i_6 - 1] [(unsigned char)4] [i_4 - 1])) ? (((/* implicit */int) arr_12 [i_6 - 2] [i_6 - 2] [i_4 + 1])) : (((/* implicit */int) arr_12 [i_6 - 1] [i_6] [i_4 - 1])))), (((((((/* implicit */_Bool) (unsigned char)67)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) arr_6 [i_6 - 1] [(unsigned char)7] [i_4]))))));
                        arr_21 [(unsigned char)7] [i_4] [(short)7] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((((/* implicit */int) (unsigned char)170)) != (((/* implicit */int) var_1)))), ((!(((/* implicit */_Bool) (short)19720)))))))));
                    }
                    arr_22 [i_0] [i_0] = (unsigned char)67;
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((arr_4 [i_0]), (((/* implicit */short) arr_17 [(short)10] [(short)10] [(short)10] [i_0] [i_0]))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) max(((unsigned char)18), ((unsigned char)179)))))), (((/* implicit */int) var_3))));
    }
    for (unsigned char i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 18; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                {
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((((/* implicit */int) (short)30935)) >> (((((/* implicit */int) (short)18474)) - (18454))))) * (((/* implicit */int) (short)18474)))))));
                    var_26 = ((/* implicit */short) min((var_26), ((short)-1371)));
                }
            } 
        } 
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_26 [i_7 + 3] [i_7] [i_7])), (var_11)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_7 + 3] [i_7 + 3] [i_7])))))));
    }
    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_11)))) - ((~(((/* implicit */int) var_13))))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) min((arr_31 [i_10] [i_10]), (var_6))))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 1; i_11 < 16; i_11 += 3) 
        {
            for (unsigned char i_12 = 1; i_12 < 15; i_12 += 4) 
            {
                {
                    var_29 *= ((/* implicit */short) ((unsigned char) (unsigned char)18));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 3; i_13 < 15; i_13 += 2) 
                    {
                        for (short i_14 = 2; i_14 < 17; i_14 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) >= (((/* implicit */int) min((arr_42 [i_14] [i_14] [i_14 + 1] [i_14 + 1] [i_14] [i_14]), (arr_42 [i_14] [i_14] [i_14 + 1] [i_14] [i_14] [(short)6]))))));
                                arr_43 [i_10] [i_11] [i_12] [i_13] [(unsigned char)11] = ((/* implicit */short) arr_42 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 1) 
    {
        for (short i_16 = 0; i_16 < 17; i_16 += 3) 
        {
            {
                arr_48 [i_15] [i_16] [i_15] = ((/* implicit */unsigned char) (short)18474);
                arr_49 [i_16] [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_38 [i_15] [i_15] [i_15] [i_15])) + (((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (short)-63)) : (((/* implicit */int) (short)18474))))));
                var_31 = var_5;
            }
        } 
    } 
    var_32 = var_14;
    var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)124)))))));
}
