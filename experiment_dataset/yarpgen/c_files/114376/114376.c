/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_12));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_18 = (((31 << 3) % ((84 << (2938378638006966139 - 2938378638006966117)))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 *= 8869341547627911543;
                    arr_8 [i_0 - 1] [i_1] [i_2] = ((-28529 * (-8869341547627911544 >= 49038)));
                    arr_9 [i_2] [i_1 + 1] [i_1] |= ((-(2197467823 ^ 1)));
                    var_20 = ((~((0 << (4106766244 - 4106766197)))));
                }
            }
        }
        var_21 = 1;
        var_22 += (((!1) % (1335582278675239154 | -5)));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_23 = 1328804917;
        arr_12 [i_3] = (((0 * -1426) % (~17677803459689414565)));
        arr_13 [i_3] = ((((47264 >> (135 - 117)))) - (-3176667065380776757 / -31674));
        arr_14 [i_3] = 0;
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = ((!17) / (((-59 + 2147483647) >> (1286624403 - 1286624389))));
        arr_18 [i_4] &= ((((((0 | 14) && 450))) & -63));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                {
                    arr_27 [i_5] = (-2451084342792103499 / 21179);
                    var_24 = (-2019620889659718450 % 8796093022207);
                    var_25 = (min(var_25, (((~(~1))))));
                }
            }
        }
        var_26 *= (((120 / 7) / -128));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    {
                        var_27 = ((!(((127 << (-3 + 6))))));
                        var_28 = (min(var_28, (-3906331493 * -30561)));
                        var_29 = 1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
