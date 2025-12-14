/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150695
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_17 &= ((/* implicit */unsigned char) arr_1 [i_0]);
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_1 [10ULL])));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-103)) : (0)));
                    arr_6 [i_2] [i_2] [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 2] [i_1] [i_1 - 3])) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1] [i_1] [i_1 + 1]))));
                    var_20 = ((/* implicit */unsigned int) ((unsigned char) arr_3 [i_0] [i_1 + 1] [i_2]));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12; i_3 += 4) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned int) (((+(var_0))) == (((/* implicit */int) (short)(-32767 - 1)))));
        var_21 |= ((/* implicit */unsigned long long int) arr_2 [i_3 - 2]);
    }
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((min((((/* implicit */int) var_10)), (var_4))) != (min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_6)) ? (-813448200) : (((/* implicit */int) (unsigned short)40826)))))))))));
}
