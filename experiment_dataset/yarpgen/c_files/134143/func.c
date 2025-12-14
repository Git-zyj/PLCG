/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134143
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [8U])) : (((/* implicit */int) var_11))))) ? ((~(((((/* implicit */_Bool) -457592238)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [(unsigned short)15])) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))));
                    arr_7 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) max(((-(max((var_2), (((/* implicit */int) arr_5 [i_1] [i_1] [(unsigned short)21] [5U])))))), (((/* implicit */int) var_14))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_14);
    var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)169)), (-1LL)));
    var_22 ^= ((/* implicit */int) var_9);
}
