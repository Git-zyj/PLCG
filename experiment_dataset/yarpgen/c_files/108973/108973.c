/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((100 & 24323) >> (var_9 >= 64134)))) ? (max(var_9, (1 + 15009))) : ((-var_0 ? (var_2 / var_4) : (((var_0 ? var_5 : var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = ((var_11 ? var_2 : ((var_0 ? (~var_9) : (((((arr_2 [i_0]) && (arr_4 [i_0])))))))));
                var_14 ^= (((min(var_7, (arr_6 [i_1 + 3] [2])))) || ((var_4 || (((0 ? 1866968698 : -1432832284))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_15 = 1;
                    var_16 = var_9;
                    var_17 += ((max(1386, var_2)));
                }
                var_18 = (max(var_18, ((((1402 % var_0) ? (((((1 ? 533301358 : (arr_2 [i_0]))) != (((1862 ? 1 : var_6)))))) : ((min(983266574, 1))))))));
            }
        }
    }
    #pragma endscop
}
