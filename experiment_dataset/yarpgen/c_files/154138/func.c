/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154138
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
    var_11 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1 - 2]))) : (1391184427U)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_0] [i_1]), (arr_6 [i_0] [i_0]))))) : (((((/* implicit */_Bool) 1391184427U)) ? (((/* implicit */long long int) 2903782868U)) : (var_4)))));
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) 2903782868U)) ? (5887282513951783250LL) : (((/* implicit */long long int) 1391184427U))))));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */short) var_9);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 4258177494U)) : (((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */long long int) 4258177494U)), (1804290045299191030LL))) : (((((/* implicit */_Bool) 36789802U)) ? (5585690623050359301LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28941)))))))));
}
