/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143747
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
    var_13 = ((/* implicit */unsigned int) (-(((((/* implicit */int) ((unsigned char) 0))) | (((((/* implicit */_Bool) -1260899257)) ? (((/* implicit */int) (short)11419)) : (((/* implicit */int) (short)11419))))))));
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 791213555U)) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) : (((int) (-(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_4 [(unsigned short)20] |= ((/* implicit */unsigned long long int) (!(var_1)));
        arr_5 [i_0] = ((/* implicit */long long int) 3503753740U);
        var_15 |= ((/* implicit */unsigned int) min((min((arr_2 [i_0 + 1]), (((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [2U])), (var_9)))))), (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_1 [i_0 - 1]))))))));
    }
    var_16 += ((/* implicit */unsigned char) ((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_12)))) % (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_11)) ? (var_2) : (var_0))))))));
    var_17 = ((/* implicit */short) var_2);
}
