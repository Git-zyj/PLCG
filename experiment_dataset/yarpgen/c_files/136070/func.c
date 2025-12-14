/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136070
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
    var_11 = ((/* implicit */unsigned short) ((var_4) | (((/* implicit */long long int) (+((+(((/* implicit */int) var_8)))))))));
    var_12 = ((unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (~(((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 3])))))))));
                                var_14 = ((/* implicit */short) arr_5 [i_0] [i_0] [i_4]);
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_11 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_1])), (arr_3 [(signed char)18] [i_0 - 2] [i_0 - 1])))) != ((-(((/* implicit */int) arr_3 [i_0 - 3] [i_0 + 1] [i_0 - 3]))))));
                var_16 = ((/* implicit */long long int) min((min((arr_1 [i_0 - 3]), (arr_1 [i_0 + 1]))), (arr_1 [i_0 + 1])));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 19; i_5 += 1) 
                {
                    for (unsigned short i_6 = 3; i_6 < 17; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
                            {
                                var_17 &= ((/* implicit */short) max(((+(arr_10 [i_0 + 1] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 3] [i_1] [i_5] [i_6 - 1]))) <= ((~(arr_0 [i_1]))))))));
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (unsigned char)253)))))));
                            }
                            for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(arr_7 [16LL] [i_5 + 1] [i_5 - 2] [8ULL])))) != (min((arr_8 [i_6 + 1] [i_5 + 1] [i_5 - 2] [i_0 - 3] [i_0 - 3]), (((/* implicit */unsigned long long int) arr_7 [i_5] [i_5 + 1] [i_5 - 2] [i_5]))))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)19)))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_6 [i_1]))));
                                var_22 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_6 - 3])) - ((-(((/* implicit */int) arr_17 [i_0])))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_9 [i_6 - 3] [i_1] [i_5 - 1] [i_0]), (arr_9 [i_6 - 1] [i_6 - 1] [i_5 - 2] [i_6])))) & ((~(((/* implicit */int) arr_9 [i_6 - 1] [i_1] [i_5 - 1] [i_6]))))));
                            }
                            for (short i_9 = 4; i_9 < 19; i_9 += 3) 
                            {
                                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (((~(max((((/* implicit */unsigned long long int) arr_6 [i_1])), (arr_24 [i_0] [(short)15] [i_5]))))) != (((/* implicit */unsigned long long int) ((long long int) (-(arr_24 [(unsigned char)12] [(unsigned char)12] [i_0]))))))))));
                                var_25 = ((/* implicit */short) ((signed char) max((arr_21 [18ULL] [i_9 - 3] [i_9 - 4] [i_0] [i_9]), (arr_21 [15] [i_9 - 2] [i_9 + 1] [i_0] [1LL]))));
                                var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [(short)0] [(short)0] [i_5 - 1])), ((+(((/* implicit */int) arr_5 [19ULL] [i_0] [i_1]))))));
                                var_27 = ((/* implicit */unsigned int) (-(min(((-(arr_24 [(signed char)11] [7] [i_6]))), (((/* implicit */unsigned long long int) arr_9 [i_9 - 3] [5U] [i_9 - 4] [i_6 - 3]))))));
                            }
                            /* vectorizable */
                            for (short i_10 = 4; i_10 < 18; i_10 += 2) 
                            {
                                var_28 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [18LL]))));
                                var_29 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_18 [i_10] [i_10] [i_5] [i_1] [i_10] [4]))));
                            }
                            var_30 = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_1] [i_5] [(_Bool)0]))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) max((((/* implicit */long long int) min((arr_1 [(unsigned short)6]), (((/* implicit */short) arr_11 [i_0] [i_1] [i_0 - 3] [i_0]))))), (((long long int) arr_11 [i_0] [i_1] [i_0 - 1] [i_1]))));
            }
        } 
    } 
    var_32 &= ((/* implicit */unsigned long long int) var_4);
}
