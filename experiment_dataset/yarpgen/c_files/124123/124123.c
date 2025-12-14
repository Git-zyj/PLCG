/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_19 = ((~((min(var_1, 2147483647)))));
        var_20 &= (((~(arr_0 [i_0]))) * (!4294967295));
        var_21 = ((((max((!var_3), (((arr_0 [i_0]) ? (arr_1 [i_0]) : 0))))) && ((((((~(arr_1 [i_0])))) ? var_7 : (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 |= (((~(arr_0 [i_1]))));
        var_23 = ((4294967274 ? ((min((max(var_1, 4294967289)), var_16))) : ((min(var_13, 77)))));
        var_24 = (arr_0 [i_1]);
        var_25 = -78;
    }
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_26 = ((!((min(var_16, 1)))));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_10 [14] [14] [i_2 - 1] = (((((((min(var_15, 0))) ? (((arr_6 [i_3]) ? var_1 : (arr_9 [i_2] [i_2 + 1] [i_2 + 1]))) : (arr_1 [i_3])))) || ((min((((var_3 - (arr_0 [1])))), (((arr_0 [i_2 - 1]) ? 18446744073709551592 : -77)))))));
            arr_11 [i_2 + 1] = (arr_7 [i_2 + 1]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_27 = ((-((-(arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                        var_28 = (min((((arr_12 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]) != (arr_12 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))), (((arr_18 [i_2] [i_3] [i_4] [i_5]) && (!5)))));
                    }
                }
            }
        }
    }
    var_29 -= var_12;
    var_30 = (max((~var_16), ((~(max(var_15, 4294967295))))));
    #pragma endscop
}
