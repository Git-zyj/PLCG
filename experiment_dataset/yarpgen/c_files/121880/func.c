/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121880
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [11U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35044)) << (((1206985332U) - (1206985331U)))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((unsigned short) arr_1 [i_0])))));
        var_11 ^= ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0]));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5852534730085038017LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) (signed char)102))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1 - 1])) - (((/* implicit */int) arr_2 [i_1 - 1]))));
        arr_8 [i_1] [i_1 - 1] = ((unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1 + 1]))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2 - 1])) ? (((((/* implicit */_Bool) (~(arr_9 [i_2 + 1])))) ? (((((/* implicit */_Bool) arr_10 [i_2 + 1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63048))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned short)30492)) << (((((/* implicit */int) (unsigned short)1280)) - (1273))))))))));
        var_15 = ((/* implicit */unsigned short) max((-3741885484968474510LL), (max((arr_9 [i_2 + 1]), (((/* implicit */long long int) (unsigned short)65003))))));
    }
    var_16 = ((/* implicit */unsigned short) var_2);
}
