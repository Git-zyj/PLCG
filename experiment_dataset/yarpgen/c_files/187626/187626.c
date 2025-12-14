/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((min(var_5, 2704714828)))), 257253850));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -32754;
        var_19 = (!var_3);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_20 = ((-(min((((3118517535 ? var_11 : (arr_8 [i_2] [i_2] [i_2])))), ((-(arr_0 [i_1])))))));
                        var_21 = (max(((((arr_2 [i_3 + 1]) ? (arr_0 [i_1]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))), (((arr_10 [i_0] [i_0] [i_3]) ? (arr_10 [i_0] [i_1] [i_3]) : (arr_10 [i_0] [i_0] [i_3])))));
                        var_22 = ((~((((((arr_6 [i_3]) ? (arr_8 [i_0] [i_2] [i_2]) : (arr_2 [i_0])))) ? -2305772640469516288 : ((max(var_16, (arr_2 [i_0]))))))));
                        arr_11 [i_3] [i_2] = 32726;
                    }
                    arr_12 [i_0] [i_0] [i_0] [i_2] = (((arr_5 [i_0] [i_1] [1]) ? ((((min((arr_2 [i_2]), var_3))) ? -32760 : (arr_9 [i_0]))) : ((min(((var_17 ? (arr_8 [i_2] [i_0] [i_0]) : -122)), (arr_5 [i_2] [7] [i_0]))))));
                }
            }
        }
    }
    var_23 = min(var_14, var_11);

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_24 = ((((min((arr_13 [i_4] [i_4]), (arr_13 [i_4] [i_4])))) ? ((~(arr_13 [i_4] [i_4]))) : (((arr_13 [i_4] [i_4]) ? (arr_13 [i_4] [7]) : (arr_13 [i_4] [i_4])))));
        var_25 = ((((!(arr_13 [i_4] [i_4]))) ? (arr_14 [i_4] [i_4]) : (min((arr_14 [i_4] [i_4]), var_15))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (arr_16 [i_5]);

        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            var_26 = (arr_15 [4]);
            arr_20 [i_6] [i_5] = (((((-32754 ? 24 : 1048320))) ? ((min((arr_18 [20]), (((!(arr_16 [i_5]))))))) : (~var_15)));
            var_27 = (min(var_27, var_11));
        }
        arr_21 [i_5] &= (((arr_18 [i_5]) ? (max((-9223372036854775807 - 1), (arr_18 [i_5]))) : (((+((min((arr_16 [i_5]), (arr_15 [i_5])))))))));
    }
    #pragma endscop
}
