/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111778
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [4LL] [4LL] &= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)62))));
                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((max((var_12), (-7966029911159903508LL))) == (min((((/* implicit */long long int) arr_0 [i_0] [i_1 - 1])), (var_12)))))) >= (((/* implicit */int) arr_4 [i_1 - 4]))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_1);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15393589889190414759ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)16771)))) : ((~(var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_12)));
    var_21 ^= var_4;
    var_22 = ((((/* implicit */_Bool) min(((unsigned short)48761), (((/* implicit */unsigned short) (!((_Bool)1))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)));
}
