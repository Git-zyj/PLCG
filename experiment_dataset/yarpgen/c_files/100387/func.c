/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100387
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
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(var_2)))), (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))));
        var_12 = (~(((/* implicit */int) (signed char)-22)));
    }
    var_13 = ((signed char) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1008023141))))))));
    var_14 = ((/* implicit */unsigned long long int) var_2);
    var_15 = (-(((/* implicit */int) var_4)));
}
