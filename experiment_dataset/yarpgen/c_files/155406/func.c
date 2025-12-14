/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155406
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 4; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((unsigned int) max(((signed char)119), (((/* implicit */signed char) (_Bool)1))))) < (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)112)) | (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)13] [(signed char)11]))))))))));
                    arr_10 [(unsigned char)8] [(unsigned char)6] [(unsigned char)8] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-105))));
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)45))));
                }
                for (unsigned int i_3 = 4; i_3 < 16; i_3 += 2) /* same iter space */
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~((~(((/* implicit */int) ((signed char) arr_8 [i_1] [i_1] [i_3] [i_1]))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                    {
                        var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_2 [i_4] [i_3]))) ? (((/* implicit */int) arr_16 [16U] [i_3] [i_3] [(unsigned char)16] [i_3 + 2])) : (((/* implicit */int) var_0))));
                        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) (unsigned char)189))));
                        var_19 = ((/* implicit */_Bool) arr_15 [i_1 + 1] [i_3 - 1] [i_3] [i_3] [i_3 + 2]);
                        var_20 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_0))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) (unsigned char)108))))) | (((/* implicit */int) ((signed char) var_2)))))) ? (((/* implicit */int) arr_5 [i_0] [(unsigned char)2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))));
                        arr_21 [(signed char)15] [i_1 + 2] [i_5] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_13 [i_0] [(unsigned char)6] [(unsigned char)12] [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (arr_5 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned char) var_6))))), (((/* implicit */int) var_12))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                    {
                        var_21 += ((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned char)107), (((/* implicit */unsigned char) (signed char)-6))))) | (min((((/* implicit */int) max(((unsigned char)147), (((/* implicit */unsigned char) (_Bool)0))))), ((~(((/* implicit */int) var_8))))))));
                        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) max((var_0), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)125)) < (((/* implicit */int) (signed char)22))))))))));
                        arr_26 [2U] [12U] [15U] [15U] = ((/* implicit */unsigned int) arr_24 [5U] [(signed char)4] [i_3] [i_3] [(signed char)4]);
                        arr_27 [i_0] [(signed char)9] [(signed char)15] [i_1] [i_3 - 4] [(unsigned char)13] = ((/* implicit */signed char) arr_22 [i_0] [i_0] [(signed char)0] [i_0]);
                    }
                }
                arr_28 [i_0] [i_0] = ((/* implicit */unsigned int) var_3);
                arr_29 [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) ((signed char) arr_15 [(unsigned char)10] [i_1 - 1] [i_0] [i_0] [i_0])));
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    arr_34 [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (332953U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108)))));
                    var_23 = ((signed char) min((((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_6)))), (((((/* implicit */int) arr_33 [i_7] [17U] [17U] [i_7])) & (((/* implicit */int) (signed char)-16))))));
                    var_24 = var_4;
                    arr_35 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (1720519851U)))) ? (((((/* implicit */int) (signed char)-30)) | (((/* implicit */int) arr_24 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))) : (((/* implicit */int) max((max((var_11), (((/* implicit */unsigned char) arr_13 [(signed char)14] [(signed char)9] [8U] [(signed char)14])))), (((/* implicit */unsigned char) min((arr_18 [(signed char)4] [(signed char)10] [(signed char)4]), ((_Bool)0)))))))));
                    var_25 -= ((/* implicit */signed char) ((((((/* implicit */int) var_11)) | (((/* implicit */int) arr_25 [i_7] [(_Bool)1] [i_1] [i_0])))) - ((-(((/* implicit */int) var_3))))));
                }
                for (signed char i_8 = 2; i_8 < 15; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) var_14);
                                var_27 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_19 [i_1 + 1] [i_8 + 2] [i_10])), (max(((unsigned char)0), ((unsigned char)45)))));
                                arr_44 [i_10] [(_Bool)1] [i_8] = ((/* implicit */unsigned int) var_6);
                                arr_45 [i_10] [i_10] [i_8] [i_8] [(signed char)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_5 [i_0] [i_0])))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)94)))) : (((/* implicit */int) var_6))))) ? ((+(((/* implicit */int) arr_19 [i_8 - 2] [i_8 + 2] [i_10])))) : (((/* implicit */int) arr_42 [i_0] [i_0] [i_10] [(_Bool)0] [i_0]))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned int) arr_38 [(unsigned char)17] [i_1] [i_1] [(signed char)10]);
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) max((((/* implicit */unsigned char) var_12)), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    var_30 = ((/* implicit */signed char) min((var_30), (((signed char) 0U))));
                }
            }
        } 
    } 
    var_31 ^= ((/* implicit */signed char) (-((((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294634326U))) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))));
}
