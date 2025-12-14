/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122680
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)30)) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (arr_2 [i_1 + 1] [i_1 + 1]))), (((((/* implicit */int) arr_5 [i_1] [i_1 - 4] [i_1 - 1])) | (((/* implicit */int) (signed char)-53))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 4] [i_1 - 4] [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((12ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) < (((/* implicit */int) (signed char)-62)))))) : (8823751868780583551ULL)));
            }
        } 
    } 
    var_11 &= ((/* implicit */unsigned short) (short)-29577);
}
