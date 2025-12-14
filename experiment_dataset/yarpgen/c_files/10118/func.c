/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10118
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
    var_17 += ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_18 ^= arr_5 [i_2] [i_2 + 1] [i_0] [2ULL];
                    var_19 = ((/* implicit */signed char) arr_2 [i_2] [i_1]);
                }
                for (int i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) var_16);
                                var_21 = ((/* implicit */long long int) min((min((min((((/* implicit */unsigned long long int) var_15)), (arr_0 [i_1] [12]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (arr_13 [i_3] [i_3] [i_3])))))), (((/* implicit */unsigned long long int) arr_7 [i_3]))));
                                var_22 *= ((/* implicit */_Bool) arr_14 [6ULL] [i_4 + 1] [i_5 + 1] [i_0] [i_4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_12 [i_1] [i_6] [8U] [i_1]))));
                                arr_20 [i_0] [16] [i_3] [i_6 + 1] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */long long int) var_5)), (arr_5 [i_7] [i_3] [i_3] [i_0]))))), (min((((/* implicit */unsigned long long int) arr_15 [i_3])), (max((var_2), (((/* implicit */unsigned long long int) arr_12 [i_3] [i_1] [i_6] [i_7]))))))));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_1] = ((/* implicit */unsigned int) arr_16 [(signed char)6] [i_3 - 2] [i_3] [12LL] [i_3]);
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0]);
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((unsigned int) var_16)))));
                    arr_26 [(unsigned char)0] [i_1] = ((/* implicit */signed char) arr_8 [i_8 + 1] [i_8 + 1]);
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        for (signed char i_10 = 3; i_10 < 18; i_10 += 3) 
                        {
                            {
                                var_26 *= ((/* implicit */unsigned int) ((long long int) var_16));
                                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_12))));
                                var_28 -= ((/* implicit */_Bool) arr_24 [i_0] [i_8 + 1] [i_10 + 1] [9ULL]);
                            }
                        } 
                    } 
                    arr_31 [i_0] = ((/* implicit */unsigned char) var_3);
                }
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    arr_34 [i_11] [i_1] [i_1] [i_11] = ((/* implicit */unsigned short) var_9);
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        var_29 += ((/* implicit */signed char) arr_18 [(signed char)14] [i_0] [i_0] [i_0]);
                        var_30 ^= ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned long long int) arr_8 [i_1] [i_12])), (arr_19 [i_1]))));
                        arr_37 [i_0] [i_1] [i_11] [i_12] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) max((arr_12 [i_1] [i_11] [i_1] [i_1]), (((/* implicit */int) arr_22 [i_0]))))), (var_11)))));
                    }
                    arr_38 [13] [i_11] [13U] = ((/* implicit */unsigned short) min((arr_23 [i_0] [i_1] [i_11] [i_11]), (((/* implicit */int) ((signed char) arr_12 [i_0] [i_1] [i_11] [i_11])))));
                    arr_39 [i_0] [i_1] [i_11] [(unsigned char)18] |= ((/* implicit */unsigned long long int) max((((/* implicit */short) arr_33 [(_Bool)1])), (var_1)));
                }
                var_31 -= ((/* implicit */_Bool) var_13);
                arr_40 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_32 |= ((/* implicit */unsigned char) var_7);
    var_33 = ((/* implicit */_Bool) min((max((var_0), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned char) var_7))))))), (min((var_11), (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned int) var_5)))))))));
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        for (unsigned char i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            for (long long int i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) ((int) ((signed char) var_0)));
                    arr_49 [i_13] [(unsigned char)2] [i_14] [i_15] = ((_Bool) max((arr_46 [i_13] [i_14] [i_14] [i_13]), (arr_46 [i_15] [i_14] [i_13] [i_13])));
                    var_35 = ((/* implicit */unsigned short) min((max((11445873572955907554ULL), (((/* implicit */unsigned long long int) arr_41 [i_13] [i_13])))), (((/* implicit */unsigned long long int) ((signed char) arr_41 [i_13] [i_15])))));
                }
            } 
        } 
    } 
}
