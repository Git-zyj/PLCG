/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108166
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
    var_17 ^= var_7;
    var_18 += max((max((var_4), (((/* implicit */short) (signed char)-112)))), ((short)32767));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */signed char) (_Bool)1);
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-(((((_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)47594)) : (((/* implicit */int) arr_0 [i_0 - 1])))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (arr_7 [i_0 + 1])))), (((((/* implicit */int) arr_0 [i_0 + 2])) - (((/* implicit */int) max((((/* implicit */short) var_10)), (var_4))))))));
                    var_21 = max((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) arr_6 [i_0 - 1] [(unsigned char)10] [i_0 - 1] [i_0 - 1]))))), ((~(var_11))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 15; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (int i_6 = 3; i_6 < 15; i_6 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) max((((/* implicit */short) ((_Bool) arr_8 [i_0 + 1] [i_3 - 2]))), (var_7))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_3] [i_3] [i_5]) - (((-1465712900) ^ (((/* implicit */int) (unsigned short)817))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) (short)32767)))) : ((-(((/* implicit */int) var_10)))))) : (min((arr_10 [i_0 + 1]), (arr_10 [i_0 - 1])))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) arr_20 [i_0] [i_3 + 2] [i_0 + 2])) - (var_5))))));
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 16; i_8 += 2) 
                    {
                        arr_26 [i_0] [i_3] [i_4] [(unsigned char)16] [i_8] [i_7] = ((/* implicit */unsigned char) arr_3 [i_0]);
                        var_25 &= ((/* implicit */unsigned int) (((-(-1853718630))) - (((/* implicit */int) arr_12 [i_8 - 1] [i_3 + 2] [i_0 - 1] [i_0]))));
                        arr_27 [(signed char)10] [(unsigned char)1] [i_4] [(unsigned char)1] [i_0] = ((/* implicit */int) arr_9 [i_0] [i_0]);
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-542763753))))));
                    }
                }
                for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 1) 
                {
                    var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_21 [i_0 + 2])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0 + 2] [i_0 + 2])))) & (max(((-(((/* implicit */int) (unsigned char)30)))), (min((((/* implicit */int) arr_18 [i_0] [i_3] [i_4] [i_0] [i_4] [i_9])), (arr_13 [i_9 - 2] [i_4] [i_0 + 2] [i_0 + 2])))))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 3; i_10 < 13; i_10 += 1) 
                    {
                        var_28 = var_14;
                        arr_34 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (short)3615))))));
                        arr_35 [i_0] [i_0] [i_4] [i_10] [i_10 - 1] [(unsigned short)16] = ((/* implicit */unsigned char) (~(max((((/* implicit */int) min((((/* implicit */unsigned short) (short)448)), (arr_21 [i_0])))), (((var_3) & (((/* implicit */int) var_13))))))));
                    }
                    arr_36 [i_0] [i_3] = arr_6 [i_0 + 2] [i_3] [i_4] [i_9];
                    var_29 = ((/* implicit */short) var_6);
                }
                for (int i_11 = 2; i_11 < 15; i_11 += 1) 
                {
                    arr_39 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)0)), ((signed char)104)))) ? (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (max((254894002190647882ULL), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-32)) - (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        var_30 = ((((min((arr_13 [i_0] [i_3] [i_11] [i_12]), ((-(((/* implicit */int) var_4)))))) + (2147483647))) >> ((+(((/* implicit */int) (_Bool)1)))));
                        arr_44 [i_0] [i_3] [i_4] = ((/* implicit */unsigned char) max(((short)-32758), ((short)4088)));
                        var_31 |= ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_21 [i_0])))) + (((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_3] [i_3 + 2] [i_3 + 1]))))), (((arr_33 [i_0 + 2] [i_11] [i_11 - 2] [i_11 + 1] [i_11]) + (((/* implicit */unsigned int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) (unsigned char)24))))))))));
                    }
                    var_32 += ((/* implicit */unsigned long long int) max((((/* implicit */int) max(((signed char)113), (arr_8 [i_0 + 2] [i_3 + 1])))), (max((max((((/* implicit */int) var_6)), (var_15))), ((-(((/* implicit */int) (_Bool)1))))))));
                }
                arr_45 [i_3] [(unsigned char)10] [i_4] |= ((/* implicit */unsigned int) var_2);
                /* LoopNest 2 */
                for (unsigned char i_13 = 1; i_13 < 16; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        {
                            var_33 &= ((/* implicit */signed char) (-((+(((/* implicit */int) arr_4 [i_0 + 2] [i_3 + 1]))))));
                            var_34 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((var_15) < (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
            var_35 = (~(((/* implicit */int) arr_49 [i_0] [2ULL] [i_3 + 1] [i_0] [i_3] [i_0] [i_0 + 1])));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65524)) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) (((+(((/* implicit */int) var_6)))) != (((/* implicit */int) var_16)))))));
        }
    }
    var_37 = ((/* implicit */_Bool) var_2);
}
