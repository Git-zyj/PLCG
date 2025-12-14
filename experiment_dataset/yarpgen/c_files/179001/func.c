/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179001
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
    var_12 |= ((/* implicit */unsigned short) (unsigned char)50);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)6)) >> (((3405851144U) - (3405851138U)))))) && (((/* implicit */_Bool) (unsigned short)31772))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_1 + 1] [i_0] = ((/* implicit */signed char) ((889116132U) == (127U)));
                arr_8 [i_1] [(short)4] [i_1] &= ((/* implicit */unsigned short) 3405851151U);
                var_14 ^= (unsigned short)46469;
                arr_9 [i_0] [i_1] [(unsigned short)4] &= ((/* implicit */short) (unsigned char)2);
            }
        } 
    } 
    var_15 ^= var_0;
    var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)19067)) || (((/* implicit */_Bool) (unsigned char)92))));
}
