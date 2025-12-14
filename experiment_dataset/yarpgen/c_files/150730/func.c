/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150730
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
    var_19 = ((/* implicit */int) ((var_18) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_20 += ((/* implicit */unsigned short) (+(((int) var_18))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0 + 1] = ((/* implicit */_Bool) var_13);
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_21 &= ((/* implicit */_Bool) (unsigned short)32768);
                    var_22 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_6 [i_0] [i_0])))) : (arr_0 [i_1]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((_Bool) arr_3 [i_1])))))));
                }
            }
        } 
    } 
}
