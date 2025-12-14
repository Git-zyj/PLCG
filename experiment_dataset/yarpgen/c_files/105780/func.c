/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105780
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        var_13 = 67108848LL;
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((-67108848LL), (67108842LL))))));
    }
    for (unsigned char i_1 = 3; i_1 < 22; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((-67108850LL), (-67108849LL))))))), (min((min((-67108843LL), (-67108842LL))), (((67108842LL) + (-67108850LL)))))));
        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((-67108846LL), (-67108848LL))))));
        arr_8 [i_1] |= ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) 67108829LL)) ? (67108847LL) : (67108838LL))), (((67108849LL) & (-67108839LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 67108841LL)) || (((/* implicit */_Bool) 67108837LL)))))));
    }
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_8)), (max((min((67108841LL), (67108849LL))), (((/* implicit */long long int) ((67108821LL) == (67108842LL))))))));
}
