/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13444
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
    var_10 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) (~(0)));
        var_12 = ((/* implicit */short) (+(((var_0) % (((/* implicit */int) (signed char)(-127 - 1)))))));
        var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */int) (short)0)) * (((/* implicit */int) (_Bool)0))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (var_0)))) : ((-(var_2)))));
        arr_6 [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (7177623760916468805LL) : (((/* implicit */long long int) var_0))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_8))));
    }
    var_16 = ((/* implicit */signed char) 2146435072);
    var_17 = var_9;
    var_18 &= ((/* implicit */signed char) var_2);
}
