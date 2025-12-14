/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108836
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((min((max((((/* implicit */unsigned int) (unsigned short)62215)), (3835233504U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) var_9))))))), (max((((/* implicit */unsigned int) arr_1 [i_0 - 2] [i_0 + 1])), (var_2)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) var_10);
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_0])) ? (arr_9 [i_0 - 2] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))))));
                        arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_9);
                        var_18 = ((/* implicit */int) (unsigned char)62);
                        arr_16 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 + 1]))) ^ (var_2)))) ? (max((var_11), (((/* implicit */long long int) arr_6 [i_2] [i_2] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_1] [i_1] [i_0]), (arr_6 [i_2] [i_1] [i_3])))))));
                        var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) var_10)), (((((/* implicit */long long int) ((/* implicit */int) (short)32740))) % (((long long int) (unsigned char)125))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_20 = arr_9 [i_4] [i_1] [i_1] [i_0];
                        arr_19 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_1] [i_0] [i_4] [i_4]);
                        /* LoopSeq 3 */
                        for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (-(max((((/* implicit */unsigned int) (unsigned char)125)), (((((/* implicit */_Bool) 788467350)) ? (arr_9 [i_0] [i_0] [i_2] [i_0]) : (arr_9 [(_Bool)1] [i_0 - 1] [i_2] [i_0 - 1]))))))))));
                            var_22 = ((/* implicit */_Bool) ((int) ((long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3835233504U)))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            arr_24 [i_0 - 1] [i_0] [i_0] [i_0 - 2] [i_0] = ((/* implicit */long long int) arr_11 [i_1] [i_4] [i_6]);
                            var_23 = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) (unsigned short)0)), (2056748212U))), (((/* implicit */unsigned int) arr_13 [i_1] [i_4] [i_1]))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((unsigned short) arr_7 [i_0] [i_0 - 1] [i_2]))), (max((2972649093U), (((/* implicit */unsigned int) (unsigned char)109))))));
                            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_6]))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [6U])) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) arr_17 [i_6] [i_1] [i_1] [i_1]))))))) ? (((/* implicit */unsigned int) arr_21 [i_1] [i_1] [i_2] [i_1])) : (((unsigned int) arr_13 [i_1] [(unsigned char)6] [i_2]))));
                            var_25 *= ((/* implicit */_Bool) var_2);
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 1]))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1] [i_7])) != (((/* implicit */int) arr_2 [i_2] [i_0 + 1]))));
                        }
                    }
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (short)-32740))));
    }
    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 2; i_9 < 14; i_9 += 4) 
        {
            for (unsigned char i_10 = 2; i_10 < 14; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            {
                                var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) / (arr_35 [i_8] [i_8])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)176)), (arr_33 [i_11] [i_11] [i_11])))) : (((/* implicit */int) max((arr_36 [i_8] [i_9 + 2] [i_8] [i_11]), (var_10))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_36 [i_10 + 2] [i_9 - 2] [i_10] [i_10])) == (((/* implicit */int) (unsigned char)147))))) : (((/* implicit */int) ((-9223372036854775800LL) != (((/* implicit */long long int) 3835233504U)))))));
                                var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)125)) ? (126976U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-23754)))))) ? (min((((/* implicit */unsigned int) (unsigned short)63225)), (3835233504U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((3835233484U) == (2732231859U))))));
                                arr_42 [i_8] [i_8] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_8] [i_8]))) : (((((/* implicit */_Bool) max((arr_35 [i_8] [i_9]), (((/* implicit */unsigned int) (unsigned short)9))))) ? (max((arr_32 [i_10] [i_10]), (((/* implicit */long long int) (unsigned char)211)))) : (((/* implicit */long long int) ((734572586U) << (((72249450) - (72249445))))))))));
                            }
                        } 
                    } 
                    var_31 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((var_7) && (((/* implicit */_Bool) arr_36 [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 - 2]))))) < (((/* implicit */int) ((unsigned char) max((arr_33 [i_8] [i_8] [i_8]), (((/* implicit */unsigned short) arr_39 [i_8] [i_8] [i_10 - 2] [(unsigned char)11]))))))));
                }
            } 
        } 
        var_32 *= arr_35 [i_8] [i_8];
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_0))));
    }
    var_34 = var_13;
    var_35 = ((/* implicit */int) max((((/* implicit */long long int) max(((signed char)53), (((signed char) 667023614))))), (var_11)));
    var_36 = ((/* implicit */short) (unsigned char)94);
}
