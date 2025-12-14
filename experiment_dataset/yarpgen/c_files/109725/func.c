/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109725
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */_Bool) ((unsigned int) ((int) var_10)));
                var_16 = ((unsigned char) min((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1])) ? (arr_6 [2U] [i_0] [2U]) : (4294967279U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (var_15))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */int) var_0)), (((((var_2) + (2147483647))) << (((((var_2) + (148888212))) - (13))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)186)) >> (((var_10) - (4057656876U)))))))))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4052393262028813708LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1482542669518718561LL)));
}
