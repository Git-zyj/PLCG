/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128326
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)48906)) <= (((/* implicit */int) arr_0 [i_0]))));
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 979620411)) ? (2673107353193264746ULL) : (var_16)));
    }
    var_18 = ((/* implicit */unsigned short) (~(((((-1021741274) % (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) ((10585578910459105596ULL) == (((/* implicit */unsigned long long int) var_13)))))))));
    var_19 = ((/* implicit */signed char) ((min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)178)))), (((((/* implicit */_Bool) 1462537073U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)47644)))))) <= ((((-(((/* implicit */int) (short)7116)))) ^ (((/* implicit */int) (unsigned char)12))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned short)4128)))) + (2147483647))) >> (((((/* implicit */int) var_2)) - (44)))))) ? (((/* implicit */unsigned int) var_15)) : (max((((((/* implicit */_Bool) var_12)) ? (4070829876U) : (1025985226U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)47644))))))));
}
