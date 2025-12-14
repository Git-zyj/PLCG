/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11156
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
    var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_2] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_12)))) ? (max(((+(var_6))), (((/* implicit */long long int) var_16)))) : ((-((-(var_13)))))));
                    arr_10 [i_0] [(unsigned char)15] [i_2] = ((/* implicit */unsigned short) var_1);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_12);
    var_19 = ((/* implicit */_Bool) (-(min(((+(var_15))), (((/* implicit */unsigned long long int) var_12))))));
}
