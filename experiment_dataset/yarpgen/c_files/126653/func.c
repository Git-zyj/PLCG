/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126653
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
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-29))))) : (var_11))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (min((7874300889656955534LL), (((/* implicit */long long int) 2147483647))))))), (min((var_2), (((/* implicit */unsigned long long int) var_12))))));
    var_16 = var_4;
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_6 [i_0] [i_1]))))));
                var_17 = ((/* implicit */short) arr_6 [i_0] [i_0]);
            }
        } 
    } 
}
