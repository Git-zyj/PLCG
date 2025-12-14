/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155532
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_17 -= ((/* implicit */signed char) min((((((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (unsigned short)32768)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_2 [i_0])) : (-810403778))))))));
        var_18 = ((/* implicit */short) ((int) (+((-(var_14))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) (unsigned char)0);
        var_20 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_2 [i_1])))) >= (min((((/* implicit */long long int) -1)), (7301633144560512327LL)))));
        arr_8 [i_1] = ((/* implicit */signed char) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2595343700U)) ? (-1390969930) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_13)) : (var_16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_11)));
}
