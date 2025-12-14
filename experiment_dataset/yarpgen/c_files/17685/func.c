/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17685
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
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */unsigned char) (~(arr_1 [i_0 + 1])));
                var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-72)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (unsigned short)4986);
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_11)))))) <= (var_6))) ? ((~(((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_7))));
    var_16 = var_3;
    var_17 = ((/* implicit */long long int) ((signed char) min((-1132628529), (((/* implicit */int) (unsigned short)4986)))));
}
