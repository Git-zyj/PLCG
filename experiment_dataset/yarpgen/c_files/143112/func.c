/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143112
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
    var_17 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_5 [i_1] [i_1 - 2] [i_0]);
                arr_6 [(signed char)17] = ((/* implicit */signed char) arr_0 [(unsigned short)14]);
                var_19 = ((/* implicit */_Bool) arr_3 [(unsigned short)8] [i_1 - 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)0)), (-6053931456295386078LL)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    var_21 = ((/* implicit */signed char) arr_12 [i_3] [i_3] [i_3]);
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        arr_18 [i_3] = ((/* implicit */_Bool) ((unsigned char) arr_16 [i_4]));
                        arr_19 [(_Bool)0] [(_Bool)1] [i_3] [i_4] [(unsigned char)17] [i_5] = ((/* implicit */unsigned short) ((signed char) (_Bool)0));
                    }
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_22 = arr_22 [i_2] [(signed char)15] [i_3] [(unsigned char)19];
                        arr_24 [(unsigned char)11] [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */_Bool) ((signed char) arr_13 [i_2] [(signed char)7]));
                        var_23 = ((/* implicit */_Bool) max((var_23), (arr_22 [i_2] [i_2] [i_2] [i_7])));
                    }
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        arr_28 [i_3] = arr_16 [i_2];
                        arr_29 [i_3] [i_3] [i_6] [i_8] = ((/* implicit */long long int) arr_15 [i_3] [(unsigned short)6] [i_3]);
                    }
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        arr_32 [i_3] [i_6] [(_Bool)1] [i_3] = ((/* implicit */_Bool) ((unsigned short) arr_23 [i_2] [i_3] [i_6] [i_3]));
                        arr_33 [i_3] [i_6] [i_3] [i_3] [i_3] = arr_13 [i_3] [i_3];
                    }
                    arr_34 [i_3] [i_3] [i_3] = ((/* implicit */signed char) arr_12 [i_3] [(unsigned short)3] [i_6]);
                    var_24 = ((/* implicit */long long int) arr_26 [22LL]);
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            {
                                var_26 = ((unsigned char) arr_14 [(_Bool)1] [(_Bool)1]);
                                var_27 ^= ((/* implicit */long long int) arr_38 [20LL] [(unsigned char)20] [i_3] [i_6] [(_Bool)1] [i_11]);
                                arr_39 [i_11] [i_11] [i_11] [i_3] [i_11] = ((/* implicit */long long int) arr_14 [(unsigned short)3] [i_3]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
