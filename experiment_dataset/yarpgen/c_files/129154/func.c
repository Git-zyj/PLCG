/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129154
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
    var_20 = var_15;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) >> (((2147483647) - (2147483646)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0] [i_1]))))))) : (((/* implicit */int) ((short) max((arr_0 [i_0] [i_1]), (((/* implicit */int) (short)6446))))))));
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1 + 2] [i_1 - 2]), (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) var_19))));
        }
        var_22 ^= ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0]);
        var_23 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) ((_Bool) var_14))) : (arr_0 [i_0] [i_0]));
    }
    var_25 = ((/* implicit */unsigned long long int) var_18);
    var_26 = ((/* implicit */long long int) var_0);
}
