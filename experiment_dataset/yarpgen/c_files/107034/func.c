/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107034
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
                var_18 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)134)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-32))))) ? (((1045271902U) / (3249695393U))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)61315), (var_13)))))))));
    var_20 |= ((/* implicit */unsigned char) min((67108863U), (((/* implicit */unsigned int) var_6))));
}
