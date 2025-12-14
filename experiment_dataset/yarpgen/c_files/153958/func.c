/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153958
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) max((((/* implicit */int) max((arr_6 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */short) arr_2 [i_1]))))), ((~(((/* implicit */int) arr_2 [i_2]))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((_Bool) min((((/* implicit */short) (signed char)99)), (arr_6 [i_0] [(short)6] [i_2] [i_2])))))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(min((((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0])), (arr_5 [i_1] [i_1] [i_2] [i_1])))), (((((/* implicit */_Bool) arr_6 [i_2] [1LL] [1LL] [1LL])) ? (-5806103305154475059LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((((max((-982257319409543865LL), (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0] [i_0])))) + (9223372036854775807LL))) << (((max((arr_7 [i_0] [i_0] [i_0]), (var_10))) - (1463372679))))), (((/* implicit */long long int) min((2705568550U), (((/* implicit */unsigned int) 0))))))))));
    }
    var_24 = ((/* implicit */long long int) var_15);
    var_25 = var_12;
}
