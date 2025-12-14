/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159603
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) arr_4 [i_1]);
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((arr_5 [i_0] [i_0]) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_0 [i_1])))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) (unsigned short)5541)) ? (var_16) : (((/* implicit */int) (unsigned short)12458)))), (((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned short) (short)21590))))))) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (206)))));
                var_18 = ((/* implicit */unsigned int) arr_1 [i_1] [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) var_1)), ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)4092)) > (((/* implicit */int) (unsigned short)38610)))))))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)247))));
}
