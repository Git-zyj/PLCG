/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145921
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [(unsigned char)11] = ((/* implicit */unsigned int) var_6);
                arr_7 [i_0] [i_1 + 1] [i_1] = ((/* implicit */signed char) (short)-14197);
                var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (-1562991048))), (((/* implicit */int) max(((!(((/* implicit */_Bool) var_12)))), (((var_4) == (var_4))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
    var_19 = ((/* implicit */long long int) 1262258975U);
}
