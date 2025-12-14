/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121530
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))) * (min((var_3), (((/* implicit */unsigned int) var_0))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) / (var_15))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_3 [8LL] [i_0 - 1] = var_13;
        arr_4 [i_0 - 1] = ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) ((unsigned char) var_12))))));
    }
    var_17 = ((/* implicit */unsigned char) 33554431U);
    var_18 &= ((/* implicit */int) (((-(((unsigned int) var_5)))) < (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 0U))))))))));
}
