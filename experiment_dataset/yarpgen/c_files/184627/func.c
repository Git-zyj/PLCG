/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184627
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
    var_13 += ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [18ULL])) : (((/* implicit */int) arr_2 [(_Bool)0])))))))));
                arr_5 [i_0] [i_1 + 1] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) 10119429804487959129ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_1 - 1] [i_0 - 4])), (var_10))))));
            }
        } 
    } 
}
