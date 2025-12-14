/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138134
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((7676118615335176418LL) | (((/* implicit */long long int) 11800877U))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_5)))))));
    var_19 += ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)15)), ((unsigned short)60182)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (arr_0 [i_0] [i_1]))))) >> (((/* implicit */int) (signed char)10))));
                var_21 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (short)32767)), (arr_3 [i_0 - 3] [i_0 - 3] [i_1 + 3]))), (((arr_3 [i_0 + 1] [i_0 - 2] [i_1 + 2]) % (arr_3 [i_0 + 1] [i_0 + 1] [i_1 - 1])))));
            }
        } 
    } 
}
