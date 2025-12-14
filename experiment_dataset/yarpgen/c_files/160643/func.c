/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160643
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 ^= ((/* implicit */_Bool) var_9);
        var_14 = ((/* implicit */signed char) min((arr_0 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) && (arr_2 [i_0] [i_0]))))));
        arr_3 [(_Bool)1] = (+(max((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) (signed char)112);
        var_15 = (~((-(((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_1)))))));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_3) % (((/* implicit */int) max(((signed char)119), ((signed char)116))))))) || (var_7)));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) var_11))))))));
    var_18 = ((/* implicit */_Bool) var_11);
}
