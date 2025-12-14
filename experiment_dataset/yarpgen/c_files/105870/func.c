/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105870
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
    var_10 = ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_2)))))) ? (min((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) (short)-111)), (var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0 - 1] [i_0] [i_1 - 1] [i_1 + 1] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((arr_5 [i_0] [i_2 + 4]) % (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_3)), (arr_3 [i_0]))))))) | (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)107)) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) max((var_5), ((unsigned short)13184)))))))))) : (((/* implicit */long long int) ((((arr_5 [i_0] [i_2 + 4]) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_3)), (arr_3 [i_0]))))))) | (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)107)) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) max((var_5), ((unsigned short)13184))))))))));
                    arr_10 [i_0 - 1] [i_2 + 4] [i_2] [i_0] = ((/* implicit */int) ((arr_2 [i_0] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    var_11 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1 + 1]);
                }
            } 
        } 
    } 
}
