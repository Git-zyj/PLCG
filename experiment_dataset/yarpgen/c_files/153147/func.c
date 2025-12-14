/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153147
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((/* implicit */short) (unsigned char)192)), (var_4))))));
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (var_16)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_23 = ((/* implicit */short) min((((/* implicit */int) max(((short)1), (((/* implicit */short) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (signed char)27)))))))), (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_2 [i_0] [i_0])))), (((/* implicit */int) max(((signed char)-21), (((/* implicit */signed char) arr_2 [i_0] [i_0])))))))));
        var_24 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) arr_5 [i_1]);
        var_25 = ((/* implicit */long long int) min(((signed char)34), ((signed char)-124)));
    }
}
