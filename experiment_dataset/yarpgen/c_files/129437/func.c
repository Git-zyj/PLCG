/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129437
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_10 ^= ((/* implicit */unsigned int) arr_1 [i_0] [i_1]);
                var_11 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (604853695)))), (((((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))) << (((/* implicit */int) arr_5 [i_1]))))));
                arr_6 [i_1] [i_1] [i_0] = arr_1 [i_0] [i_1];
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(3U)))) ? (max((63443603638905035LL), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) << (((var_2) - (1923486327)))));
    var_13 = ((/* implicit */unsigned char) ((_Bool) ((short) ((((/* implicit */_Bool) 1800420106U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)26))))));
}
