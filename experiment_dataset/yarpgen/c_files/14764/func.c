/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14764
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
    var_18 = ((/* implicit */unsigned int) var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) var_16);
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)25636)), (arr_1 [i_1])))))) && (((11965464802745235203ULL) == (6481279270964316425ULL))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((int) (~(-8494454231842127987LL))));
                            arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) ((6481279270964316413ULL) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13646)) ? (928061336U) : (928061336U)))) && (((/* implicit */_Bool) (short)13646)))))));
                            arr_12 [i_0] [i_0] [i_1] [i_1] [(short)5] = ((short) ((((/* implicit */unsigned long long int) 3366905959U)) ^ (((((/* implicit */unsigned long long int) 928061336U)) ^ (6481279270964316413ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
}
