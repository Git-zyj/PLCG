/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156079
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
    var_14 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) (+(max((((/* implicit */long long int) (short)31108)), (-701076772801573983LL)))));
                var_16 = ((/* implicit */_Bool) 2112754070);
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_1] [i_0])), (arr_5 [i_1] [i_1] [i_1 + 1])))) ? ((+(((/* implicit */int) arr_0 [i_1] [i_0])))) : ((-(((/* implicit */int) arr_0 [i_1] [i_0]))))));
                var_17 |= ((/* implicit */_Bool) (short)-28256);
            }
        } 
    } 
}
