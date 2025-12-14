/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186010
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        var_11 = var_4;
        arr_2 [i_0] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_7))))));
    }
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) max((var_10), (var_10)))), (var_0)))) % ((((-(((/* implicit */int) (signed char)-76)))) ^ ((-(((/* implicit */int) var_1))))))));
    var_13 = var_9;
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)-46))))) ? (((((/* implicit */int) (signed char)76)) >> (((((/* implicit */int) var_4)) - (47271))))) : (max((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_2)))), ((~(((/* implicit */int) var_2))))))));
}
