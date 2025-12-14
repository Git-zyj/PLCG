/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118395
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) -116596022);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_2] [i_1] [i_0] = ((/* implicit */short) var_11);
                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned char) arr_1 [i_2]));
            }
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_0 [i_0]))));
        }
    }
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    arr_22 [i_3] [i_4] = ((/* implicit */long long int) arr_14 [i_3]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        arr_26 [i_3] [i_4] [i_3] [i_6 - 2] |= ((/* implicit */int) ((unsigned short) arr_25 [i_3] [i_6 - 2] [i_3] [i_3]));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 4; i_7 < 19; i_7 += 2) 
                        {
                            arr_30 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) var_0);
                            arr_31 [i_7] [i_7] [i_7] [(unsigned short)17] [i_7] = ((/* implicit */_Bool) (unsigned char)255);
                            arr_32 [(short)0] [i_4] [i_5] [i_6 - 2] [(short)0] = ((/* implicit */unsigned int) (signed char)70);
                            arr_33 [i_3] [i_3] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-83))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_36 [i_3] [i_3] [i_4] [i_3] [i_3] [i_6] [i_8] = ((/* implicit */signed char) ((int) var_4));
                            arr_37 [i_3] [(unsigned char)7] [i_4] [i_5] [i_6 + 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_28 [i_6 - 2] [i_6 - 2] [i_6 - 1])) : (2147483647)));
                            arr_38 [i_3] [i_4] [i_5] [i_5] [i_6 - 1] [(unsigned short)15] [i_4] = ((/* implicit */long long int) (signed char)51);
                            arr_39 [i_3] [6U] [i_5] [i_5] [i_3] [6U] [6U] = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_20 [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_6 + 1])));
                            arr_40 [i_3] [i_3] [i_5] [i_6] [13] = ((/* implicit */unsigned short) ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13)))));
                        }
                        for (unsigned short i_9 = 3; i_9 < 17; i_9 += 2) 
                        {
                            arr_43 [i_5] [i_9] [i_9] [i_5] [i_9] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_24 [i_6 + 1] [i_9 - 3] [i_6 + 1] [i_6 - 2] [i_5])));
                            arr_44 [i_3] [i_6] [i_6] [i_6] &= ((/* implicit */signed char) var_0);
                            arr_45 [i_3] [i_9] [i_9 + 4] [i_6 - 2] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) 2147483635)) ^ (arr_29 [i_3] [i_6 - 1] [i_6 + 1] [i_9 + 3])));
                        }
                        arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_14);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_49 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) var_14);
                        arr_50 [i_3] [(unsigned char)8] [i_3] [i_10] [i_10] = ((/* implicit */unsigned int) var_15);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 2) 
                        {
                            arr_53 [i_3] [i_3] [i_5] [i_3] [i_11 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((3201296547017161538LL) >> (((2147483635) - (2147483580))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            arr_54 [i_5] [i_11] [i_5] = ((/* implicit */short) max((arr_51 [i_3] [i_11] [i_10]), (((/* implicit */int) var_10))));
                            arr_55 [i_3] [i_11] = ((/* implicit */unsigned short) ((short) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 11252124247546429742ULL)))) ? (arr_20 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
                            arr_56 [i_11] [(_Bool)1] [i_5] = ((/* implicit */signed char) var_6);
                            arr_57 [i_3] [i_3] [i_5] [i_3] [i_10] [i_11 + 2] = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 + 2])))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            arr_60 [i_3] [i_4] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                            arr_61 [i_3] [i_3] [i_5] [i_10] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) var_10))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_11)) : (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-82)) % (-1524586467)))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)871)), (((((/* implicit */_Bool) var_3)) ? (arr_35 [i_3] [i_3] [i_5] [i_10] [i_10] [i_12]) : (((/* implicit */int) (unsigned char)255)))))))));
                            arr_62 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_4);
                        }
                    }
                    arr_63 [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) var_7);
    var_17 = ((/* implicit */unsigned char) var_11);
}
