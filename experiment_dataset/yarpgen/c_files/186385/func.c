/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186385
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (short)28880))));
    var_15 *= ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (var_7)))) != (min((4154353748U), (((/* implicit */unsigned int) (unsigned char)13)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) : (((/* implicit */int) (signed char)99)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0])), (arr_1 [i_0] [i_0]))))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) (~(var_12)))), ((-(1655679346U)))))));
                arr_8 [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (-445388048)));
                arr_9 [i_1] = ((/* implicit */unsigned short) min((((arr_0 [i_0] [i_0]) >> (((((/* implicit */int) var_4)) - (56624))))), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_0]))));
            }
        } 
    } 
}
