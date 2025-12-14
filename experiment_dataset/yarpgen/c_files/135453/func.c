/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135453
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
    var_10 ^= (((!(((/* implicit */_Bool) -451076286)))) ? (((((/* implicit */_Bool) -1)) ? (-640811873) : (-502581407))) : (((((/* implicit */_Bool) max((var_1), (var_2)))) ? ((~(var_1))) : (-640811873))));
    var_11 = var_0;
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = min((((((/* implicit */_Bool) ((int) arr_0 [i_0] [i_0]))) ? (((var_8) << (((((var_3) + (2101012390))) - (8))))) : ((-(var_6))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 3]))))));
        var_12 = arr_0 [i_0] [i_0];
    }
    for (int i_1 = 3; i_1 < 22; i_1 += 4) /* same iter space */
    {
        var_13 = ((int) (~(arr_2 [20])));
        var_14 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [2])) ? (arr_0 [i_1 - 2] [i_1 + 2]) : (((int) -373332088)))) >= (max((max((arr_0 [i_1] [i_1]), (var_5))), (((((/* implicit */_Bool) var_9)) ? (var_6) : (arr_4 [i_1] [i_1])))))));
    }
}
