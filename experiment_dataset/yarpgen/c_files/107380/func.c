/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107380
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_19 |= ((/* implicit */signed char) min((((/* implicit */int) arr_5 [i_2] [i_1] [i_2] [12ULL])), (((((/* implicit */int) arr_2 [i_1 + 1] [i_0])) << (((1955300939) - (1955300925)))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2] [i_0])) : (((((/* implicit */int) ((_Bool) -1955300940))) | (((/* implicit */int) var_3))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */long long int) var_14);
    var_22 |= ((/* implicit */signed char) var_7);
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((-1955300940) + (((/* implicit */int) (unsigned short)3944)))))));
}
