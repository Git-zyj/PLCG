/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136385
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
    var_15 -= ((/* implicit */unsigned char) ((var_0) <= (((/* implicit */int) var_9))));
    var_16 -= ((/* implicit */long long int) (+(min((1146933590U), (1379234597U)))));
    var_17 ^= ((/* implicit */long long int) var_14);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_11)) ? (-9197882006230768968LL) : (9197882006230768969LL))) : (var_1)))) ? (var_8) : (arr_0 [i_0])));
                    var_19 -= ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) >= (arr_0 [i_1])))), (min((arr_1 [i_2 - 1]), (arr_1 [i_2 + 3])))));
                }
            } 
        } 
    } 
}
