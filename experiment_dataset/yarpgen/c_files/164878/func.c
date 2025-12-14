/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164878
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (2U)))) ? (((((/* implicit */_Bool) (unsigned char)254)) ? (var_5) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((long long int) (short)2571));
                    arr_11 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((4294967294U) ^ (12U)));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) ((int) var_15));
}
