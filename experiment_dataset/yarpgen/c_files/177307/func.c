/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177307
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
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)123))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_6))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_12)))))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((-(((/* implicit */int) (short)-1528)))) - (((/* implicit */int) arr_1 [i_0]))))), (var_4)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) var_15)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13)))))))));
        arr_4 [i_0] &= ((/* implicit */int) var_6);
    }
}
