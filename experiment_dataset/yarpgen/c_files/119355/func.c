/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119355
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) var_7))))));
        var_16 = ((/* implicit */int) ((unsigned char) arr_0 [i_0]));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_17 += ((/* implicit */short) ((_Bool) var_10));
        var_18 = ((/* implicit */long long int) arr_3 [i_1]);
        var_19 = ((/* implicit */unsigned char) 4118569561U);
    }
    var_20 -= ((/* implicit */signed char) var_8);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((max((var_2), (((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) 176397735U))))))))) : (((((/* implicit */_Bool) 176397735U)) ? (6362787049936533330LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
}
