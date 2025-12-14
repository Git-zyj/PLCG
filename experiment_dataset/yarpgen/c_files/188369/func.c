/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188369
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned int) (~(524287ULL)));
        arr_5 [i_0] = (+((-((+(18446744073709027329ULL))))));
        arr_6 [(unsigned char)2] = max((-2681434513847041132LL), (min((-9000799523962540926LL), (((/* implicit */long long int) (unsigned short)26288)))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)26288))));
        var_18 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1051134096))));
        arr_10 [i_1] &= ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) var_15)), (524287ULL)))));
    }
    var_19 = ((/* implicit */unsigned int) max((-2485143259832957823LL), (((/* implicit */long long int) (short)32767))));
}
