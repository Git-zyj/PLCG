/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138041
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)105)), ((unsigned char)201)));
    var_19 = ((/* implicit */short) (signed char)105);
    var_20 ^= ((/* implicit */unsigned char) var_14);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) (_Bool)1);
        arr_2 [i_0] = ((/* implicit */int) min((max((((/* implicit */unsigned short) (short)16624)), (var_4))), (((unsigned short) (signed char)-30))));
        var_22 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))), (max((134213632), (((/* implicit */int) (unsigned short)21826))))));
        var_23 += ((/* implicit */unsigned int) 576460752303423360ULL);
    }
}
