/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (((min(1, (arr_1 [i_0] [i_0 - 2]))) * (((min(241, var_3))))));
        arr_5 [i_0] = var_8;
        var_13 = ((-(max(((var_11 ? var_12 : var_3)), (var_7 * -88)))));
        arr_6 [i_0] = (~(820882457 + 1));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 = (max(var_14, ((((((((min(614848893, 21))) ? var_4 : var_1))) || var_5)))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_15 = (min(var_15, (((((((max(64893, var_0))) ? 4398046511103 : (1 / var_6))) / (((-((max(0, 1147)))))))))));
            var_16 = (max(var_16, ((max(0, 25518)))));
            var_17 += (arr_13 [i_2]);
            var_18 = ((32596 * ((var_3 * (min(var_7, 6016704130262115685))))));
            var_19 = (max((min((var_2 / 32766), (599 / -293102502194349117))), var_11));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_20 = (((!var_4) * (!var_12)));
            var_21 = (min(var_21, (((-((var_4 ? var_5 : (arr_3 [i_1]))))))));
            arr_17 [i_3] [i_1 + 1] = ((var_10 ? ((((arr_3 [i_1]) || -614848916))) : -var_12));
        }

        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
        {
            arr_20 [i_1 - 1] [i_4] = var_2;
            var_22 = (max(var_22, ((((1 + var_6) / 452601543)))));
            var_23 = ((((~(max(-22684, var_12)))) - var_1));
        }
        for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_24 ^= var_1;
            var_25 = var_1;
            var_26 |= ((~((min(185, 247)))));
        }
        arr_23 [i_1] = 1935993591596531207;
    }
    var_27 = ((~(((!((max(64934, -614848916))))))));
    var_28 = (max(var_28, var_3));
    var_29 |= ((-1935993591596531228 ? ((var_1 ? ((2 ? var_2 : -5140653266341688755)) : 1935993591596531203)) : ((max(143, (~452601523))))));
    var_30 = (max(var_30, ((((~var_9) / ((~(min(1, var_9)))))))));
    #pragma endscop
}
