/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169378
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
    var_17 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (8589934591LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))), ((-(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_15))))))));
    var_18 = ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_6 [i_0] &= ((/* implicit */long long int) (((-(((/* implicit */int) arr_5 [i_1 + 1])))) * (((/* implicit */int) var_11))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_0] [i_0] [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned char) arr_8 [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4 - 1] [i_4 + 2]);
                                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_13 [i_2] [i_4] [i_3] [i_3] [i_2])), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_0] [i_0]))) / (382362814451843977LL)))))) ? (1918036198U) : (((/* implicit */unsigned int) (-(((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)-112)))))))));
                                arr_16 [(unsigned char)10] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */short) (signed char)59)), (min((((/* implicit */short) (signed char)-1)), ((short)0))))))));
                                var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 30U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) : ((+(3401617709U)))))));
                                var_21 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_1] [i_4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))), ((+(((/* implicit */int) (_Bool)1)))))) >> ((((+(((/* implicit */int) (signed char)(-127 - 1))))) + (148)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */long long int) ((max((((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_7 [i_0] [(signed char)9] [i_1] [i_2]))))), (((((/* implicit */_Bool) 2947299038U)) ? (-826946903464455622LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]))))))))));
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 3; i_6 < 11; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_21 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [(signed char)7])) < (((/* implicit */int) arr_21 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2947299038U)))))) : (min((var_8), (((/* implicit */long long int) arr_9 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1]))))));
                            var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_18 [i_1 - 1] [i_2 - 4] [i_6 - 1] [i_6 - 3] [i_6] [i_6 - 2])))) ? (((/* implicit */int) ((unsigned short) arr_18 [i_1 + 1] [i_2 - 3] [i_5] [i_6] [i_6] [i_6 - 3]))) : (((/* implicit */int) max((((/* implicit */short) arr_18 [i_1 - 1] [i_2 - 4] [i_1 - 1] [i_2 - 4] [i_6] [i_6 + 1])), (var_6))))));
                        }
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_1 [i_1 + 1] [i_2 + 3]))))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_5] [i_0])) ? (arr_4 [i_0] [i_1] [i_5] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51)))))) ? (min((((/* implicit */unsigned int) (unsigned char)2)), (24U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1 - 1]))))) : (arr_14 [i_0] [i_1] [i_2] [i_5])));
                            arr_25 [(short)4] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) max((var_12), (arr_17 [i_7] [(signed char)8] [i_2] [i_1])))))));
                        }
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_5])) ? (arr_4 [i_1 - 1] [i_1] [i_2 + 2] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_2 [i_0] [i_0])), ((unsigned char)194)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_5] [i_5]))) : ((~(arr_23 [i_0] [i_0] [i_2] [i_0] [i_5])))))) : (((((/* implicit */_Bool) ((unsigned short) arr_7 [3LL] [i_1] [i_2] [i_5]))) ? (-5843745869169516780LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)21)))))));
                        var_29 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((arr_14 [i_5] [i_1 - 1] [i_1 - 1] [i_0]) << (((((/* implicit */int) var_1)) - (176)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)9)) ^ (((/* implicit */int) var_6))))) : (min((1008440354U), (var_14)))))));
                    }
                    for (short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                    {
                        var_30 = ((long long int) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2 - 3] [i_2 - 3] [i_2 - 3])) || (((/* implicit */_Bool) (unsigned char)247))));
                        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_18 [i_1] [i_2 - 1] [i_1] [i_1 + 1] [i_1] [i_0]), (arr_18 [i_8] [i_2 + 1] [i_1] [i_1 + 1] [i_0] [i_0]))))) != (((((/* implicit */_Bool) (short)3230)) ? (arr_14 [i_2 + 2] [i_1] [i_2 - 4] [10U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [(unsigned char)6] [i_1] [i_1] [i_1 - 1])))))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (~(min((((/* implicit */long long int) arr_1 [i_1 + 1] [i_1])), (var_9))))))));
                        var_33 = ((/* implicit */short) arr_2 [i_0] [i_1]);
                        arr_29 [i_8] [i_2 - 3] [i_2] [i_1] [i_1] [i_0] &= ((/* implicit */signed char) max((arr_7 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)-1))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 4; i_9 < 10; i_9 += 3) 
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6LL)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (unsigned char)236))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (4294967295U)));
                        var_35 = ((/* implicit */signed char) (!(arr_31 [3U] [i_2 + 1] [i_1 + 1] [i_9])));
                        arr_32 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned char)246))))));
                        var_36 |= ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_5))))));
                    }
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */signed char) max((((/* implicit */long long int) max((((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), (var_16)))), (var_12)))), (-14LL)));
}
