/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183505
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
    var_18 = ((/* implicit */unsigned int) var_8);
    var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(var_15)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))));
    var_20 = var_5;
    var_21 = ((((/* implicit */_Bool) -1765726508)) ? (-8911508292692709526LL) : (((/* implicit */long long int) ((/* implicit */int) (short)24771))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_1 [i_1 - 3] [i_0 - 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_1 - 3] [i_0 - 2])))));
                arr_6 [i_1] [(unsigned char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24771))) : (var_5))) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))))) ? (((/* implicit */int) max((arr_1 [i_0] [i_0]), (min((var_0), (var_7)))))) : (((/* implicit */int) var_1))));
            }
        } 
    } 
}
