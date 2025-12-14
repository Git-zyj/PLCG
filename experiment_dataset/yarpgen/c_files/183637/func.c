/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183637
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
    var_16 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) var_4);
        var_18 = ((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) (unsigned short)16394)) ? (var_10) : (((/* implicit */long long int) var_0))))))));
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_0)) : (var_8))), (max((var_8), (((/* implicit */unsigned int) arr_1 [i_0])))))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)58)) || (((/* implicit */_Bool) (unsigned short)16394)))) ? (((/* implicit */int) arr_2 [i_1])) : ((-(((/* implicit */int) arr_3 [i_1])))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_1]);
        arr_5 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 16270306967607707191ULL)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))) : (var_5)))));
    }
    var_22 = var_12;
}
