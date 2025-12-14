/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112447
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
    var_17 = ((/* implicit */signed char) var_5);
    var_18 = ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 ^= arr_1 [i_2] [i_1];
                    var_20 = (i_0 % 2 == zero) ? (((/* implicit */signed char) max((((((((/* implicit */int) arr_7 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_0])) + (153))))), (((((-1823250205) + (2147483647))) >> (((/* implicit */int) (signed char)0))))))) : (((/* implicit */signed char) max((((((((/* implicit */int) arr_7 [i_0])) + (2147483647))) >> (((((((/* implicit */int) arr_7 [i_0])) + (153))) - (101))))), (((((-1823250205) + (2147483647))) >> (((/* implicit */int) (signed char)0)))))));
                }
            } 
        } 
    } 
}
