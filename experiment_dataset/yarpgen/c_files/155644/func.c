/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155644
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
    var_20 = ((/* implicit */int) 809378649U);
    var_21 = ((/* implicit */long long int) var_8);
    var_22 = ((/* implicit */int) (-(max((((/* implicit */long long int) ((int) (short)-13387))), (((((/* implicit */_Bool) 3485588651U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58319))) : (-2026950569094330806LL)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 536870656)), (809378633U)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 3]))) : (11192251722826089587ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3485588662U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1 - 3])))))));
                var_23 = ((/* implicit */long long int) max((max((var_17), (((/* implicit */unsigned int) (unsigned short)9086)))), (((/* implicit */unsigned int) arr_4 [i_1 + 1] [i_1] [i_1]))));
                var_24 = ((/* implicit */unsigned int) (_Bool)0);
                var_25 = ((long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 1] [5ULL])) || (((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_1 - 1]))));
                var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) var_1)), (min((-2701338), (((/* implicit */int) arr_1 [i_0]))))))), (((((/* implicit */_Bool) 809378649U)) ? (arr_0 [i_0] [i_1 + 1]) : (((/* implicit */unsigned int) ((int) arr_3 [i_0])))))));
            }
        } 
    } 
}
