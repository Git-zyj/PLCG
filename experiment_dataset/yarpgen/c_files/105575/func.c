/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105575
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
    var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((_Bool) var_10)) && (((_Bool) var_4)))))));
    var_15 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (short)-26963)))));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_3 [0ULL] [i_1] [(unsigned char)16]))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((-(arr_2 [i_0]))) >= (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_1]))))), (arr_2 [i_0])))));
            }
        } 
    } 
}
