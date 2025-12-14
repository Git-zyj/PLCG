/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150077
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (signed char)3))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                {
                    var_11 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((arr_6 [5U] [5U] [5U] [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) var_9)))) | (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [18U])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)51697), (((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2 - 2] [i_2])))))) : (((unsigned int) (short)-30173))))));
                    arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) (~(var_0)));
                    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((unsigned short) (~((~(29U)))))))));
                    var_13 = ((/* implicit */int) arr_7 [i_1]);
                }
            } 
        } 
    } 
}
