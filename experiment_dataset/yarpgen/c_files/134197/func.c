/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134197
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
    var_10 -= ((/* implicit */signed char) 438560886U);
    var_11 -= var_2;
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0 - 1] = ((/* implicit */_Bool) max((max((2098972082), (((/* implicit */int) (short)(-32767 - 1))))), (min((((/* implicit */int) min((arr_3 [i_0] [i_0 - 2] [i_0 + 1]), (var_1)))), ((-(((/* implicit */int) arr_0 [i_0]))))))));
                arr_7 [i_0] = ((/* implicit */int) arr_4 [i_0] [i_0]);
                var_12 = ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)36))))) : ((~(((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1] [i_1])) ? (arr_2 [i_0] [i_1]) : (arr_4 [i_0] [i_1]))))));
            }
        } 
    } 
}
