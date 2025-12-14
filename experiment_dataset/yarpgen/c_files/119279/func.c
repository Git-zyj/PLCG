/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119279
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_7)))) + (2147483647))) << (((((/* implicit */int) ((max((var_4), (2463116867372692425LL))) >= (((/* implicit */long long int) ((/* implicit */int) (short)25789)))))) - (1))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) arr_0 [i_0 - 1] [16ULL]);
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0)))) >= (max((((/* implicit */long long int) var_12)), (-2463116867372692425LL))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)12860)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_3))), (((var_0) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56))) : (var_3)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) max((arr_0 [i_0] [(signed char)0]), (((/* implicit */long long int) (short)63)))))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) max(((-(-1833475892))), ((-(((/* implicit */int) (short)-63))))));
    }
}
