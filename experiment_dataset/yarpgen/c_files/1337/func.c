/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1337
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
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((signed char) min((arr_4 [i_0 - 1] [i_0 - 4] [i_0 - 4]), (arr_4 [i_0 - 2] [i_0 - 1] [i_0 - 1]))));
                    arr_8 [i_0 - 4] [(_Bool)1] [(unsigned char)2] = (~(((((/* implicit */_Bool) (unsigned char)88)) ? (min((-955237130), (((/* implicit */int) (short)-2798)))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), ((unsigned char)167)))))));
                    var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) ((signed char) (signed char)78))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_1 [i_0 + 1])))), (((/* implicit */int) arr_4 [i_0] [i_0 + 2] [i_0]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_9);
    var_16 = ((/* implicit */int) var_12);
    var_17 = ((/* implicit */signed char) ((unsigned long long int) ((var_1) ? (((/* implicit */int) ((var_9) >= (((/* implicit */int) (unsigned char)96))))) : (((/* implicit */int) var_3)))));
    var_18 += ((/* implicit */_Bool) var_9);
}
