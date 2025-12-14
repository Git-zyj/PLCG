/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125999
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] = max((max(((unsigned char)232), ((unsigned char)112))), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)52)) > (((((/* implicit */int) var_16)) ^ (((/* implicit */int) (unsigned char)229))))))));
                arr_5 [i_0] = max((min((((/* implicit */unsigned int) (unsigned char)233)), (var_8))), (((/* implicit */unsigned int) min((arr_1 [i_0]), (arr_1 [i_0])))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 4; i_3 < 19; i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_3] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) arr_1 [i_1]))))) ? (((/* implicit */int) max((min((var_5), ((unsigned char)196))), (arr_11 [i_0] [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) arr_11 [i_3 - 1] [i_3] [i_3 - 2] [i_3 - 2]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                        {
                            arr_17 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_8) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) >> (((/* implicit */int) var_10))));
                            arr_18 [(signed char)1] [i_0] [i_3] [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_16)), (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_3 - 4]))))))));
                            var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((((/* implicit */int) (unsigned char)204)) <= (((/* implicit */int) arr_3 [i_4] [i_4]))))))), (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) max((arr_14 [i_0] [i_3] [i_0] [i_0] [(unsigned char)1] [i_0]), ((unsigned char)248))))))));
                            var_18 += ((/* implicit */signed char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3] [i_3 + 3] [i_3 - 4])))))));
                            var_19 -= ((/* implicit */unsigned char) min((max(((+(((/* implicit */int) arr_9 [i_2] [(unsigned char)8])))), (((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned char)204))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)113)) ? (arr_13 [i_3 + 1] [i_3] [i_3] [i_3 + 2] [i_3 - 3]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) arr_11 [(unsigned char)15] [i_1] [i_2] [i_5])))))));
                            arr_21 [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)172);
                            arr_22 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)21)) ? (4240717969U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20)))));
                            arr_23 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) >= (arr_13 [i_0] [i_1] [i_2] [i_2] [i_2])));
                            var_21 = ((/* implicit */unsigned char) 65534U);
                        }
                        arr_24 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3449351055U)) ? (var_8) : (1306296482U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1510509194U))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_13)))), (((((/* implicit */int) arr_20 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3])) + (((/* implicit */int) arr_3 [i_0] [i_3])))))))));
                    }
                    for (unsigned char i_6 = 4; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_0] [i_0] = (unsigned char)33;
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((2988670814U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))))))));
                    }
                    arr_28 [i_1] &= max((((/* implicit */unsigned char) (signed char)127)), (var_14));
                    arr_29 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((max((arr_13 [i_0] [i_2] [i_2] [i_2] [i_1]), (arr_13 [i_0] [i_0] [i_2] [i_0] [i_0]))) < (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (3937076745U)))));
                }
                arr_30 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_12))))) - (max((4294967295U), (((/* implicit */unsigned int) (unsigned char)121)))))), (((/* implicit */unsigned int) (signed char)29))));
            }
        } 
    } 
    var_23 = var_3;
    var_24 |= max((max((((/* implicit */unsigned int) var_0)), ((-(3937076745U))))), (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (unsigned char)127))))))));
}
