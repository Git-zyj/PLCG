/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += -var_4;
    var_19 = (min(var_19, var_2));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (arr_0 [i_0]);
        var_21 &= (max(-6968141815171912534, (((arr_0 [i_0]) ? (((1723941608 >> (var_8 + 14609)))) : (7746488381310209910 | 12)))));
        var_22 = (max(var_22, var_15));
        var_23 = var_4;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_24 = 7746488381310209910;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    var_25 = (min(var_25, -7746488381310209919));
                    arr_14 [i_1] [i_1] [i_1] [i_1] = (var_16 / -3462214992891582222);
                    var_26 *= (((2 ? -7746488381310209911 : 1723941630)));
                }
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    var_27 = (max(var_27, var_8));
                    var_28 = (((var_0 / 4213307859796264652) ? var_14 : var_2));
                    arr_17 [i_1] = var_12;
                }
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    var_29 = 4213307859796264660;
                    var_30 = ((0 ? var_4 : var_14));
                }
                var_31 ^= (((9786 << (((arr_18 [i_3] [i_1] [i_3] [i_1] [i_1]) - 19547)))));
            }
            var_32 = var_9;
            var_33 &= 3475037065;
            var_34 = -var_17;
        }
        var_35 = var_3;
    }
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        var_36 = (min(var_36, 1380723080));
        var_37 = (arr_21 [i_7]);
    }
    #pragma endscop
}
