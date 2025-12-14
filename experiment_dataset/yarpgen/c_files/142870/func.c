/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142870
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
    var_11 = ((/* implicit */unsigned int) ((unsigned long long int) var_3));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned char)207)) : (max(((+(((/* implicit */int) (unsigned char)189)))), (((/* implicit */int) var_3))))));
    var_13 = ((/* implicit */unsigned int) var_8);
    var_14 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (((long long int) var_7)))) >> (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_15 *= ((/* implicit */signed char) -2015642233397750484LL);
        var_16 ^= ((/* implicit */unsigned int) (unsigned char)206);
        var_17 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        arr_2 [i_0] = ((/* implicit */short) (((-(4294967277U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2015642233397750503LL))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */long long int) ((unsigned int) var_9)))));
    }
}
