/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176559
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
    var_11 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned char)120)), (1894504394U))) + (9891169U))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-2147483647 - 1))), (-2246128318205849565LL)));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)35075))));
    }
    var_13 = (!(((/* implicit */_Bool) (~(((int) var_1))))));
}
