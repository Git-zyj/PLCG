/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1061
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))) * (((((/* implicit */_Bool) 8191)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)13), (((/* implicit */unsigned short) (short)22057)))))) : (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned short)4028)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)20))) : (var_7))) : (var_8)))));
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) 2305702271725338624LL))));
    var_18 = ((/* implicit */unsigned short) (!(var_9)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) var_1)))))))), (15221953834273805678ULL)));
        var_20 |= min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [(unsigned char)17] [i_0]))))), (arr_0 [i_0] [i_0]));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) >> (((arr_1 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))));
    }
}
