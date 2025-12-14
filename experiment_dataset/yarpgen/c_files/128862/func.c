/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128862
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
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_10 -= ((/* implicit */_Bool) var_0);
                arr_5 [i_1] [i_1] &= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)57155))))), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_5))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((~(max((4047030851U), (((/* implicit */unsigned int) var_8)))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (min((min((var_7), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) var_4)))) : (max((max((((/* implicit */unsigned int) (short)10823)), (3624012731U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))));
    var_14 = ((/* implicit */short) var_4);
}
