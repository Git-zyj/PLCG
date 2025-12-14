/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = 55887;
                    var_11 = ((((56670195 % 17592186028032) ? 115 : 33426)));
                }
            }
        }
    }
    var_12 = 255;

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_13 = (!(((((min(11252977528687298799, var_7))) ? 12681686433659804007 : (((min(var_7, var_3))))))));
        var_14 = (max(((((min(17592186028032, (arr_8 [i_3])))) ? 7193766545022252817 : (var_6 == 36304))), 32547));
        var_15 -= ((((((28453 ? 18573 : var_4)))) | (31128 - -27334)));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_16 = (max(((24428 ? 32750 : (arr_3 [4]))), ((min(-32750, -2)))));
        var_17 ^= 4;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_18 = ((((var_3 ? (arr_7 [i_5] [i_5]) : 31110))) ? 29231 : var_1);
        var_19 = (var_4 / var_4);
        var_20 = ((29544 ? -23 : -5901302568393507670));
    }
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        var_21 = max(13692377847610957074, 107);
        arr_18 [i_6] = var_9;
    }
    #pragma endscop
}
