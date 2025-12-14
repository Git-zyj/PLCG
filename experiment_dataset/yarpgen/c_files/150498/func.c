/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150498
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [(short)20] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2093696539U))))), (((((var_6) >> (((((/* implicit */int) (unsigned char)234)) - (225))))) + (var_4))));
                var_16 ^= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)32756)), (3473504261U)))) % (arr_0 [14U] [i_1 - 1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32757))) : (2221637106U))))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((arr_2 [i_1 + 2] [i_1 - 1] [i_1 - 1]), (min((arr_4 [9U]), (3324991103U)))))), ((-((-(var_3)))))));
                var_17 &= ((/* implicit */signed char) (unsigned short)15);
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned int) var_15);
}
