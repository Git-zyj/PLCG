/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163666
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
    var_11 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -7104690476567015401LL)))))) <= (var_7)))), (var_3)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)211)), (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_4))))) <= (((((/* implicit */_Bool) (+(var_1)))) ? (min((-22LL), (((/* implicit */long long int) (signed char)110)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 3] [i_1 - 2])))))));
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(var_1)))), (5584432020709664999LL)));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) max((((int) ((((/* implicit */_Bool) -22LL)) || (((/* implicit */_Bool) 9223372036854775807LL))))), (((/* implicit */int) (unsigned short)6)))))));
}
