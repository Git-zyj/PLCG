/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163035
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
    var_11 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))), (((var_7) - (var_6)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_12 -= ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned char) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) var_2);
                    var_13 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (arr_6 [i_1] [i_1] [i_1])));
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((arr_6 [i_2] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [(signed char)6] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
}
