/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141226
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
    var_20 += var_15;
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_19))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_22 += ((/* implicit */signed char) (-(((/* implicit */int) max((var_9), (((/* implicit */unsigned short) arr_2 [i_0] [i_0])))))));
        var_23 = ((/* implicit */short) min((max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) arr_0 [i_1] [i_1]);
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((int) ((((/* implicit */int) arr_2 [i_1] [i_1])) >> (((((/* implicit */int) (signed char)-55)) + (77)))))))));
    }
}
