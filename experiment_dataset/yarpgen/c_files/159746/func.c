/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159746
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_0])))));
        arr_3 [i_0] [i_0] &= ((/* implicit */_Bool) var_4);
        arr_4 [(signed char)13] = ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (unsigned char)8))))))));
    }
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) var_6)) ? (var_1) : (var_1))))), (((/* implicit */int) var_9)))))));
}
