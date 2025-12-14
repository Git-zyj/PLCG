/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166457
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) 1711749574)), (var_7))), (((/* implicit */long long int) (((!(var_17))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_11)))) : (((/* implicit */int) (!(var_2))))))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
                arr_5 [i_0] = max((((/* implicit */long long int) (((+(((/* implicit */int) var_11)))) | (((/* implicit */int) min(((short)12335), (((/* implicit */short) arr_0 [i_0 + 3] [i_0])))))))), (var_7));
                var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 9679228620095962274ULL))) ? (((((/* implicit */_Bool) 14)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) min((arr_4 [i_0] [i_1 - 1]), (((/* implicit */int) var_2))))) ? ((+(arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((int) var_0)))))));
            }
        } 
    } 
    var_22 *= ((/* implicit */unsigned short) (_Bool)0);
}
