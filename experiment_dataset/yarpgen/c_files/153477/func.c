/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153477
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = (((-(arr_3 [i_1 - 1] [i_1 - 1]))) == (((/* implicit */unsigned long long int) var_12)));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) ? (((arr_0 [(unsigned char)0]) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) var_10))) - (min((((/* implicit */long long int) (unsigned char)243)), (1738734166542542638LL)))))));
}
