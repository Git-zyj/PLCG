/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163374
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned long long int) (~((~(-3301608895409516935LL)))));
        arr_3 [i_0] [i_0] = ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2])) << (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) var_0)))))) : (((((/* implicit */long long int) var_3)) + (arr_2 [i_0] [i_0 + 1]))))));
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) /* same iter space */
    {
        arr_6 [10LL] [i_1] = ((/* implicit */short) (~(((arr_1 [i_1 - 1]) + (arr_1 [i_1 + 2])))));
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) + (((/* implicit */int) min(((short)1375), (((/* implicit */short) (unsigned char)244)))))))) ? (((long long int) var_13)) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
    }
    var_18 = ((/* implicit */_Bool) var_4);
    var_19 = ((/* implicit */unsigned short) var_14);
}
