/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180407
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
    var_17 = ((/* implicit */unsigned char) (short)32766);
    var_18 -= ((/* implicit */signed char) ((((/* implicit */int) var_0)) << (((((/* implicit */int) min(((unsigned char)104), (((/* implicit */unsigned char) min((var_12), (var_12))))))) - (71)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 1; i_2 < 23; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] = ((/* implicit */signed char) ((unsigned short) min((var_9), (((/* implicit */unsigned short) var_11)))));
                                var_19 = ((/* implicit */unsigned char) min((((int) (signed char)-22)), (max((((4) << (((((/* implicit */int) (signed char)-22)) + (26))))), (((/* implicit */int) (signed char)-1))))));
                            }
                        } 
                    } 
                    arr_11 [i_2] [i_0 - 2] [i_0 - 2] [i_2] = ((/* implicit */short) max((-5), (((/* implicit */int) (unsigned short)30633))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 1; i_5 < 24; i_5 += 3) 
                {
                    arr_15 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                    arr_16 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)49969)) | (((/* implicit */int) (signed char)116))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_0))));
                    arr_17 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */int) (signed char)-59);
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 24; i_6 += 4) 
                {
                    var_21 = (signed char)1;
                    var_22 += ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (unsigned char)75)) - (arr_1 [i_0 - 2]))));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 2; i_7 < 22; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_6 - 1] [i_7] [(short)15] [i_7 + 1])) && (((/* implicit */_Bool) (unsigned char)149))));
                        var_24 *= ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned short)58144)) / (((/* implicit */int) arr_7 [i_0] [i_1] [i_6 - 2] [i_7]))))));
                        arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (signed char)1);
                        arr_23 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) (short)-6544)))))));
                    }
                    for (unsigned short i_8 = 2; i_8 < 24; i_8 += 3) 
                    {
                        arr_26 [i_8] [i_8] [i_6 + 1] [i_8] = ((/* implicit */short) (+(-2110887524)));
                        var_25 = ((/* implicit */signed char) ((unsigned short) 1048448));
                        /* LoopSeq 2 */
                        for (short i_9 = 4; i_9 < 22; i_9 += 4) /* same iter space */
                        {
                            arr_30 [i_0] [i_1] [i_6] [i_8] [i_8] [i_8] [i_9 + 1] = ((/* implicit */unsigned short) (-2147483647 - 1));
                            arr_31 [i_6] [i_1] [i_8] [(unsigned char)6] [i_0 + 1] [i_1] [i_8] = ((/* implicit */unsigned short) var_5);
                            var_26 += ((/* implicit */unsigned char) var_6);
                            arr_32 [i_0] [i_0] [i_6] [i_8] [i_6] [i_8] = ((/* implicit */short) (signed char)12);
                        }
                        for (short i_10 = 4; i_10 < 22; i_10 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_8] [i_8] [i_8 - 2] [i_8] [i_8 + 1] [i_8])) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_24 [i_0 - 4] [i_0] [i_0 - 3] [i_0] [i_0] [i_0])))))))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (short)-12609)) : (((/* implicit */int) arr_24 [i_6] [i_6 + 1] [i_6] [i_6] [i_6] [i_6 - 1]))));
                        }
                    }
                }
                for (signed char i_11 = 2; i_11 < 24; i_11 += 3) 
                {
                    var_29 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_21 [i_11 - 2] [i_0 - 1] [i_11 + 1])))) / (((((/* implicit */_Bool) arr_21 [i_11 - 1] [i_0 - 2] [i_11])) ? (arr_1 [i_11 - 2]) : (((/* implicit */int) (unsigned char)104))))));
                    var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (unsigned short)58137)))));
                }
                /* LoopNest 3 */
                for (signed char i_12 = 1; i_12 < 22; i_12 += 2) 
                {
                    for (unsigned short i_13 = 1; i_13 < 21; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 2; i_14 < 24; i_14 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned short)65535))))));
                                var_32 = ((/* implicit */unsigned char) arr_37 [i_1] [i_1] [i_1]);
                                var_33 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) -146755220)) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) (short)1286)) / (2147483628))))) - (((/* implicit */int) (unsigned short)40312))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
