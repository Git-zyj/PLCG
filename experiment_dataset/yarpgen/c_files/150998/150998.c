/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((!var_9), 44919));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [i_1] [i_3] [i_3] [i_1 - 1] = ((((((arr_2 [i_2 - 2] [i_0 - 1]) ? (arr_2 [i_2 - 3] [i_0 - 1]) : (arr_0 [i_0 - 1])))) ? (((!(arr_2 [i_2 - 2] [i_0 - 2])))) : ((-(arr_2 [i_2 - 1] [i_0 + 1])))));
                        var_21 = (min(var_21, (((((((!5663902470378319743) ? 49626 : ((29253 ? var_1 : 29125))))) ? ((((arr_3 [i_1] [i_2] [i_3]) ? 13 : -4256473422983492548))) : 120)))));
                        var_22 = (((((var_7 ? (arr_4 [i_0] [i_1] [i_2 - 3] [i_0]) : (arr_8 [i_2 - 1] [i_0 - 1])))) ? (((-(arr_6 [10] [i_1 - 2] [i_2])))) : (max((arr_1 [i_2 - 2] [i_1]), (arr_3 [i_1 + 1] [i_2 - 1] [i_3 + 2])))));
                        var_23 = arr_2 [i_0] [i_0];
                    }
                }
            }
        }
        var_24 = (((arr_6 [i_0 - 3] [i_0 + 1] [i_0 - 1]) ? (7517263908943223004 || var_2) : ((~((~(arr_2 [i_0] [i_0 - 2])))))));
        arr_10 [i_0 - 3] = (arr_1 [17] [1]);
    }
    for (int i_4 = 3; i_4 < 19;i_4 += 1)
    {
        var_25 = (min(var_25, (arr_12 [i_4])));
        var_26 = (min(var_26, 18207991026793051278));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    arr_19 [i_5] [i_5] [i_5] [i_6] = 142;
                    var_27 = ((!(((0 ? (-32767 - 1) : 251)))));
                    var_28 += (-(arr_14 [13] [13]));
                    var_29 = (min(((max(3906492915, 103))), (16 % 1)));
                }
            }
        }
    }
    #pragma endscop
}
