/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 2664238058;
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((127 ? 0 : 1382093130)));
        var_16 = (((-17183 ? -2701371296 : -29293790)));
    }
    var_17 = var_3;

    for (int i_1 = 3; i_1 < 8;i_1 += 1) /* same iter space */
    {
        var_18 = (((((-2147483647 - 1) ? 12570527576797924114 : (~6174284527954837719)))) ? 2606038217 : ((~((32737 ? 18446744073709551615 : 0)))));
        var_19 = (((((4294967295 ? 1023 : -1742047469))) ? 2147483647 : 4294967292));
        var_20 = (!127);
        var_21 = (max(var_21, (((-((12625 ? 0 : -5270)))))));
        var_22 = 5876216496911627518;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2 - 1] = -3808816839;

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            arr_12 [i_2] [i_3] = (!4294967295);
            arr_13 [i_2] [6] |= ((4294967295 ? 4294967295 : 5876216496911627501));
            arr_14 [i_2] [i_3] = 1246555717;
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_23 = ((1623924126 ? 2497 : 0));
            var_24 = 27629;
            arr_17 [i_4] [i_4] [i_2 - 3] = (+-18446744073709551615);
            var_25 = (max(var_25, ((20 ? 1593595999 : -37))));
        }
    }
    #pragma endscop
}
