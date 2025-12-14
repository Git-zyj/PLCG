/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((var_15 ? var_15 : var_12)), (var_2 > var_13)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_17 &= (max((arr_2 [i_2]), (max(var_9, (0 > -4677661920511819788)))));
                    var_18 = (min(var_18, 18446744073709551615));
                    arr_7 [i_2] [i_2] [i_1] [i_0] = ((-((var_1 ? (min((arr_6 [i_1] [i_1] [i_1]), 102)) : -76))));
                }
                var_19 -= ((255 << (var_9 - 3951092251639790844)));
                var_20 = (max(var_20, ((max((((arr_3 [i_0]) ? (((arr_3 [9]) ? 69 : 9)) : (arr_0 [i_0]))), ((((!var_15) < ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))))))));
                arr_8 [i_0] = var_1;
                var_21 -= ((!(!var_5)));
            }
        }
    }
    var_22 = ((((!(15900 % 794411487)))));
    var_23 = (max(var_23, (((!((((((0 ? var_0 : 0))) ? var_8 : (-2147483647 - 1)))))))));
    #pragma endscop
}
