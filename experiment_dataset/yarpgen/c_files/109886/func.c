/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109886
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
    var_13 = ((/* implicit */signed char) var_10);
    var_14 = ((/* implicit */signed char) max((var_14), (var_7)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(var_2))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0 + 2] [i_1 - 1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */int) var_3);
                                arr_13 [i_4] [(_Bool)1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_2 + 3] [i_2] [i_4] [i_4])) + (((/* implicit */int) arr_11 [i_0 + 2] [i_1 + 1] [(short)1] [i_2 + 3] [i_3] [17LL] [i_3]))));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned int) (+(arr_3 [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_17 ^= ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1] [i_0 - 1])) | (((/* implicit */int) arr_17 [i_6] [i_1 - 1] [i_2])));
                                var_18 = ((/* implicit */short) max((var_18), (arr_0 [i_2] [i_2])));
                                var_19 = ((/* implicit */int) (_Bool)0);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_2] [i_2]))));
                }
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) == (((/* implicit */int) var_5))));
                    var_22 = ((/* implicit */unsigned char) max((arr_18 [i_0 + 1] [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) ((_Bool) ((var_0) / (var_0)))))));
                    var_23 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) var_8)))))));
                    var_24 = ((/* implicit */_Bool) var_9);
                }
                for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    var_25 = ((/* implicit */short) (-((-(arr_9 [i_0 + 2] [i_0 + 2] [i_1] [10LL] [i_1 + 2])))));
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 4; i_9 < 15; i_9 += 1) 
                    {
                        var_26 = var_12;
                        arr_24 [i_9 - 2] = ((/* implicit */signed char) (~(arr_16 [14LL] [14LL] [i_8] [i_1] [14LL] [14LL])));
                    }
                    for (short i_10 = 2; i_10 < 16; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_8 [i_10] [i_10 - 2] [(signed char)2] [i_10] [i_10]))));
                        var_28 = ((/* implicit */short) (+((-(((/* implicit */int) var_12))))));
                    }
                    for (short i_11 = 3; i_11 < 16; i_11 += 4) 
                    {
                        arr_29 [(short)15] = ((/* implicit */short) var_11);
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_1 + 1] [i_1]))));
                        var_29 = ((/* implicit */unsigned int) arr_3 [i_0 + 1]);
                        var_30 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) arr_8 [0] [i_1] [i_8] [i_0 - 1] [4ULL])), (var_0))), (((/* implicit */unsigned long long int) ((_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_11 - 1] [(short)1] [i_11] [i_11 - 2] [i_11 - 3])))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) var_6);
                    var_32 = ((/* implicit */unsigned char) min((max((arr_6 [10LL] [i_1 + 1] [i_8] [(_Bool)0]), (((/* implicit */long long int) arr_4 [i_0] [i_1 + 2] [i_8])))), (((/* implicit */long long int) max((arr_4 [i_0 + 2] [i_1 + 2] [3LL]), (((/* implicit */unsigned char) arr_15 [i_8] [i_8] [i_1 + 2] [i_1] [i_1 - 1] [i_0 - 1])))))));
                }
                for (unsigned int i_12 = 1; i_12 < 17; i_12 += 1) 
                {
                    var_33 = ((/* implicit */_Bool) var_10);
                    arr_33 [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) max(((+(arr_22 [(_Bool)0] [(_Bool)0] [i_12]))), (((/* implicit */long long int) var_7)))))));
                }
                var_34 = ((/* implicit */short) arr_5 [(_Bool)1] [(_Bool)1] [i_1 + 2]);
            }
        } 
    } 
}
