/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140329
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_9)))) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))) : (((((((/* implicit */int) (short)-7313)) + (2147483647))) >> (((1061303678) - (1061303650))))))) : ((+(((/* implicit */int) ((_Bool) -1061303679)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                    arr_9 [i_2] [i_1] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24212)) + (var_7)))) ? (arr_5 [i_0] [i_1 - 3] [i_2]) : (((/* implicit */long long int) 1061303678))));
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((2147483647) << (((((/* implicit */int) var_6)) - (25939))))) : (((/* implicit */int) arr_6 [i_1 - 3] [i_1] [17] [17])))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) (short)(-32767 - 1));
                }
            } 
        } 
    } 
    var_13 *= ((/* implicit */short) var_5);
}
