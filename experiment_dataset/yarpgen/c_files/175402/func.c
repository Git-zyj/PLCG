/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175402
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_10))))) | (((var_5) & (((/* implicit */long long int) var_9))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_11 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_2])) ^ (((((/* implicit */int) var_6)) * (((/* implicit */int) arr_3 [i_0]))))));
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2] [(signed char)5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1 + 1] [i_2] [i_3]))) : (var_7)));
                        var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3] [i_0] [i_1 - 1] [i_0])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)2] [i_3]))) + (var_1))) : (var_5)));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                        {
                            {
                                arr_17 [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((arr_9 [(signed char)19] [i_1] [(unsigned char)10] [(signed char)19] [i_5 + 1] [i_5]) & (((/* implicit */int) arr_13 [i_5] [i_5 + 2] [4ULL] [i_1] [i_5 + 1]))));
                                arr_18 [i_0] [(signed char)2] [i_2] [i_1] [(signed char)2] = ((/* implicit */long long int) arr_14 [i_0] [i_1 + 1] [i_0] [i_0] [i_1] [i_0] [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
