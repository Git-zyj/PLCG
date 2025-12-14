/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_17 += ((((((-127 - 1) ? 8796093022207 : 105))) ? (~118) : (1 < 0)));
        var_18 = (((((1 ? 9980185812189714192 : 417))) ? 67108864 : ((64 ? 64 : 594171658))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_19 = (max((((4143248987221271200 ? 594171666 : 1))), (9980185812189714192 * 8466558261519837424)));
        var_20 = (((-104 ? 4687 : 9980185812189714192)) >= (((max(-8071, -14742)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                arr_10 [i_2] [19] [i_3] = (((max(3751466407, -14742))) ? (3700795637 ^ -8071) : (~0));
                var_21 = (max(var_21, ((((((64 ? (((594171666 ? 8071 : 31715))) : 3700795630))) * ((3871619412 ? 26414 : 0)))))));
                var_22 = (((((-(0 * 0)))) ? (((637856130 ? -972387337 : -20361))) : (4761684806446938679 | 38)));
            }
        }
    }
    #pragma endscop
}
