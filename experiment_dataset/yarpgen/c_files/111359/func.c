/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111359
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
    var_12 += ((signed char) (~(((/* implicit */int) max((var_8), (((/* implicit */short) var_0)))))));
    var_13 += ((/* implicit */signed char) max((-5603830376256906540LL), (5603830376256906536LL)));
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870911LL)) ? (min((((/* implicit */long long int) var_5)), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5603830376256906562LL))))))))) ? (((/* implicit */int) (signed char)31)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-38))) : (var_10)))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) (signed char)-79))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_15 += ((/* implicit */long long int) ((unsigned char) min((var_5), (((/* implicit */unsigned char) (_Bool)1)))));
        arr_4 [(_Bool)1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 5603830376256906533LL)))))));
    }
}
