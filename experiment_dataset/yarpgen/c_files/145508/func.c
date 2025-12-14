/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145508
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) > (var_4)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) arr_0 [i_0]);
                var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_2 [i_1] [i_0]) > (arr_2 [i_1] [i_0])))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [(short)19] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1])))))));
            }
        } 
    } 
    var_12 ^= ((/* implicit */unsigned short) var_5);
    var_13 = ((/* implicit */_Bool) ((unsigned char) var_3));
}
