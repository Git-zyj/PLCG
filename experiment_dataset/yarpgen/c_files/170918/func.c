/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170918
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((unsigned char) ((17592186044415LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
        var_19 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_14))))));
    }
    var_20 = ((/* implicit */long long int) (+((~(((((/* implicit */unsigned int) 33554424)) % (var_2)))))));
}
