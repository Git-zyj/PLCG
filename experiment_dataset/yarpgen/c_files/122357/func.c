/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122357
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_5))) & (var_3)))))) ? (max((((/* implicit */long long int) ((int) var_8))), (var_13))) : (((/* implicit */long long int) max((((((/* implicit */int) var_1)) | (((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_1))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */_Bool) (+(max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_14)) ? (arr_5 [i_0 - 3]) : (((/* implicit */int) var_4))))))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) ((var_3) > (((/* implicit */long long int) var_7)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */int) var_8))))) ? (arr_3 [i_0] [i_1 + 4]) : (((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_5)) + (43)))))) ? (((arr_3 [i_1] [i_1]) / (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) var_10))))))));
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)57);
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)128)))))));
                        var_19 = ((/* implicit */signed char) max(((((~(var_11))) / ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (!(((((/* implicit */int) (unsigned char)203)) >= (((/* implicit */int) (unsigned char)57)))))))));
                        arr_12 [i_0 - 2] [i_1 + 3] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) (~(((arr_3 [i_0 + 2] [i_0 + 2]) | (((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) var_12)) : (arr_3 [i_2] [i_1])))))));
                        var_20 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                        var_21 = ((/* implicit */unsigned long long int) ((max((arr_10 [i_0] [i_0 - 3] [i_0 + 2] [i_1 + 2] [i_1] [i_1 + 1]), (arr_10 [i_0 - 3] [i_0 + 1] [i_1] [i_1] [i_1 - 1] [i_1 + 4]))) >= (arr_10 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 4])));
                    }
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_1 + 2] [i_4] [i_4] [i_1 - 2] &= ((/* implicit */int) var_1);
                        arr_16 [i_0] [i_1 + 1] [i_1] [i_2] [i_4] = ((((/* implicit */_Bool) ((arr_13 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 4] [i_1])))))) ? (var_14) : (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_0 + 3] [i_0])), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)199))))))));
                    }
                    var_22 = ((/* implicit */unsigned char) arr_5 [i_0 - 3]);
                }
                for (unsigned int i_5 = 1; i_5 < 23; i_5 += 1) 
                {
                    arr_21 [i_1] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 3]))));
                    arr_22 [i_0] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) var_8)) : (-1770152298)))) ? (arr_14 [i_0] [i_0] [i_5] [i_0 + 2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0 - 3]) >= (var_3)))))));
                    arr_23 [i_5 + 2] [i_5] [i_5] [i_5 + 1] = var_7;
                    var_23 = ((/* implicit */_Bool) var_2);
                }
                for (short i_6 = 1; i_6 < 24; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) (unsigned char)57))))) ? ((~(67108863U))) : (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) var_10))))))) >> (((((/* implicit */int) arr_27 [i_0])) + (38)))));
                        arr_29 [i_7] [i_0] = ((/* implicit */_Bool) (((~(((/* implicit */int) var_8)))) * ((-(((/* implicit */int) max(((_Bool)1), ((_Bool)0))))))));
                        arr_30 [i_7] [i_1 + 3] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_9))))) : (max((var_6), (var_2)))));
                        arr_31 [i_0] [i_1 + 1] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned short) max((max((arr_8 [i_1 + 2] [i_6 - 1] [i_7]), (((/* implicit */int) var_9)))), (var_6)));
                        arr_32 [i_7] [i_1] [i_1] [i_1 + 3] [i_1] = ((/* implicit */int) ((unsigned char) (-(var_6))));
                    }
                    var_25 = (signed char)60;
                }
                for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    arr_35 [i_0] [i_1 + 2] [i_8] = ((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (((max((((/* implicit */long long int) (unsigned char)209)), (var_14))) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 3] [i_1 + 4])))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 22; i_9 += 4) 
                    {
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (((var_6) & (((/* implicit */int) var_12))))));
                                var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)57))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_25 [i_1 + 1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_3)))))) : (((long long int) (_Bool)1))));
                                var_28 = ((/* implicit */unsigned char) (((~(711261202U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199)))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (var_7))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_11 = 3; i_11 < 13; i_11 += 1) 
    {
        var_29 ^= (((-((+(var_13))))) / (max((((/* implicit */long long int) max((var_10), ((unsigned char)56)))), (((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_11 - 1] [i_11] [i_11]))))))));
        var_30 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) (((_Bool)1) ? (var_3) : (((/* implicit */long long int) arr_8 [i_11] [i_11] [i_11]))))) ? (var_6) : (((/* implicit */int) ((_Bool) var_7))))), (((((/* implicit */_Bool) arr_41 [i_11 - 3])) ? (((/* implicit */int) (signed char)-1)) : ((~(((/* implicit */int) var_1))))))));
    }
    var_31 |= ((/* implicit */short) var_5);
}
