/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105385
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0 - 2]) >> (((((var_3) | (arr_1 [i_0 - 1] [i_0 - 1]))) - (16019126814525511634ULL)))))) || (((/* implicit */_Bool) min((((/* implicit */short) (signed char)120)), ((short)10669))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_0 [(unsigned short)21]))));
    }
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
    var_17 = ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            {
                arr_8 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1]))))) << (((/* implicit */int) var_6))));
                arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)32759)) * (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))))), (min((((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_1 - 1])), (3672206816U)))));
                var_18 = ((/* implicit */short) arr_3 [i_1 - 1] [9LL]);
            }
        } 
    } 
}
