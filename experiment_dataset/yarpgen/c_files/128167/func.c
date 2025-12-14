/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128167
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
    var_10 = ((/* implicit */unsigned long long int) (_Bool)0);
    var_11 = min((((/* implicit */unsigned char) (signed char)125)), (var_6));
    var_12 &= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)8))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((-7090071831304959712LL) + (9223372036854775807LL))) << (((((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) arr_1 [i_0 + 1]))), (var_2)))) - (43125)))));
    }
}
