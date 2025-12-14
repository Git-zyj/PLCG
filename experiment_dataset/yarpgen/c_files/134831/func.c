/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134831
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (-(arr_3 [i_0] [i_0] [i_0])));
                arr_6 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)-15853)) ? (36028797018963968LL) : (((/* implicit */long long int) ((/* implicit */int) (short)1)))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) (+(var_5)));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_5), (((/* implicit */long long int) var_1)))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) <= (((((/* implicit */_Bool) (~(var_5)))) ? (((var_9) | (var_10))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9)))))));
    var_12 = var_3;
}
