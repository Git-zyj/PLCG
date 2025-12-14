/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122073
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
    var_14 = ((/* implicit */_Bool) min((6041134882452980955LL), (6041134882452980947LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (-6041134882452980947LL)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_13))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6041134882452980947LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_4))))));
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
                        var_19 = ((/* implicit */unsigned int) ((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */int) ((var_6) | (var_6)));
    }
    var_20 = ((/* implicit */_Bool) var_6);
    var_21 = ((/* implicit */unsigned long long int) (!(((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1))))))))));
}
