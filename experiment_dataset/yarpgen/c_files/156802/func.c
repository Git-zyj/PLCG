/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156802
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
    var_14 *= ((/* implicit */unsigned short) (short)4010);
    var_15 = ((/* implicit */long long int) max((max((var_7), (((/* implicit */unsigned int) -40319485)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45140)) ? (((/* implicit */int) (unsigned short)45140)) : (((/* implicit */int) var_4))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)20402)) > (((/* implicit */int) arr_0 [i_0]))))) >> (((/* implicit */int) arr_1 [i_1]))))), (arr_3 [(signed char)13] [i_1] [i_1 + 4])));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1 - 2] [i_2] [i_1] = ((/* implicit */int) arr_1 [i_2 + 3]);
                    var_17 = ((/* implicit */int) (-(max((9223372036854775782LL), (((/* implicit */long long int) (unsigned short)45140))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_3);
}
