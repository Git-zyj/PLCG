/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105776
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19337))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (arr_4 [i_1 + 1]))))));
                var_10 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1 - 1])))), (((/* implicit */int) min(((short)-32756), (((/* implicit */short) (unsigned char)0)))))));
                arr_7 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1 - 1]))) ? (max((((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))) : (arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1])) : (2147483647))), (((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned char) (_Bool)0))))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) var_4);
}
