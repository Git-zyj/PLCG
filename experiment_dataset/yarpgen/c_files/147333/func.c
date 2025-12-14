/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147333
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
    var_19 = ((unsigned long long int) min((var_18), (((var_13) << (((var_13) - (15426687827205794897ULL)))))));
    var_20 = (((!(((var_7) && (var_14))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_15));
    var_21 = ((/* implicit */_Bool) 1345681244487640819ULL);
    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (-(9223372036317904896ULL)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_23 = var_1;
                arr_4 [i_0] [i_1] [i_1] = ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))), (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0]))))) << (((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
