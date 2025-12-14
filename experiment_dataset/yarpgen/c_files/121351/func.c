/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121351
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (0))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1 + 3] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_14))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_16)), (arr_6 [i_0 + 1] [i_1 - 2] [i_2])))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)56)), (var_15)))) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)21)) ? (var_4) : (var_0)))), (max((((/* implicit */unsigned long long int) var_14)), (var_12)))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (max((var_10), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1] [i_2])) ? (var_3) : (-1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-21)), (var_4)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (int i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (short i_7 = 1; i_7 < 10; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4 - 1]))))) ? (var_10) : (var_10)));
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((var_0) >= (max((var_4), (((/* implicit */int) (signed char)-62)))))))));
                                arr_24 [i_6] [i_6] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */signed char) var_12);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_16 [i_4] [i_4]))) ? (((/* implicit */int) (short)15784)) : (((arr_10 [i_4 + 1] [i_5]) ? (((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 1])) : (((/* implicit */int) arr_10 [i_4 - 1] [i_5]))))));
                    arr_25 [(signed char)2] [i_4] [i_4 + 1] [i_4] = ((/* implicit */short) max((((((/* implicit */int) max(((signed char)-22), ((signed char)11)))) << (((/* implicit */int) (_Bool)1)))), ((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-21))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 2) 
                    {
                        for (signed char i_9 = 4; i_9 < 7; i_9 += 4) 
                        {
                            {
                                arr_31 [i_4] [i_5] [i_8] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) arr_28 [i_4]))));
                                var_25 &= ((/* implicit */unsigned long long int) ((((int) (!(arr_16 [i_9] [(short)10])))) >> (((/* implicit */int) var_16))));
                                arr_32 [i_8] [i_4] [i_4] = ((/* implicit */unsigned char) max((((var_2) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (-1))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_2 [i_3]), (((/* implicit */short) arr_1 [i_4 - 1] [(_Bool)1]))))))))));
                                arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_4] [i_3] = var_7;
                                arr_34 [i_3] [i_4] [(short)5] [i_9 + 3] = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_26 = (short)29249;
                        arr_38 [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_5))));
                        var_27 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) var_15)))));
                        arr_39 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */int) var_2))))) ? (arr_17 [i_3] [i_3] [i_3] [i_4]) : (var_12)));
                    }
                    for (int i_11 = 1; i_11 < 8; i_11 += 1) 
                    {
                        arr_42 [i_3] [i_4] [i_5] [i_4] [i_5] [i_11] = max(((~(((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_16))))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_3] [i_3] [(short)3] [i_4] [i_11])) && (((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)))))))));
                        arr_43 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */short) var_17);
                        var_28 &= var_14;
                        arr_44 [i_4] [i_4 + 1] [i_5] [i_5] [i_11 + 3] [i_4 + 1] = ((/* implicit */signed char) var_9);
                        var_29 += ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) arr_1 [i_5] [i_11])) | (((/* implicit */int) arr_30 [i_3] [i_3] [i_5] [i_11])))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)245)), ((short)-29250)))))) | (((/* implicit */int) arr_27 [i_3] [i_5] [i_3] [i_4 + 1] [i_3]))));
                    }
                }
            } 
        } 
    } 
    var_30 = max((var_12), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-34)) == (var_4))))))));
}
