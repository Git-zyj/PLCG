/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134748
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            arr_4 [i_1] [9ULL] [8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1073535219)) ? (((/* implicit */unsigned long long int) var_3)) : (17651848736195570739ULL))))));
            var_16 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1] [i_1 + 1]);
        }
        var_17 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15382)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))) : (794895337513980888ULL)));
    }
    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */unsigned long long int) 632701587)) : ((-(17651848736195570723ULL))))))));
}
