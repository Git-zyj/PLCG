/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108759
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [11ULL] [11ULL] = ((/* implicit */int) 2979855184U);
        arr_3 [i_0] = 5290042718368108508ULL;
    }
    var_12 = var_4;
    var_13 = ((/* implicit */unsigned char) 3671803471658658920ULL);
    /* LoopSeq 1 */
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        var_14 = ((/* implicit */_Bool) arr_5 [i_1] [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned char) arr_4 [i_1 - 1] [i_1]);
        var_15 = 4949032891320774663LL;
        var_16 = ((/* implicit */unsigned int) (signed char)-1);
    }
}
