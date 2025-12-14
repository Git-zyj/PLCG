/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115294
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))))) <= ((-(var_6)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)0))))));
        arr_4 [i_0] = ((/* implicit */short) arr_3 [i_0] [i_0]);
    }
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((max((var_7), (((/* implicit */unsigned int) -1812313560)))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1441280042U))))) : (((1441280027U) >> (((1441280027U) - (1441279998U)))))));
    var_13 = ((/* implicit */short) var_9);
    var_14 = ((/* implicit */unsigned long long int) -8529583234750151640LL);
}
