/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140570
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
    var_10 = ((/* implicit */_Bool) (((((~(((/* implicit */int) ((unsigned short) 15320616861371086172ULL))))) + (2147483647))) >> (((min(((~(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))) + (5210)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_11 ^= ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) arr_3 [i_0] [i_0] [(unsigned short)14])))) || (((/* implicit */_Bool) var_1)))), ((((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(signed char)2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_3))))))));
                var_12 = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)-123)), ((-(((/* implicit */int) var_4))))));
            }
        } 
    } 
}
