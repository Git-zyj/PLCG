/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144763
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
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) -1569143438266844312LL))) ? (((long long int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */int) ((signed char) -1895738903))) % (((/* implicit */int) var_14)))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((-1569143438266844312LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (!(var_4))))));
        var_20 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) 1107378202)) ? (((/* implicit */int) (_Bool)1)) : (-121148080)))));
        var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_5)) : (-671993158)))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 2]))));
    }
    var_23 = ((/* implicit */unsigned long long int) (~((((-(((/* implicit */int) var_11)))) % (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0)))))))));
}
