/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152748
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
    var_10 = ((/* implicit */signed char) (-(772100455U)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] [(unsigned char)4] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-31291)) & (-1470286714)));
                arr_5 [(unsigned char)10] [i_0] [(short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10132)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((((/* implicit */unsigned int) (short)-1753)), (arr_1 [i_0] [i_1])))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) (unsigned short)24517);
    var_12 = ((/* implicit */int) var_4);
}
