/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117709
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
    var_18 = var_2;
    var_19 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) (unsigned char)20)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 22; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (112327477U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0 + 2] [i_0] [i_0]))));
                var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((var_15), (((/* implicit */short) (unsigned char)185))))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)1)))))) >> (((max((((((/* implicit */int) (short)-30321)) / (arr_0 [19LL]))), (max((((/* implicit */int) (unsigned short)37201)), (arr_0 [i_0 + 4]))))) - (37189)))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(max((((var_9) ? (((/* implicit */int) (unsigned short)26)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((_Bool) var_2))))))))));
            }
        } 
    } 
}
