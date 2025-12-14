/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104342
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) arr_5 [(short)3] [i_1] [(short)3] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) arr_3 [(signed char)5]);
                                arr_13 [(unsigned char)16] [i_1 + 2] [i_1 + 2] [i_3] [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) arr_5 [i_2] [6U] [i_2] [i_2]);
                                arr_14 [i_4] [i_2] [(unsigned char)10] [i_2] [(unsigned char)10] [i_2] [i_0] = ((/* implicit */short) arr_0 [(signed char)15]);
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */unsigned long long int) arr_11 [i_2] [i_0] [i_1] [i_0] [i_0]);
                }
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_6] [3ULL] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_5 [i_6] [i_5] [i_1] [i_0])), (max((arr_18 [i_0] [i_0] [i_6] [13ULL] [i_6]), (((/* implicit */unsigned int) arr_10 [i_6] [i_7]))))));
                                arr_25 [i_0] [i_0] [(unsigned char)3] [15U] [10LL] [i_6] = ((/* implicit */unsigned int) ((short) ((short) arr_18 [i_0] [i_0] [i_5] [i_6] [i_7])));
                            }
                        } 
                    } 
                } 
                var_20 = min((min((max((arr_22 [i_0] [12U] [i_0] [i_1] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_3 [11LL])))), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_1]))))), (arr_21 [i_0] [i_1] [i_1] [i_1 + 4] [i_1]));
                /* LoopSeq 2 */
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (arr_22 [8ULL] [(unsigned short)0] [i_1] [i_1] [8ULL] [i_0])));
                    arr_29 [i_8] [i_1] [i_1] [1ULL] = ((/* implicit */unsigned char) ((unsigned int) arr_8 [i_0] [i_1 + 1] [i_0] [i_0] [(unsigned short)3]));
                    arr_30 [i_0] [i_1] [(signed char)1] [i_8] = ((/* implicit */short) ((unsigned int) max((((/* implicit */unsigned char) arr_9 [i_8] [i_1 + 1] [i_1] [i_1] [10ULL])), (arr_19 [i_1] [i_1 - 2] [i_1 - 2] [(unsigned short)2] [i_1]))));
                }
                for (unsigned int i_9 = 4; i_9 < 15; i_9 += 4) 
                {
                    arr_33 [4ULL] [4ULL] [i_9] = ((/* implicit */short) arr_8 [(short)18] [i_9] [i_1] [(short)12] [(short)18]);
                    var_22 -= ((/* implicit */_Bool) arr_23 [i_9 + 4] [i_9 + 2] [i_1] [i_1] [i_0]);
                }
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_5);
}
