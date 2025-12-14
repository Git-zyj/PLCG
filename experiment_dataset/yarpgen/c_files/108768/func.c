/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108768
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
    var_16 += ((/* implicit */unsigned long long int) max(((+(3680168725U))), (((/* implicit */unsigned int) var_5))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_9))), (min(((-(614798570U))), (max((var_12), (3680168723U)))))));
                        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (_Bool)0))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) 614798570U);
    }
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(var_4)))) >= (((((/* implicit */_Bool) var_12)) ? (var_9) : (var_9)))))), (((3680168707U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)1934)))))));
}
