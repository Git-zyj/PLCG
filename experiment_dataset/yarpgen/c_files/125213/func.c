/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125213
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (short)-8113)) ? (((/* implicit */long long int) arr_0 [i_0 - 1])) : (((((/* implicit */_Bool) (short)-8113)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8113))) : (var_7))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-8115))))))));
                arr_4 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned int) arr_1 [i_0 - 1]))), (var_2)));
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)52)) && (var_1))))) : (8188049885725003182LL))) / (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) < (var_18))) || (((/* implicit */_Bool) -4307882833991326335LL))))))));
                var_22 = ((/* implicit */long long int) (-(((/* implicit */int) (short)0))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
}
