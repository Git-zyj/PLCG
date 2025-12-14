/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112913
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
    var_13 = ((/* implicit */unsigned char) var_8);
    var_14 = ((/* implicit */int) var_10);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_8), (-836986192))), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1814797931138768721ULL)) ? (1293441607) : (var_5)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) 1293441607)), (var_3)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-23271)))) : (var_11)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_2)) / (3867874644947044649ULL)))) ? (((var_6) / (((/* implicit */unsigned long long int) var_1)))) : (arr_6 [i_2 - 3] [i_1] [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_1] [i_2])) ? (267911168LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                    arr_10 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) 2815738615632014058ULL);
                    arr_11 [8ULL] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 960931041)) && (((/* implicit */_Bool) arr_6 [i_2 - 3] [i_2 - 4] [i_2 - 4])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2 - 3] [i_2 - 4] [i_2 - 3])) || (((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_6 [i_2 + 1] [i_2 - 4] [i_2 + 1])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_7);
}
