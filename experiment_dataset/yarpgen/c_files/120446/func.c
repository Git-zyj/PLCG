/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120446
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) var_9)))))));
        var_20 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) (unsigned short)34293)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (long long int i_1 = 3; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_22 -= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)35))));
        var_23 = ((/* implicit */_Bool) var_12);
        var_24 = ((/* implicit */unsigned long long int) var_9);
    }
    var_25 = ((/* implicit */_Bool) var_13);
}
