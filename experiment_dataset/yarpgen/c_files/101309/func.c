/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101309
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            arr_4 [2ULL] [i_0] = ((/* implicit */unsigned int) 764200770017593187ULL);
            var_15 = ((/* implicit */long long int) var_5);
            var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)65)) + (((/* implicit */int) arr_1 [i_0 + 2]))));
        }
        arr_5 [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)28097))))) - (((/* implicit */int) arr_1 [i_0 - 1])))));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) 15761508142616852295ULL));
    }
    for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_2])) < ((+(((/* implicit */int) var_12))))));
        var_18 = ((/* implicit */_Bool) arr_1 [i_2 - 1]);
    }
    var_19 = ((/* implicit */int) var_12);
}
