/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170945
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 *= ((/* implicit */unsigned int) (_Bool)1);
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */int) arr_2 [i_1]);
                    var_12 *= ((/* implicit */short) (_Bool)1);
                    arr_8 [i_0] [i_0] [(unsigned char)10] [i_2] |= (_Bool)1;
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_1]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            arr_13 [i_0] [4LL] |= ((/* implicit */int) ((((arr_10 [i_3]) << (((((/* implicit */int) (_Bool)1)) - (1))))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_26 [i_5] [i_0] [i_0] = ((/* implicit */int) arr_23 [i_0] [i_3] [i_4] [i_5] [i_5]);
                            var_13 &= ((/* implicit */unsigned short) arr_4 [i_0] [i_3]);
                        }
                    } 
                } 
                var_14 = ((/* implicit */int) arr_25 [i_4]);
                arr_27 [i_3] [i_0] [i_3] [i_0] = arr_23 [3ULL] [i_3] [i_3] [i_3] [i_3];
                arr_28 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((((arr_6 [i_3] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4]))))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            }
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
            {
                arr_32 [i_0] = ((/* implicit */unsigned short) arr_17 [i_7] [i_3] [i_0] [i_0]);
                arr_33 [i_7] [i_7] = ((/* implicit */int) arr_6 [i_0] [i_0]);
            }
            for (unsigned short i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
            {
                arr_37 [i_0] [i_0] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((((/* implicit */int) arr_22 [i_8] [1LL] [i_8] [i_3] [i_3] [i_3])) << (((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_10 = 4; i_10 < 13; i_10 += 2) 
                    {
                        arr_45 [i_8] [i_8] [i_9] [i_9] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_30 [i_0] [i_8] [i_3] [i_8])) - (arr_43 [i_0] [i_10] [9] [i_9] [i_10 + 1] [i_3] [i_10])));
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_42 [i_0] [0ULL] [i_9]))));
                        arr_46 [(unsigned short)0] [i_8] [i_10 + 2] = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_3]);
                        var_16 = ((/* implicit */_Bool) arr_14 [(unsigned short)5] [i_9] [(_Bool)1] [i_0]);
                    }
                    for (signed char i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        arr_50 [i_0] [i_3] [i_8] [i_9] [i_9] [i_11] = ((/* implicit */unsigned short) (_Bool)1);
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_24 [i_8] [i_9] [(signed char)14]))));
                        arr_51 [i_0] [i_3] [i_0] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0])) * (arr_47 [(unsigned short)10] [1ULL] [1ULL] [i_9] [i_9]))) - (((/* implicit */int) arr_49 [i_0] [i_3] [i_8] [i_9] [i_11]))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_11])) % (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_3] [5ULL] [i_0])) == (((/* implicit */int) arr_12 [i_0] [i_3] [i_0]))))))))));
                    }
                    var_19 = ((/* implicit */_Bool) arr_10 [1LL]);
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_43 [i_0] [i_0] [i_0] [i_3] [11U] [i_8] [i_8]))));
                }
                var_21 += ((/* implicit */unsigned short) arr_34 [0ULL]);
            }
        }
    }
    for (signed char i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) arr_18 [i_12] [(_Bool)1] [i_12] [i_13] [i_13])) == (((/* implicit */int) arr_22 [i_13] [i_13] [(unsigned short)13] [i_13] [i_12] [i_13])))))));
            var_23 = ((/* implicit */int) max((var_23), (arr_34 [i_12])));
            var_24 *= ((/* implicit */unsigned short) (_Bool)1);
            var_25 = arr_18 [i_12] [i_13] [i_12] [i_13] [i_12];
        }
        arr_57 [i_12] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (((arr_44 [14] [i_12]) - (((/* implicit */unsigned long long int) arr_15 [i_12] [i_12] [i_12] [i_12])))))));
        arr_58 [i_12] |= ((/* implicit */int) ((arr_41 [i_12]) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))));
    }
    var_26 = ((/* implicit */short) ((((((/* implicit */int) var_3)) % (((/* implicit */int) var_1)))) / (((/* implicit */int) (_Bool)1))));
}
