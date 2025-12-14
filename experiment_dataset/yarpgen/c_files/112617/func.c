/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112617
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(short)1] &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (max((arr_2 [13U] [13U]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                var_13 = ((/* implicit */short) (-(((/* implicit */int) max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0 + 1]))))));
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (_Bool)1))));
                arr_6 [i_0] [i_0] [i_1] = min((((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0 + 1]))), (((/* implicit */unsigned long long int) (-(1575614179U)))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    arr_14 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_11 [i_2] [i_3] [i_4]);
                    arr_15 [i_2] [i_2] = ((((/* implicit */_Bool) arr_10 [i_2] [(_Bool)1])) ? (max((arr_8 [i_2]), (((/* implicit */unsigned long long int) 1897350846U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_4]))));
                }
            } 
        } 
    } 
}
