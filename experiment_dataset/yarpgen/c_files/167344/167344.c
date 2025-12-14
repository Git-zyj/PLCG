/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_10 ? var_18 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = ((53 ? ((((8636291366854585699 ? -634323087 : 12306919990267882826)))) : 3541885723));
                var_22 = (var_5 | 268435456);
            }
        }
    }
    var_23 = 268435456;
    var_24 = ((-((var_19 ? (~var_15) : var_5))));

    /* vectorizable */
    for (int i_2 = 4; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_25 = var_10;
        var_26 = 7;
        var_27 = var_0;
    }
    for (int i_3 = 4; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_28 = var_0;
        var_29 = 52365;
    }
    for (int i_4 = 4; i_4 < 20;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            var_30 = -var_8;
            var_31 = (((arr_9 [i_5 + 2] [i_5 - 2]) ? (((arr_9 [i_5 + 2] [i_5 - 2]) ? (arr_5 [i_5 + 2] [i_5 - 2]) : (arr_5 [i_5 + 2] [i_5 - 2]))) : var_14));

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_32 = (((~-505377206) ^ 753081573));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_33 = (!var_14);
                            arr_25 [16] [i_5] [i_4] [i_5] [i_5] [i_5] [16] = ((-7437112063160766218 ? ((-(arr_7 [i_5]))) : var_1));
                        }
                    }
                }
                var_34 = ((279223176896970752 ? ((-16 ? 3541885723 : -7869854677552872835)) : ((min(((753081573 ? (arr_8 [i_5]) : 1)), ((var_17 ? var_12 : (arr_23 [i_4] [i_4] [i_4] [i_5] [i_5] [0] [i_6]))))))));
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            var_35 = var_16;
            var_36 -= var_4;
        }
        var_37 = ((-((-0 - (arr_24 [i_4] [i_4] [1] [1] [i_4] [i_4] [i_4 - 3])))));
        var_38 = (arr_4 [i_4] [i_4]);
    }
    for (int i_10 = 4; i_10 < 20;i_10 += 1) /* same iter space */
    {
        arr_31 [i_10] = -110;
        var_39 = ((((((arr_23 [i_10 + 1] [i_10] [i_10 + 2] [i_10 - 1] [i_10 - 3] [i_10 - 1] [i_10]) ? (arr_23 [i_10] [i_10] [1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [5]) : 3541885723))) ? (((arr_23 [7] [i_10] [i_10] [i_10 - 1] [i_10] [i_10 - 1] [0]) ? (arr_23 [i_10] [i_10] [i_10] [i_10 - 1] [i_10] [i_10 - 1] [13]) : var_1)) : 7656));
    }
    #pragma endscop
}
