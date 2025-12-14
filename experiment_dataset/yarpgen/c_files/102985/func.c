/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102985
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 -= ((/* implicit */unsigned char) (+(arr_1 [i_0] [i_0])));
        arr_2 [(short)13] = ((/* implicit */signed char) (unsigned char)93);
    }
    for (short i_1 = 4; i_1 < 9; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-26326))));
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            arr_9 [i_1] [(_Bool)1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((-73683977) - (((/* implicit */int) (unsigned char)163))))) ? (((((/* implicit */unsigned long long int) 1567859780U)) - (13713478868906129123ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -73683977)) ? (arr_7 [i_1] [i_2 - 1]) : (((/* implicit */int) arr_4 [i_1 - 3])))))));
            var_17 ^= ((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)12)));
        }
        var_18 = ((/* implicit */unsigned int) (unsigned short)44371);
        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 15838512788337265134ULL)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (unsigned char)93))))) : (9146436066708601703LL))) << (((((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)139)) - (((/* implicit */int) (short)0))))) - (1645782876026242134LL))) + (1645782876026242055LL))) - (54LL)))));
    }
    var_19 = ((/* implicit */signed char) var_8);
}
