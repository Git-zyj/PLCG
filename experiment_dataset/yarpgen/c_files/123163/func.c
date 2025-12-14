/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123163
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
    var_15 = ((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) | (min((var_8), (((/* implicit */int) (unsigned short)21607)))))) : (max((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_13)))), (((var_9) | (((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) arr_4 [i_0]);
                    arr_8 [i_2] = ((/* implicit */unsigned char) (~(var_9)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)43928)), (3033409422U)))), (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) var_11)))))), (((/* implicit */unsigned long long int) var_10))));
    var_17 = ((/* implicit */long long int) (~(min((4294967285U), (((/* implicit */unsigned int) var_9))))));
}
