/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15716
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
    var_19 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((var_17), (2147483647)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (4121099068U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (var_11))))) % (662261467U))))));
    var_20 = ((/* implicit */int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) 703724782U)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((var_15) ? (3632705828U) : (((/* implicit */unsigned int) var_5))))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) % (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (signed char)28))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((5137659) % (((/* implicit */int) (unsigned short)44578)))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(arr_1 [i_1] [i_1])))) ? (arr_1 [i_1] [(short)17]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))))))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_3 [(_Bool)0]);
    }
    var_23 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)20531)));
}
