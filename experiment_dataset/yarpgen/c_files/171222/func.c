/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171222
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11811033997118365507ULL)) ? (min((((/* implicit */int) ((_Bool) var_3))), ((~(((/* implicit */int) var_5)))))) : (((/* implicit */int) min((((/* implicit */short) var_3)), (((short) var_11)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((1038510899790943452LL), (((/* implicit */long long int) (_Bool)1))))) && (((/* implicit */_Bool) var_10))))) > (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_1]))))) ? ((~(((/* implicit */int) arr_0 [i_0] [i_1])))) : ((-(((/* implicit */int) arr_1 [i_1]))))))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)0)))) > (var_4)))) % (((/* implicit */int) var_3))));
            }
        } 
    } 
}
