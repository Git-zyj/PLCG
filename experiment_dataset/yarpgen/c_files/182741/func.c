/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182741
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) 0U)) : (((long long int) 6298679036213025970ULL))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (short)-25812))))) / (((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */long long int) 1083934979U))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [(unsigned short)13]))) : (11U)))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
    }
    var_17 = ((/* implicit */int) var_10);
}
