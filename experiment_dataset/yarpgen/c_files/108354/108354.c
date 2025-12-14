/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_1 > var_3);
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 ^= ((-1652859037 ? (((!(-2003011682 >= -1014218016)))) : var_7));
                var_14 = (max(var_0, (((var_1 && ((max((arr_3 [i_1]), (arr_3 [i_0])))))))));
                var_15 += ((var_8 << (!var_4)));
                var_16 = var_3;
            }
        }
    }
    var_17 = (max((min(var_6, (!var_9))), -32746));
    #pragma endscop
}
