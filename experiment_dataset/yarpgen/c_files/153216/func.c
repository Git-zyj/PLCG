/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153216
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0 - 2]))));
        var_11 = ((/* implicit */signed char) var_3);
    }
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_5))));
    /* LoopSeq 2 */
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        arr_6 [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-28515))));
        var_13 |= (!(((/* implicit */_Bool) min((var_1), (((/* implicit */int) arr_0 [i_1 - 1]))))));
    }
    for (int i_2 = 4; i_2 < 12; i_2 += 3) 
    {
        var_14 = ((/* implicit */int) max((arr_0 [i_2 + 1]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_4)))) && (((/* implicit */_Bool) max((arr_3 [i_2] [i_2]), (((/* implicit */short) (_Bool)0))))))))));
        arr_9 [i_2] [i_2 + 1] = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)28514)) / (((/* implicit */int) arr_3 [i_2] [i_2])))))))), (max((((/* implicit */unsigned long long int) arr_8 [i_2] [i_2])), (var_2))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) var_7)) : (var_5)))) <= (min((((/* implicit */unsigned long long int) var_7)), (var_9)))));
}
