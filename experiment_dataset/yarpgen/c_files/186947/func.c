/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186947
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
    var_13 += ((max((((1346098372113197041LL) / (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) max((var_9), (var_1)))))) % (((/* implicit */long long int) ((int) (~(var_1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_15 = ((_Bool) var_8);
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)16649)) ? (-1346098372113197054LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
    }
    var_17 = ((/* implicit */long long int) var_12);
    var_18 = ((/* implicit */_Bool) var_6);
    var_19 |= max((var_4), (max((((var_5) ? (((/* implicit */int) (signed char)5)) : (var_6))), (min((var_6), (((/* implicit */int) (unsigned short)62691)))))));
}
