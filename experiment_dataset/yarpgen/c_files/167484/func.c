/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167484
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
    var_16 = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) ((unsigned int) (signed char)0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-93))));
        var_18 = ((/* implicit */short) ((unsigned char) ((12799688355460267202ULL) < (1382335911001934714ULL))));
        var_19 |= ((unsigned char) arr_1 [i_0]);
    }
    var_20 = ((/* implicit */unsigned char) var_8);
}
