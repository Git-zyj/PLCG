/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125774
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
    var_12 = 2116161273;
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) | (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)42454)) : (((/* implicit */int) arr_0 [i_0]))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54)))))))) ? (max((((/* implicit */unsigned long long int) ((var_11) * (arr_3 [i_0 - 3])))), (var_8))) : (((/* implicit */unsigned long long int) ((int) var_4)))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_6);
}
