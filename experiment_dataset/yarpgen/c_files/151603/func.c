/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151603
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((((/* implicit */int) var_13)) & (var_7)))))) != ((-(max((var_2), (((/* implicit */long long int) var_13))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 2]))) > (max((var_11), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0 - 1])))))))) != (((long long int) (signed char)39)))))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */int) (signed char)15)), (-1556334078))))) ? (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) <= (arr_2 [i_0])))) | (((/* implicit */int) arr_5 [i_0 + 1])))) : (((int) arr_7 [i_0] [i_0 + 1] [i_1 + 2]))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_6 [i_2] [i_1] [i_0])), (0LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_5 [i_0])))) : (min((((-16LL) ^ (((/* implicit */long long int) 955451982)))), (((/* implicit */long long int) arr_5 [i_0]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_1);
}
