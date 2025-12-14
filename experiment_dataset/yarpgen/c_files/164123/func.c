/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164123
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) max((((arr_3 [i_0 - 1] [i_0]) >> (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) (_Bool)0))))) : (((/* implicit */_Bool) max((((((arr_3 [i_0 - 1] [i_0]) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) + (97))))), (((/* implicit */int) (_Bool)0)))));
                arr_7 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 4] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0]))))), (((arr_5 [i_0 + 3]) << (((((/* implicit */int) arr_4 [i_1 + 1])) - (144)))))));
                arr_8 [i_0] = ((/* implicit */short) var_13);
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (_Bool)1))));
}
