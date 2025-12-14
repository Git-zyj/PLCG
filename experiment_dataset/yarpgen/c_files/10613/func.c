/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10613
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
    var_18 |= var_15;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) 2147483647);
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)22541)) : (var_0))), (((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    var_20 = ((((((/* implicit */int) max(((short)-22541), ((short)-22536)))) > (var_1))) ? (var_15) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22558)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (423174222120992747ULL)))) ? (min((((/* implicit */unsigned long long int) 509735474)), (2652308652772036902ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32658)) ? (((/* implicit */int) (short)-22570)) : (var_13)))))));
    var_21 ^= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (short)22541)) ? (((/* implicit */int) (short)-22570)) : (-1209754496))) : (((/* implicit */int) var_5)))));
}
