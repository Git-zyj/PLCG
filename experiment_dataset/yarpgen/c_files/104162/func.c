/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104162
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
    var_18 = ((/* implicit */short) (~((~(((var_15) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_19 *= ((/* implicit */short) (~((-(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_3))))))));
        var_20 = ((/* implicit */long long int) arr_3 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */int) min((((/* implicit */long long int) (short)-2605)), ((~(-3015199323578310616LL)))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) var_6)) : ((-(((((/* implicit */int) arr_3 [i_1])) + (((/* implicit */int) var_7))))))));
        var_23 = ((/* implicit */long long int) min((((/* implicit */int) (signed char)108)), (134217600)));
    }
}
