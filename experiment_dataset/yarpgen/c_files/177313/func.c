/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177313
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
    var_17 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)3494)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)182))))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) arr_6 [i_0 + 3] [i_2 + 1])))))));
                    var_19 = ((/* implicit */unsigned short) var_3);
                    arr_7 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_2 - 1])), (arr_2 [i_0 + 1])))) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [(short)10] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)50459))))))) : (((((/* implicit */int) (unsigned short)28764)) + (((/* implicit */int) (unsigned short)36703))))));
                }
            } 
        } 
        var_20 = ((/* implicit */short) max(((~(((/* implicit */int) (unsigned short)5052)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 3] [i_0])))))));
        var_21 = ((/* implicit */short) (unsigned char)201);
    }
    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) var_14)))))));
            var_23 = arr_11 [i_3];
            /* LoopSeq 3 */
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
            {
                var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)63)), (arr_5 [i_3])))) ? (((((/* implicit */int) arr_1 [i_3])) << (((((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_8 [i_3])))) - (27436))))) : (((/* implicit */int) arr_5 [i_3]))));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_10 [i_3] [i_4] [i_5]), (((/* implicit */short) (unsigned char)236))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3])) >= (((/* implicit */int) var_7)))))));
            }
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) max(((-(((((/* implicit */int) (short)-16327)) / (((/* implicit */int) arr_16 [i_6] [i_4] [(unsigned short)7] [i_3])))))), ((-(((/* implicit */int) (unsigned short)15343))))));
                var_27 = ((/* implicit */short) ((unsigned short) max((((/* implicit */unsigned short) ((short) arr_13 [i_3]))), (arr_13 [i_3]))));
            }
            for (short i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((short)6472), ((short)16326)))) ? ((~(((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_15 [i_3] [i_4] [i_7])) : (((/* implicit */int) var_0)))))) : ((-(((((/* implicit */int) arr_17 [i_3] [i_3] [i_4] [i_7])) % (((/* implicit */int) var_14))))))));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)15080)))) / ((+(((/* implicit */int) arr_11 [i_3]))))))) ? (((((/* implicit */int) max((((/* implicit */short) var_4)), (arr_17 [i_3] [i_4] [i_4] [i_7])))) + (((((/* implicit */int) (short)-21837)) + (((/* implicit */int) (unsigned short)28820)))))) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_2 [i_4]))))))));
            }
        }
        for (short i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            arr_29 [i_9] [i_8] [i_9] = ((/* implicit */short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)11799))))), (var_6)));
                            arr_30 [i_9] [i_3] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */short) (~(max((((((/* implicit */int) var_9)) + (((/* implicit */int) (short)21853)))), (((((/* implicit */int) var_13)) + (((/* implicit */int) (unsigned short)34733))))))));
                            arr_31 [i_9] [i_10] [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) arr_17 [i_8] [(unsigned short)11] [i_8] [i_8]);
                            arr_32 [i_3] [i_9] [i_9] [i_9] [i_9] [i_8] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (short)11816)))), ((~(((/* implicit */int) (unsigned short)28769))))));
                            arr_33 [i_3] [i_3] [i_9] [i_9] [i_3] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_24 [i_3] [i_8] [(unsigned char)11] [i_10] [i_11]), (((/* implicit */unsigned short) var_6)))))))) > (((/* implicit */int) var_16))));
                        }
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) arr_0 [i_8]))));
                        var_31 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_26 [i_3] [i_8] [i_9]), (arr_26 [i_3] [i_3] [i_3]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) (-((((!(((/* implicit */_Bool) (unsigned char)8)))) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_34 [i_3] [(short)2] [i_12] [i_13]))))))));
                        var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_19 [i_3]), (arr_19 [i_8]))))));
                    }
                } 
            } 
            var_34 += ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)28343)), ((unsigned short)15360))))));
            var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_36 [i_3] [i_8]), ((short)-15691))))));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) | (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) max((var_5), (arr_19 [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
        }
        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (~(((/* implicit */int) max(((unsigned short)50212), (((/* implicit */unsigned short) (short)11431))))))))));
        var_38 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned char)231), ((unsigned char)155))))));
    }
    var_39 = (unsigned char)243;
    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (-(((/* implicit */int) var_10)))))));
    var_41 ^= ((/* implicit */short) max((((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned short) var_13))))) ? (((((/* implicit */int) var_15)) + (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) var_16)))))), (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) max((var_5), ((short)-30708)))))))));
}
