/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149408
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (signed char)105))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) + (((/* implicit */int) ((((/* implicit */int) min((var_12), ((signed char)-105)))) > (((/* implicit */int) arr_1 [i_0])))))));
        var_18 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) (signed char)-107)))));
        arr_2 [(signed char)19] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) min((arr_1 [i_0]), (arr_0 [(signed char)16]))))));
    }
    var_19 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) (signed char)-9))))))));
}
