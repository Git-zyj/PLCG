/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169695
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
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4239645861U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_4)))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_14) : (((int) var_3))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((((int) arr_0 [i_0])) == (((/* implicit */int) (unsigned char)127)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_8))) : ((((_Bool)1) ? (((/* implicit */long long int) var_2)) : (2290675036669215012LL)))))));
    }
}
