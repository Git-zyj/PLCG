/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121133
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
    var_19 = ((/* implicit */int) ((min((((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_1))))), (var_7))) - (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((0) == (((/* implicit */int) var_1))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_21 *= (((-(((/* implicit */int) ((_Bool) (unsigned short)65533))))) < (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)175))))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) arr_2 [i_1])))))))));
                    var_22 -= ((unsigned long long int) (-(arr_0 [(short)7])));
                    arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_14)), ((unsigned short)30119)))) && (((_Bool) var_4))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2998192896U))))) : (((/* implicit */int) min(((short)-16933), (((/* implicit */short) (signed char)93)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) var_12);
    var_24 &= ((/* implicit */unsigned long long int) ((var_9) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) ((_Bool) max((((/* implicit */long long int) 1792)), (-4863813711085543792LL)))))));
}
