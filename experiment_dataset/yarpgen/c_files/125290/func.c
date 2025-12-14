/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125290
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
    var_20 = var_18;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [(unsigned short)16] = arr_3 [i_1] [(unsigned short)10];
                arr_6 [(unsigned short)0] [(unsigned short)10] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned short) (unsigned short)65535))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (unsigned short)32)) : (((/* implicit */int) (unsigned short)3)))) : (((/* implicit */int) (unsigned short)54533))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)13322)), (((((/* implicit */int) var_11)) / (((/* implicit */int) var_12))))))) || (((/* implicit */_Bool) (unsigned short)23981))));
}
