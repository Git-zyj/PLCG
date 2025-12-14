/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122952
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
    var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)209))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_8)))) & (((((/* implicit */int) (short)-30760)) | (((/* implicit */int) var_5))))))));
    var_22 = ((/* implicit */int) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (((~(((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])))) & (((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1]))))));
                arr_7 [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */int) (unsigned char)56)) / (((/* implicit */int) (short)-21827))))));
                arr_8 [i_1] [8ULL] [i_1] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))))) / (((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) var_8))))));
}
