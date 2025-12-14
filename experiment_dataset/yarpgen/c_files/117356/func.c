/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117356
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) -831881816);
                arr_7 [i_0] [i_0] = ((((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)23682))) + (arr_3 [i_0] [13LL])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))));
                arr_8 [i_0] [i_0] [(unsigned char)3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_4), (((/* implicit */short) (signed char)72))))) / (((arr_4 [13] [13] [13]) / (arr_4 [i_1] [i_1] [i_1]))))) == (((/* implicit */int) (signed char)108))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    arr_11 [i_0] [(unsigned char)10] [(unsigned char)10] [3LL] = ((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2]);
                    arr_12 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-109)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_1 [i_1])))) - (min((arr_2 [i_1] [i_2]), (((/* implicit */unsigned long long int) (signed char)-108))))))));
                    arr_13 [i_0] [i_0] [i_0] [10] = ((/* implicit */short) max((min((5877381988821461184LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])), (arr_10 [i_0] [i_1] [i_2] [15ULL])))))), (((/* implicit */long long int) (signed char)107))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_18 [i_3] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) var_5)), (arr_15 [i_3] [i_3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-109)))))));
                                arr_19 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) & (max((((/* implicit */unsigned int) var_11)), (arr_17 [i_0] [i_0] [(short)2] [(short)2] [i_0] [i_0]))))), (((/* implicit */unsigned int) arr_16 [i_3] [i_3]))));
                                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_3))));
                            }
                        } 
                    } 
                    arr_20 [i_1] &= (+(((/* implicit */int) arr_0 [13])));
                }
                arr_21 [11] [i_1 + 1] = ((max((((((/* implicit */long long int) var_0)) * (0LL))), (((((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [(signed char)11])) | (arr_15 [i_1] [i_1]))))) % (((/* implicit */long long int) ((int) (-(63U))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (signed char i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((arr_29 [4] [4] [4]) / (((/* implicit */unsigned int) (+(((/* implicit */int) min(((short)32746), (var_3)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((arr_2 [10ULL] [i_8]) - (((/* implicit */unsigned long long int) ((arr_31 [i_8] [i_8] [(short)1] [i_8]) / (((/* implicit */long long int) 157412755U))))))), (((/* implicit */unsigned long long int) max((((63U) | (arr_27 [i_5] [i_6] [i_7]))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_0 [i_5])))))))))))));
                                arr_35 [i_5] [i_5] [(short)5] [3U] [3U] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_9 [i_5] [1U] [0ULL] [i_5])) & (arr_5 [(short)7] [(short)7] [i_8])));
                                arr_36 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) arr_5 [i_7] [11LL] [(unsigned char)15]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
