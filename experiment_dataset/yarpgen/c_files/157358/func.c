/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157358
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
    var_17 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_10))));
                                arr_14 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) var_14);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_17 [i_0] [0ULL] [i_0] [i_0] [i_0] [i_0] |= var_0;
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 4; i_6 < 9; i_6 += 3) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [(_Bool)1] = max((min((arr_11 [i_6 - 2] [i_6 - 2] [8LL] [i_5] [10ULL] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_6 - 3] [i_1] [i_6 - 2] [i_1] [i_6 - 4])))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)136)), (arr_1 [i_6 - 2])))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_6 - 2])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_3 [4U]))) : (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) ((unsigned short) (unsigned char)119)))));
                        }
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_20 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) var_14))))), (3554312830288852861LL)));
                        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (-3554312830288852862LL)));
                        var_22 ^= ((/* implicit */long long int) (-(((/* implicit */int) min((var_9), (((/* implicit */short) (_Bool)1)))))));
                        arr_23 [i_1] [(signed char)2] [i_1] [i_1] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (arr_11 [i_0] [i_1] [i_2] [i_7] [i_2] [i_0] [i_0]) : (arr_11 [i_0] [(unsigned short)8] [11LL] [i_7] [(short)7] [i_0] [i_7]))));
                    }
                    arr_24 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
                }
                arr_25 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(-3554312830288852844LL)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) -140737488355328LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
