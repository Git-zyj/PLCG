/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158366
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
    var_14 = ((/* implicit */short) ((unsigned short) var_8));
    var_15 = ((/* implicit */unsigned long long int) (signed char)127);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (unsigned char)52);
        var_16 = ((/* implicit */_Bool) min((var_16), (((((int) arr_1 [i_0] [i_0])) >= (((/* implicit */int) ((unsigned char) 31953551U)))))));
    }
}
