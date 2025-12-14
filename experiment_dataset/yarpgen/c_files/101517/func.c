/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101517
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
    var_11 = ((/* implicit */long long int) var_4);
    var_12 &= ((/* implicit */unsigned short) (-((~(var_3)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */long long int) (_Bool)1)), (max((var_10), (281474976710655LL))))), (855594748719882483LL)));
        var_13 |= ((/* implicit */unsigned short) min((((((/* implicit */int) ((unsigned short) arr_0 [3]))) - ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (unsigned char)178))));
        arr_3 [i_0] |= ((/* implicit */_Bool) min(((+(((8388607U) >> (((((/* implicit */int) arr_0 [i_0])) - (162))))))), (((/* implicit */unsigned int) ((signed char) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) (unsigned short)63524);
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-35)) < (((/* implicit */int) (short)17793))))) : (max(((~(((/* implicit */int) arr_6 [i_1])))), (((((/* implicit */int) var_7)) - (((/* implicit */int) var_1))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_14 = ((/* implicit */long long int) ((0) - (((/* implicit */int) ((signed char) (signed char)-48)))));
        arr_11 [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767))))))));
        var_15 ^= ((/* implicit */unsigned long long int) arr_4 [i_2]);
    }
    var_16 = ((/* implicit */unsigned short) var_0);
}
