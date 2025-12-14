/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_7);
    var_17 = ((var_10 & (max((var_7 * var_15), var_1))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (max(var_18, ((min((arr_2 [i_0]), ((var_0 / (arr_3 [14] [14]))))))));
        arr_4 [i_0] = (!(((~(arr_2 [i_0])))));
        var_19 = (max(((15802781249238242614 ? 1841069683 : (arr_0 [i_0] [i_0]))), (~var_7)));

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                arr_11 [i_0] = (i_0 % 2 == zero) ? ((((((((((arr_10 [i_1]) != var_14)))) < (max(var_13, 2340343007768673795))))) >> ((((~(((arr_1 [i_0] [i_0]) ? (arr_6 [i_0] [i_1 + 1] [i_1 + 1]) : var_0)))) - 18446744071712564680)))) : ((((((((((arr_10 [i_1]) != var_14)))) < (max(var_13, 2340343007768673795))))) >> ((((((~(((arr_1 [i_0] [i_0]) ? (arr_6 [i_0] [i_1 + 1] [i_1 + 1]) : var_0)))) - 18446744071712564680)) - 18446744071563540611))));

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_20 = (min(var_20, (((~((~(max(9192754625888465320, 4245478261)))))))));
                    var_21 ^= (arr_12 [i_1] [0] [4] [i_1]);
                }
            }
            var_22 = (((1 > 0) == (arr_2 [i_0])));
        }
        var_23 -= ((~(arr_9 [1])));
    }
    #pragma endscop
}
