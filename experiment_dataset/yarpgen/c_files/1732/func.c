/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1732
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)26017)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))));
    var_16 = (unsigned char)12;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) var_11))))))) ? ((+(((/* implicit */int) ((unsigned char) arr_1 [i_0]))))) : (((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [(unsigned short)15] [(short)14])) : (((/* implicit */int) (unsigned char)80)))) + (((((/* implicit */int) var_8)) + (((/* implicit */int) var_13))))))));
                        arr_10 [i_1] = ((/* implicit */short) (~(((/* implicit */int) max((arr_1 [i_1]), (arr_1 [i_0]))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32755)) ? (max((((((/* implicit */int) (short)15040)) << (((((/* implicit */int) (unsigned short)34852)) - (34844))))), (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)2607))))) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) ((unsigned short) var_1)))))));
                        arr_11 [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [(short)14] [i_1])) ? (((/* implicit */int) min((arr_8 [i_2 - 1]), (arr_8 [i_2 - 2])))) : (((((/* implicit */int) var_1)) + (((((/* implicit */int) var_10)) / (((/* implicit */int) arr_0 [i_0] [(unsigned short)0]))))))));
                    }
                    for (unsigned char i_4 = 3; i_4 < 16; i_4 += 3) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_1] [(unsigned short)8] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_5 [(unsigned char)16] [i_1] [i_2] [i_2 + 1]))))))) ? (((((/* implicit */int) arr_7 [(short)15])) | (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (unsigned short)30667)) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) arr_5 [(unsigned short)10] [i_1] [(short)16] [i_4]))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) max((((unsigned short) var_10)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))))))))));
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_13 [i_0] [i_0]))));
                        var_20 = ((/* implicit */short) (unsigned short)17);
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) arr_2 [i_1]))));
                        arr_18 [i_5] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_5 - 2])) - (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 2] [i_5 - 3]))));
                        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32415)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_5 - 3] [i_5] [i_5]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_17 [i_5 + 1] [(unsigned short)3] [(short)2] [i_1] [(unsigned char)16] [i_0]))));
                    }
                    arr_19 [i_1] [(unsigned short)8] [i_2] [i_0] = var_12;
                }
                for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) 
                {
                    arr_22 [i_1] [i_1] = ((/* implicit */short) arr_7 [(unsigned short)15]);
                    arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [(unsigned short)3] [i_6 - 1] [i_6 + 2] [i_1])) | (((/* implicit */int) arr_12 [(short)11] [i_0] [i_6] [i_6 + 2] [i_1]))))) ? (((((/* implicit */int) (short)11677)) + (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 4; i_7 < 16; i_7 += 1) 
                    {
                        for (short i_8 = 3; i_8 < 17; i_8 += 1) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_1] [i_7 + 1] = ((/* implicit */unsigned char) arr_26 [i_6] [(unsigned char)7] [(unsigned short)1] [i_7 - 1] [i_8] [i_7 - 1]);
                                var_24 = ((/* implicit */short) min((var_24), (var_2)));
                            }
                        } 
                    } 
                    arr_30 [i_1] = ((/* implicit */short) var_12);
                }
                for (unsigned char i_9 = 4; i_9 < 17; i_9 += 2) 
                {
                    arr_33 [i_9] [i_9] |= ((/* implicit */unsigned char) ((((/* implicit */int) (short)22249)) & (((((/* implicit */int) (unsigned short)30667)) << (((((/* implicit */int) (unsigned char)64)) - (51)))))));
                    arr_34 [i_1] [(unsigned short)5] [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_9 - 2])) < (((/* implicit */int) arr_2 [i_9 - 3]))))), (((((/* implicit */int) var_3)) + (((/* implicit */int) arr_31 [(unsigned short)2] [(short)1] [i_9]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 1; i_10 < 15; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 4; i_11 < 16; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_13 [i_9] [i_1])) & (((/* implicit */int) arr_13 [i_1] [i_1])))) == ((((~(((/* implicit */int) (unsigned short)65535)))) + (((((/* implicit */int) var_0)) | (((/* implicit */int) (short)32767))))))));
                                arr_42 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) << (((((((/* implicit */int) (unsigned char)7)) + (((/* implicit */int) var_12)))) - (38044))))) >= (((/* implicit */int) arr_25 [i_1] [i_9] [i_1] [i_1]))));
                            }
                        } 
                    } 
                    arr_43 [i_0] [i_1] = ((/* implicit */short) (((-(((/* implicit */int) min(((unsigned short)33819), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [i_0] [i_1] [i_0]))))))) + (((/* implicit */int) arr_36 [i_0] [i_1] [i_9 - 2] [(short)11]))));
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 1; i_13 < 17; i_13 += 4) 
                        {
                            {
                                arr_49 [i_0] [(unsigned char)6] [(unsigned char)0] [i_1] [i_0] [(unsigned char)0] [i_0] = ((/* implicit */unsigned short) var_2);
                                arr_50 [i_1] [i_1] = ((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_1] [i_9] [i_12] [i_13]);
                            }
                        } 
                    } 
                }
                arr_51 [i_0] [i_1] [(unsigned char)8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned char)75))) + (((((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)6])) ^ (((/* implicit */int) arr_26 [(unsigned char)6] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                arr_52 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_16 [i_1] [i_1] [(unsigned char)11] [i_0])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_45 [i_1])))), (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_11)))) >= (((((/* implicit */int) arr_45 [i_0])) << (((((/* implicit */int) var_2)) - (14552))))))))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    for (unsigned char i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        {
                            arr_57 [i_1] [(short)3] [(short)5] [i_15] [(unsigned char)7] = ((/* implicit */short) (((-(((/* implicit */int) var_3)))) % (((/* implicit */int) ((unsigned short) arr_41 [i_0] [i_1] [i_0] [i_15] [i_0] [(unsigned short)4])))));
                            var_26 = var_13;
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */short) var_6);
}
