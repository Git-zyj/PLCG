/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (min(var_13, (((~(min(var_3, (max(var_0, var_7)))))))));
        var_14 = (min((min(((min(var_6, var_6))), (min(var_3, var_9)))), ((max(0, (~149))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_15 = ((min(49, 243)));
        var_16 |= (max(14267, (~754807878)));
        var_17 = var_6;
        var_18 |= max((max(var_10, var_7)), 97);
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_19 = ((~(-127 - 1)));
        arr_6 [i_2 - 1] |= -var_3;
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            var_20 = ((~(!var_1)));
            arr_11 [12] [i_4] [i_4] = min(-var_8, ((~(min(var_10, var_8)))));
            arr_12 [i_3] [i_4] = (max((min(var_10, ((min(var_0, var_11))))), (~var_2)));
        }
        var_21 += (min((~var_8), (min(var_2, var_10))));
        var_22 = ((~(!18446744073709551597)));
        var_23 = ((-((~(!var_10)))));

        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            var_24 = (min((max((~var_7), 1)), (((!((min(var_2, var_8))))))));
            arr_16 [i_5] [i_5] [i_5 + 1] = (min((((!((min(var_0, var_3)))))), (min(((max(var_5, var_1))), (max(var_7, var_7))))));
            var_25 = (max((-127 - 1), 24292));
            arr_17 [i_5] [i_3] = (max((~var_11), var_10));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_21 [i_6] [i_6] [i_6] = (min(((min(var_10, (!var_11)))), (max((min(18446744073709551586, 149)), var_11))));

            /* vectorizable */
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                var_26 = (!var_10);
                var_27 += var_1;
            }
            arr_25 [i_6] [i_6] [i_3] = (max((!85), (min((max(258048, 149)), ((max(-1147176661, 149)))))));
            arr_26 [i_6] [i_6] = var_11;
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_28 = max(((min(-27089, -118))), (max((min(-539147721, -8768)), var_11)));
        var_29 = min(1884790262767028232, 29538);
        var_30 = (!5);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_31 = var_8;
        var_32 = var_9;
    }
    #pragma endscop
}
