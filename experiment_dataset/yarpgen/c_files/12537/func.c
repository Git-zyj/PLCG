/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12537
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
    var_13 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((unsigned char) var_2))), (min((6331973558132063893LL), (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) (unsigned short)36895))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 -= ((/* implicit */unsigned short) ((((min((((/* implicit */long long int) arr_5 [i_1] [i_1 + 3] [i_1 + 1])), (1535745149321103639LL))) + (9223372036854775807LL))) >> ((((-(((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 3] [i_1 + 1])))) - (13579)))));
                    var_15 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) (unsigned char)48))))) ? (var_7) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)30))))))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((var_12) / (-7770336537392000124LL)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)0))))))));
}
