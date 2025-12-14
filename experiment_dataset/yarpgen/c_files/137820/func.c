/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137820
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
    var_10 = var_5;
    var_11 = min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_0)))), (max((((var_0) >> (((((/* implicit */int) var_6)) - (218))))), (max((var_7), (((/* implicit */unsigned long long int) var_1)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [(unsigned char)12])) % (max((arr_0 [i_0]), (arr_0 [i_0])))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_12 -= ((arr_6 [i_1 - 1]) / (arr_6 [i_1 - 1]));
            var_13 -= ((/* implicit */signed char) arr_1 [i_1 + 1] [i_1 - 1]);
            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1] [i_1]))));
        }
        for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_8 [i_2] [i_3] [i_4])), (arr_7 [i_0] [(signed char)13]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))));
                        var_16 = ((/* implicit */int) min((max((var_0), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_9), (((/* implicit */unsigned char) arr_8 [i_0] [i_3] [i_0]))))) < (arr_0 [i_4 - 1]))))));
                    }
                } 
            } 
            var_17 = ((max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_0] [i_0])), (arr_6 [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(unsigned short)14] [i_2] [i_2]))));
        }
        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            arr_15 [i_5 + 2] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))), (((arr_14 [i_5 + 2]) * (arr_14 [i_5 + 2])))));
            arr_16 [i_0] [i_5] = ((/* implicit */long long int) min((arr_8 [i_0] [i_5] [i_5 + 2]), (arr_8 [18ULL] [2] [i_5])));
            arr_17 [i_0] = ((/* implicit */signed char) ((min((arr_3 [i_5 + 2] [i_5]), (var_7))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_5 + 1] [i_5 - 1]), (arr_10 [i_5 + 2] [i_5 + 1])))))));
            arr_18 [i_0] [i_5] [i_5] = ((/* implicit */int) var_7);
        }
        for (unsigned char i_6 = 3; i_6 < 16; i_6 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) arr_6 [i_6 + 1]);
            var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_6] [(_Bool)1])), (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0]))) + (arr_14 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6 + 2] [i_6 - 1])))))));
            arr_23 [5ULL] [5ULL] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6 + 2] [i_6 - 1]))) % (var_5)))), (min((var_0), (arr_3 [i_6 - 2] [i_6 - 2])))));
        }
        arr_24 [i_0] = ((/* implicit */unsigned long long int) var_3);
    }
    for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        var_20 = ((/* implicit */long long int) var_0);
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (unsigned char i_9 = 1; i_9 < 23; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */unsigned char) min((max((arr_38 [i_11] [18ULL] [i_9] [18ULL] [i_7]), (arr_31 [i_7] [i_7] [i_7]))), (((/* implicit */unsigned long long int) ((var_7) != (arr_27 [i_9] [(unsigned char)12]))))));
                                var_22 = ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                    arr_39 [i_9] [i_8] [i_9] = ((/* implicit */_Bool) ((arr_38 [i_7] [(unsigned char)11] [i_7] [i_7] [i_7]) - (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_26 [i_8])), (arr_25 [i_9])))) + (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    }
    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) 
        {
            var_23 += ((/* implicit */unsigned long long int) arr_29 [i_12] [i_13] [i_13]);
            var_24 = ((/* implicit */unsigned short) arr_2 [i_12]);
            arr_44 [i_12] [i_12] = min((arr_6 [i_13]), (arr_12 [i_13] [i_13] [i_13] [i_13] [i_12] [i_12]));
        }
        for (int i_14 = 0; i_14 < 18; i_14 += 3) 
        {
            var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((min((536870911U), (536870925U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_19 [i_12] [2U] [i_12]))))))))), (max((((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_12] [i_12] [i_12]))))), (min((((/* implicit */unsigned long long int) var_5)), (var_0)))))));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_19 [i_14] [i_12] [i_12]))));
            var_27 = arr_22 [i_12] [i_14];
            var_28 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)235)) == (((/* implicit */int) (unsigned char)208))))), (arr_11 [i_12] [i_14] [i_14] [i_12])));
            arr_47 [i_14] [8ULL] [i_14] = ((/* implicit */unsigned char) min((arr_11 [i_12] [i_12] [i_12] [i_14]), (((/* implicit */int) var_8))));
        }
        arr_48 [i_12] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_1)), (arr_42 [8U] [8U] [i_12])));
        arr_49 [i_12] = ((/* implicit */unsigned long long int) max((var_3), (var_3)));
    }
    var_29 = ((/* implicit */unsigned char) var_1);
}
