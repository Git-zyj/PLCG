/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137685
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((arr_0 [i_0]) & (arr_1 [i_0 + 1])));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_4 [i_1] &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))));
            var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 12571960061426693158ULL)) ? (6805162575024839702ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_13))))))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (6805162575024839690ULL)))) || (((/* implicit */_Bool) arr_2 [i_0 - 2]))));
            arr_7 [(short)7] = ((/* implicit */_Bool) ((arr_3 [i_0 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0 + 1]))));
        }
    }
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6805162575024839702ULL)) ? (((/* implicit */int) (short)-24711)) : (((/* implicit */int) (short)-1)))))));
                arr_14 [i_4] [i_3] [i_3 + 1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) arr_12 [i_3 + 1] [i_4])) % (arr_2 [i_3]))));
            }
        } 
    } 
}
