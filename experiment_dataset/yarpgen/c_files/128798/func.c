/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128798
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1 - 1] [i_1] = max((max((arr_5 [i_1] [i_2 + 2] [i_2 + 2] [i_1]), (((/* implicit */unsigned char) arr_8 [i_2 - 1] [i_1 - 1] [i_0 - 1] [(unsigned char)19])))), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) > (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) arr_8 [i_0 - 1] [i_1] [(short)0] [i_2])))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 += ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) max((var_0), (var_9)))))));
                        arr_14 [i_2] [i_2] [i_1] [(unsigned char)15] = ((/* implicit */unsigned long long int) (~(max(((~(((/* implicit */int) arr_4 [i_2])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)0))))))));
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0 + 2])), (((var_11) / (((/* implicit */unsigned long long int) var_14))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_3 [i_1] [(short)16]))))) < (((((/* implicit */_Bool) arr_6 [(short)14] [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) : ((-(((/* implicit */int) max((arr_13 [i_1]), (var_12))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) (((~(((/* implicit */int) var_7)))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2 + 1] [i_1] [i_1] [i_1 - 1])))))));
                        var_18 = ((/* implicit */unsigned char) max((var_18), ((unsigned char)255)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 2; i_5 < 19; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 + 2] [i_1 - 1])) << (((((/* implicit */int) var_10)) - (58))))))));
                            arr_20 [i_1] [i_4] [i_2] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1] [i_1]))));
                            arr_21 [i_5] [i_1] [i_2 + 1] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_13 [i_1])) < (((/* implicit */int) arr_13 [i_1])))));
                        }
                        var_20 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [14U] [(_Bool)1])) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) arr_13 [(_Bool)1]))))) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) (_Bool)0))))))) ^ ((+((~(((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [(short)18]))))))));
                        arr_22 [(unsigned char)7] [i_1] [i_1] [3ULL] = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)127))))))), (min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_15)), (var_6)))), (max((var_14), (((/* implicit */unsigned int) var_12))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned int) arr_0 [i_0]);
                                arr_28 [i_7] [i_1] [i_0 + 1] [i_1] [i_1] [i_0 + 1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
                                arr_29 [i_0] [i_2 - 1] [i_1] [i_7] = ((/* implicit */signed char) var_6);
                                arr_30 [i_1] = ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)0))))) : (var_4)))));
                                var_22 += ((/* implicit */_Bool) (-((+(min((arr_12 [i_7] [i_7] [(short)16] [i_7]), (((/* implicit */unsigned int) arr_1 [i_6]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_8 = 3; i_8 < 17; i_8 += 4) 
                    {
                        var_23 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_0])) << (((/* implicit */int) ((unsigned char) (_Bool)0))))) - (((/* implicit */int) arr_27 [16U] [i_8] [i_2] [i_1 - 1] [16U]))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))) == (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_16 [i_0] [i_1 - 1] [i_2 + 1] [i_8])) : (((/* implicit */int) arr_3 [2ULL] [2ULL]))))))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_37 [i_1] [i_9] [i_2 + 2] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_34 [i_2 + 3] [i_2] [i_2 - 1] [i_1])) ^ (((((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0 + 2] [11ULL])) ^ (((/* implicit */int) arr_23 [i_1] [i_2] [i_1] [i_1])))))), (((/* implicit */int) min((((/* implicit */short) ((signed char) arr_11 [i_1]))), (min((arr_27 [i_1] [i_2 + 2] [i_2] [i_2] [i_2]), (((/* implicit */short) (signed char)-88)))))))));
                        arr_38 [i_1] [i_1] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) arr_23 [i_1] [i_1] [i_9] [i_9]))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_9]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)16155))) * (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_12 [i_0] [i_1] [i_1] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))))))) ? ((~(max((((/* implicit */unsigned long long int) arr_26 [i_9] [i_9] [i_1] [i_1] [i_1] [i_0])), (11796350812078774018ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) var_3)))) >= (((/* implicit */int) (_Bool)0))))))));
                    }
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_26 *= ((/* implicit */signed char) 4294967295U);
                        arr_41 [i_2 - 1] [i_1] = ((/* implicit */unsigned int) max((arr_7 [i_0] [(_Bool)0] [i_2] [i_10]), (((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_2)))) > ((~(((/* implicit */int) var_6)))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_45 [i_11] [i_11] [i_1] [i_11] = max(((((-(2177583556U))) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [(_Bool)0] [i_1] [i_2] [i_1]))))))), (((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) < (arr_39 [i_0] [8ULL] [8ULL] [i_0] [i_2 + 1] [i_11])))))));
                        arr_46 [i_1] [i_1 - 1] [i_2] [i_11] = ((/* implicit */unsigned long long int) arr_23 [i_1] [i_1] [i_1] [i_1]);
                    }
                    arr_47 [i_1] [i_1] = (!(((min((arr_35 [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_2]), (((/* implicit */unsigned long long int) var_10)))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))));
                }
            } 
        } 
    } 
    var_27 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_6))));
    var_28 = ((/* implicit */unsigned char) var_15);
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((signed char) (signed char)-88)))));
}
