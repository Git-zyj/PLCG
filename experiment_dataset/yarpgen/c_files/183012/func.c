/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183012
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
    var_17 = var_11;
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] = max((max(((signed char)-67), ((signed char)-54))), (((/* implicit */signed char) ((((/* implicit */int) max(((signed char)-93), ((signed char)-5)))) <= (((/* implicit */int) (signed char)-125))))));
        arr_4 [(signed char)14] |= ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0 + 1])) : ((-(((/* implicit */int) (signed char)66))))));
    }
}
