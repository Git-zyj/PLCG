/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170317
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
    var_10 = ((/* implicit */unsigned char) ((long long int) ((_Bool) var_3)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((long long int) arr_1 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((-1) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
    }
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((((/* implicit */signed char) ((var_3) && (((/* implicit */_Bool) -14))))), (max((((/* implicit */signed char) (_Bool)1)), (var_6)))))) : (((/* implicit */int) ((min((((/* implicit */unsigned int) var_0)), (528482304U))) != (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    var_12 = ((/* implicit */unsigned int) (((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (var_1)))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (+(-5)))))))));
    var_13 = ((/* implicit */int) var_6);
}
