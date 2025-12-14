/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_5 ? (((((17236003720143869588 ? var_4 : var_4))) ? ((max(1, var_1))) : var_9)) : var_6));
    var_17 = -12421;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = (min(var_18, (((((-23302 ? 3674 : (3665 > var_3))) == 61835)))));

            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                var_19 = (max(var_19, ((((max(var_11, 7)) - ((max(61835, 1486985055))))))));
                arr_6 [i_0] [i_1] [i_1] = max(((0 >= (((7228428741108136734 ? 38 : var_7))))), 1);
                var_20 = 3;
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_21 = 78;
                var_22 = -925917570;
            }
        }
        var_23 = (3700 % -925917570);
        var_24 = (max(var_24, (((7 ? (((3 / -925917570) ? 12987424333688367775 : (12987424333688367775 * var_6))) : (((var_11 ? 38 : var_5))))))));
    }
    #pragma endscop
}
