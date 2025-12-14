/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124935
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
    for (unsigned char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0 - 2] = arr_4 [i_0 - 2] [i_1] [i_1];
                arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0 + 1])))) ? (var_1) : (((/* implicit */unsigned int) max((((/* implicit */int) var_7)), (-785333044))))))) && (((/* implicit */_Bool) (unsigned char)31))));
                arr_8 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-29189))));
                arr_9 [i_1] [i_1] = ((/* implicit */long long int) 825662672U);
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (signed char)-114))));
            }
        } 
    } 
    var_12 = ((((/* implicit */_Bool) (short)29197)) || (((/* implicit */_Bool) var_6)));
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) (signed char)-117)) : (1145827512)))));
}
