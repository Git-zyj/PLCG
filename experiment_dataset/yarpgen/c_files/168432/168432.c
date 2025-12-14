/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_18 ^= (((((((~49) ? (~8) : ((max(0, 0))))) + 2147483647)) >> (((16548741290702976994 << 1) - 14650738507696402341))));
        arr_4 [i_0] [i_0] = var_10;
        var_19 = (((((var_16 ? ((var_10 ? var_2 : var_15)) : (((var_2 ? 1 : var_8)))))) ? (!141) : ((-var_5 ? ((1 ? var_5 : 19731)) : var_12))));
        var_20 ^= (((1 > 8) ? ((var_4 ^ ((0 ? 3329650894252737303 : var_16)))) : (max((-2047270307 && 1), (min(0, -4991))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1 + 1] = -var_7;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 = (min(var_21, (((4270382604952645340 ^ (((~((max(0, var_4)))))))))));
            arr_11 [i_1] = 18446744073709551605;
            var_22 = ((var_3 | (~236)));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 ^= ((var_11 ? ((0 ? -var_16 : var_17)) : (min(2047270307, ((4270382604952645340 ? -120 : 9859))))));
            arr_14 [i_1] = var_12;
            arr_15 [i_3] = (max(((183 ? var_13 : var_7)), (min(var_13, var_17))));
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        arr_19 [i_4] = -1;
        var_24 ^= (var_7 < 3329650894252737303);
        arr_20 [i_4 + 2] [i_4] = var_9;
        var_25 ^= (!var_1);
    }

    for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
    {
        var_26 ^= -4270382604952645341;
        var_27 = ((107 || ((min(1, var_3)))));
    }
    for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = (min(-4270382604952645341, ((max(var_17, var_17)))));
        var_28 = (max(-20, (14249841070805794025 < -8)));
    }
    #pragma endscop
}
