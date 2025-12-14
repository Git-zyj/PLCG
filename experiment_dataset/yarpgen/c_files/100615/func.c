/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100615
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        var_16 = var_1;
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(arr_2 [i_1]))))));
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1871962325152125416LL)))))));
    }
    var_19 = ((/* implicit */short) var_3);
    var_20 = ((/* implicit */unsigned short) (short)21103);
    var_21 = ((/* implicit */unsigned int) var_0);
}
