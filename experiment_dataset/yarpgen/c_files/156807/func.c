/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156807
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */_Bool) 137438953471LL);
                arr_5 [i_1] &= ((/* implicit */short) arr_3 [i_1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2050901596), (((arr_7 [i_2]) ? (((/* implicit */int) (short)-23358)) : (((/* implicit */int) arr_7 [i_2]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) : (((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (-9223372036854775801LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))))))));
        var_18 = ((/* implicit */unsigned long long int) ((signed char) (signed char)1));
    }
    for (unsigned int i_3 = 1; i_3 < 7; i_3 += 1) 
    {
        var_19 ^= ((/* implicit */int) ((_Bool) ((unsigned short) (signed char)-1)));
        var_20 -= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(short)6])) ? (-1) : (((/* implicit */int) arr_1 [i_3] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [0U]))) : (1121130523U))));
    }
}
