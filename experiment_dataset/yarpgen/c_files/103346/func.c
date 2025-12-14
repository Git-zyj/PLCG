/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103346
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
    var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((1039901858U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_11)))))));
    var_13 = ((/* implicit */_Bool) ((signed char) (!(((_Bool) var_8)))));
    var_14 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_15 &= ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0 + 1])))));
        arr_2 [i_0] = ((/* implicit */signed char) (+(((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (arr_0 [i_0 - 1]))) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-6343)))))));
    }
}
