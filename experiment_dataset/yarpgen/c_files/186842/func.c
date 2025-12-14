/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186842
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */int) var_15)), (var_17))) : (((/* implicit */int) var_6))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 3577111039U))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_16)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) : (min((((/* implicit */unsigned int) (short)(-32767 - 1))), (4294967286U)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [20LL] [8U] [i_0] = (~(min((((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) arr_7 [i_1] [i_2])))), (((/* implicit */unsigned int) var_11)))));
                    var_21 = ((/* implicit */unsigned short) max((-269194423), (((/* implicit */int) (short)-23124))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)2)) ? (-7118632950631920827LL) : (((/* implicit */long long int) 2895276351U))));
                }
            } 
        } 
    } 
}
