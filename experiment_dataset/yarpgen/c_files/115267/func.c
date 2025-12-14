/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115267
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
    var_20 = ((/* implicit */_Bool) var_19);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((-5008377115571901721LL) > (-5008377115571901718LL)));
        var_22 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))));
    }
    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
}
