/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155701
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
    var_13 = (+(((/* implicit */int) (unsigned char)0)));
    var_14 = ((/* implicit */unsigned char) min((var_14), (max((var_4), ((unsigned char)112)))));
    var_15 ^= ((((-888184360) + (2147483647))) >> (((2147483647) - (2147483642))));
    var_16 = ((/* implicit */int) min((var_16), (var_0)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_17 ^= ((/* implicit */unsigned char) max((max((((/* implicit */int) arr_8 [i_2] [i_1])), (0))), (((((/* implicit */int) arr_8 [i_2] [i_2])) / (-236679008)))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) (unsigned char)138);
                    arr_10 [i_0] = ((/* implicit */int) arr_5 [i_0]);
                }
            } 
        } 
    } 
}
