/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((!-var_10) + ((-(var_7 - var_6)))));
    var_18 = (var_13 / var_1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = (var_11 - 65519);
        var_20 = 0;
        var_21 = (!-804462606);

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_22 *= (((arr_0 [i_0]) - var_8));
            var_23 = (!1);
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_24 = (max(var_24, (((+(((var_13 + 2147483647) >> (var_11 + 26))))))));
            var_25 = ((!var_4) != 22913);
            var_26 += (!804462606);
            var_27 = (7149639182175973035 | 1);
        }
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            var_28 += (16479 != 25204);
            var_29 = (13572 - -5553813314683583957);
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_30 = (((arr_9 [i_4]) >= var_14));
            var_31 &= (arr_0 [i_0]);
            arr_13 [2] = (!-416267392);
        }
    }
    var_32 = var_3;
    #pragma endscop
}
