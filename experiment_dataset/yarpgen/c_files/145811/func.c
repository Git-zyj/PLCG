/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145811
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
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (var_3)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    var_16 = ((/* implicit */int) min((var_11), (((/* implicit */long long int) (+((+(var_3))))))));
                    var_17 = ((/* implicit */unsigned int) var_7);
                    var_18 = ((/* implicit */unsigned long long int) var_8);
                    arr_7 [i_1] [(unsigned char)0] [i_2 + 1] = min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))));
                }
                arr_8 [i_0] [i_1 - 1] [i_1] = ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) var_1)), (min((var_2), (((/* implicit */unsigned long long int) var_5))))))));
            }
        } 
    } 
}
