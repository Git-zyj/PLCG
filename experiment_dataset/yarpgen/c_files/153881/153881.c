/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -56;
    var_17 = (min((min(4107678690, (max(var_0, var_12)))), ((((!var_6) >= 7722)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = -7722;
        var_19 = ((((((-7701 % var_10) == -var_14))) % 7701));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_20 = (arr_2 [i_0] [i_1]);

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_7 [i_0] [i_1] [i_1] = (arr_5 [i_0] [i_1] [i_1] [i_2]);
                arr_8 [i_0] [i_1] [i_1] [i_0] = (((arr_6 [i_1] [i_1] [i_2]) ? var_13 : (arr_3 [i_2])));
            }
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            arr_13 [3] [i_0] [i_0] = 7701;
            var_21 += ((!((min((arr_1 [i_3]), (!7706))))));
        }
    }
    var_22 += var_6;
    var_23 = ((((var_8 ? (~63281) : var_6)) ^ 188));
    #pragma endscop
}
