/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157256
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
    var_10 |= ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) -1865222024)) <= (4294967282U))))));
    var_11 = ((/* implicit */unsigned char) var_6);
    var_12 = ((/* implicit */int) min((((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((min((var_8), (var_8))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) var_9);
        arr_3 [i_0] = ((/* implicit */signed char) ((int) var_6));
        var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) min(((signed char)-66), (((/* implicit */signed char) (_Bool)1)))))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
    }
}
