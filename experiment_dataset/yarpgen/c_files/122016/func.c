/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122016
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)32)) ? (4981438390185966608LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50)))));
    var_21 = var_15;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */long long int) ((signed char) ((((arr_3 [i_0]) | (-1LL))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4195077441011516211LL)))))))));
                var_23 = ((/* implicit */long long int) max((((/* implicit */int) ((max((arr_5 [i_0 + 1] [i_1]), (arr_5 [i_0] [i_0]))) <= (max((-657660024), (((/* implicit */int) (unsigned short)53645))))))), (min((((/* implicit */int) arr_2 [i_0 + 1])), (((((/* implicit */int) (unsigned char)208)) / (((/* implicit */int) (unsigned char)177))))))));
            }
        } 
    } 
}
