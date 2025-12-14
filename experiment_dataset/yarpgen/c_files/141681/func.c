/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141681
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
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [6LL] [i_2] = (+(((/* implicit */int) (((~((-2147483647 - 1)))) > (2147483647)))));
                    arr_10 [i_0] [(short)1] [i_1] [(short)1] = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_17 = arr_11 [i_0] [i_2 + 2] [i_2 + 2];
                                var_18 = max((((((/* implicit */int) arr_13 [i_0] [i_0] [i_2 + 1] [i_0])) / ((-(1266649389))))), (266338304));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2])) ? (arr_12 [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 2]) : (arr_12 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2] [i_2] [i_2])))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) > (max((var_14), (arr_14 [i_1] [i_0])))))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_12 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (((/* implicit */long long int) var_9)))))) ? (var_0) : (((((/* implicit */long long int) max((var_9), (arr_14 [i_1] [i_2])))) & (var_2)))));
                }
            } 
        } 
    } 
}
