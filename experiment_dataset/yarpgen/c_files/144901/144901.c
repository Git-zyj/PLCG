/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_2, ((-var_9 ? 1995119501 : ((max(119, var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = ((min((arr_0 [i_0] [i_1]), (arr_1 [i_0] [i_1]))));

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_0] [10] [1] [10] [i_0] = ((((~269943672) ? 120 : 3803423038)));
                        var_19 = (((-(arr_9 [8] [i_2] [i_2 - 2] [i_2]))));
                    }

                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_2] [10] = ((~(((-2 != (arr_12 [i_2 - 2] [i_2] [7] [i_2 - 2] [i_2]))))));
                        var_20 -= ((4294967295 ? (((arr_1 [i_2 + 1] [i_2 - 2]) << (-6180819933815175825 + 6180819933815175825))) : (arr_1 [i_2 - 2] [i_2 - 3])));
                        var_21 = (max(var_21, ((min((max(((var_6 ? var_3 : var_2)), ((max(5282, (arr_0 [i_4] [i_4])))))), ((min(var_4, (max(var_2, var_4))))))))));
                        arr_16 [i_0] [i_1] [i_1] [7] [i_4] = -119;
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [5] [i_2] [i_5] = (min((min(((((arr_2 [i_5]) == var_6))), (min(564184171, (arr_17 [i_0] [i_0] [i_0]))))), -23379));
                        arr_20 [i_5] [i_5] [i_5] [i_5] = ((((((arr_1 [i_2 + 1] [i_2 - 3]) ^ 23378))) == (min(((max((arr_7 [4] [9] [i_1] [7]), var_12))), (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_14 [i_0] [4] [i_0] [1] [i_0]) : var_3))))));
                        var_22 = 272830587;
                    }
                    var_23 = -119;
                }
                arr_21 [i_0] [i_1] [i_0] = ((((((arr_14 [i_0] [i_1] [i_1] [i_0] [5]) ? (arr_0 [2] [i_0]) : (~var_10)))) ? -31003 : ((-23375 | ((max(23378, -31003)))))));
                arr_22 [7] = (max((((arr_2 [i_1]) * var_12)), var_7));
            }
        }
    }
    var_24 = var_2;
    #pragma endscop
}
