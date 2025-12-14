/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124368
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] = max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [(unsigned short)13] [(_Bool)1]))))) ? (1425537778) : (((((/* implicit */int) arr_2 [i_1])) % (-1425537779))))), ((~(((/* implicit */int) max((arr_0 [i_0] [9]), ((signed char)-80)))))));
                var_14 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (short)22739)) ? (-1425537779) : (((/* implicit */int) (signed char)2)))) / (2054482932))) >> (((max(((~(((/* implicit */int) arr_2 [(signed char)12])))), ((~(-1425537779))))) - (1425537777)))));
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_3] [i_3] = ((unsigned short) (unsigned char)253);
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max(((((_Bool)0) ? (min((1425537778), (((/* implicit */int) (unsigned short)20947)))) : ((-(((/* implicit */int) (signed char)-2)))))), ((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        var_16 *= ((/* implicit */unsigned char) 1425537778);
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) max((min((((/* implicit */int) (!(((/* implicit */_Bool) -1425537779))))), (((int) arr_6 [i_0] [i_1] [i_2] [i_3])))), ((-(max((((/* implicit */int) var_8)), (arr_6 [i_0] [i_1] [i_2] [i_3])))))));
                    }
                    arr_13 [(unsigned short)3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) | (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)158))))) ? (((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(unsigned short)3] [i_2])) / (((/* implicit */int) (unsigned char)98)))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))));
                }
                for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_16 [i_4] [i_1] [i_0] [i_4] = ((/* implicit */unsigned char) (-(((arr_6 [i_4] [i_4] [i_4] [(unsigned char)0]) | (((/* implicit */int) (unsigned short)52118))))));
                    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), (arr_14 [i_4] [i_4]))))));
                    var_18 = ((/* implicit */unsigned char) (~(((1425537778) ^ (((/* implicit */int) arr_8 [i_4]))))));
                    var_19 = ((/* implicit */unsigned short) arr_14 [i_4] [i_4]);
                }
                var_20 |= ((/* implicit */signed char) arr_6 [(_Bool)1] [i_0] [(short)12] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_24 [4] &= ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_17 [i_5]))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_23 [i_5] [i_5])), ((unsigned short)31795)))) ? (((((/* implicit */_Bool) 1425537778)) ? (((/* implicit */int) arr_23 [i_5] [i_5])) : (((/* implicit */int) arr_23 [i_5] [i_5])))) : ((-(((/* implicit */int) arr_23 [i_5] [i_5]))))));
                arr_25 [i_5] [i_5] = ((/* implicit */unsigned char) max((((arr_20 [i_5]) ? (((((/* implicit */_Bool) (unsigned short)9134)) ? (((/* implicit */int) (unsigned short)20771)) : (((/* implicit */int) arr_22 [i_5])))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_20 [i_5])), (var_4)))))), (max((((/* implicit */int) (signed char)-80)), ((-(-1425537779)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                {
                    arr_30 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)16)) ? (1457168977) : (((/* implicit */int) arr_20 [i_5])))) % (((/* implicit */int) arr_22 [i_5]))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 21; i_8 += 4) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                arr_36 [i_5] [i_5] [(unsigned char)13] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)22739)))) <= ((~(((/* implicit */int) (short)-20337))))));
                                arr_37 [i_5] [i_5] [i_6] [i_7] [i_8] [i_5] = ((/* implicit */short) (((~(((/* implicit */int) var_11)))) == (((((/* implicit */_Bool) (short)-23723)) ? (((/* implicit */int) arr_23 [i_7] [i_5])) : (624666060)))));
                                var_22 += ((/* implicit */unsigned short) arr_33 [i_9] [i_9] [i_9] [i_6]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) -1687860899))) || (((/* implicit */_Bool) (unsigned short)43297))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            {
                                var_24 = arr_31 [i_5] [i_6] [i_7] [i_10] [i_11] [i_11];
                                var_25 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_23 [i_5] [i_5])) < (((/* implicit */int) arr_33 [i_5] [i_6] [i_5] [i_11])))));
                            }
                        } 
                    } 
                }
                for (short i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                {
                    arr_46 [i_5] [i_5] [i_12] [i_5] = ((/* implicit */unsigned short) ((_Bool) (+(((/* implicit */int) min(((unsigned char)94), (arr_42 [i_5] [i_5] [i_6] [i_6] [i_12])))))));
                    arr_47 [i_6] [i_5] [i_5] [6] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)5767))))), (((((/* implicit */_Bool) 2053583388)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [i_5]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_2), ((unsigned char)255)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)-22740))))))))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5301))) <= (486209214U)));
                }
                /* vectorizable */
                for (short i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    var_27 = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [(unsigned char)6] [i_5] [i_5] [i_5]))))));
                    arr_51 [i_5] [i_6] [i_13] [i_5] = ((/* implicit */int) arr_34 [i_5] [i_13] [i_13] [(unsigned short)17] [i_6] [12]);
                    var_28 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) arr_39 [i_5] [i_5] [i_6] [i_5])) : (((/* implicit */int) ((arr_32 [i_5] [i_6]) >= (((/* implicit */int) arr_22 [i_5])))))));
                }
            }
        } 
    } 
}
