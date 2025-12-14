/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125590
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3834222736U)) ? (((/* implicit */unsigned int) -536870912)) : (1420075109U)));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) var_4))) : (var_8)));
    var_16 -= ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) 1672597539)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32609))))))) / (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), ((-(1672597532))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_1] [i_1]))) ? (((int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_1 + 1])))) <= (min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) arr_4 [i_1]))))));
                var_17 = ((((/* implicit */int) arr_4 [i_1])) << (((((/* implicit */int) (signed char)(-127 - 1))) + (137))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((-376865305), (1672597541)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) > (((/* implicit */int) arr_1 [i_1 + 1]))))) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))));
            }
        } 
    } 
}
