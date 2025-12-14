/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142642
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
    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_11 |= ((/* implicit */signed char) (+(4920480629608166687LL)));
        var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (~(4920480629608166683LL))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) var_7))));
        var_13 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 19; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (unsigned char)128);
        arr_7 [i_1] = ((/* implicit */int) 7286937414829812469ULL);
    }
}
