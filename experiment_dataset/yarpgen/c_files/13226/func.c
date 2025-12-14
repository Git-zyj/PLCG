/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13226
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
    var_20 = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) var_10)) ? (6485938412889291603ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)205)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0 + 1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)28598))));
        var_21 &= ((/* implicit */unsigned int) arr_1 [i_0] [i_0 - 1]);
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)254)) : (min(((~(((/* implicit */int) (short)30490)))), (((/* implicit */int) var_14))))));
}
