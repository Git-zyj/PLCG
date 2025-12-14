/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152633
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
    var_17 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-23242))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_19 = ((/* implicit */short) ((arr_1 [i_0 + 2]) > (arr_1 [i_0 + 2])));
            var_20 = var_4;
        }
        arr_6 [i_0] = arr_1 [i_0 - 2];
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 9065556737681129127LL))));
    }
}
