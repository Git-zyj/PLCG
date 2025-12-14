/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104278
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_14 &= ((/* implicit */short) 15);
        var_15 = ((((((/* implicit */_Bool) -1510332653)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
        var_16 += (-(((/* implicit */int) ((((/* implicit */int) var_7)) <= ((+(((/* implicit */int) var_10))))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) ((var_12) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ^ (((((/* implicit */_Bool) 1510332658)) ? (((/* implicit */int) (unsigned short)33084)) : (939524096))))))));
    }
    var_18 |= ((/* implicit */long long int) 2594313285U);
    var_19 &= ((((/* implicit */int) (!(((((/* implicit */int) (unsigned short)1023)) != (((/* implicit */int) (unsigned char)34))))))) & (((var_10) ? (((/* implicit */int) var_5)) : ((~(-1185989002))))));
}
