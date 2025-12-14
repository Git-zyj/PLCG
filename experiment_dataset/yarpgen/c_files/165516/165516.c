/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] = (min(((((((!(arr_3 [i_0] [i_0] [i_2]))))) * (arr_6 [i_1] [i_1]))), ((max(0, 0)))));
                    var_17 = (((((!(((~(arr_5 [i_0] [1] [i_2]))))))) & ((var_5 ? var_3 : (arr_4 [i_0] [i_0] [i_2])))));
                    var_18 = (min(var_18, ((~((((arr_3 [i_0] [i_1] [16]) != (((arr_6 [i_1] [i_1]) ? (arr_4 [i_0] [i_0] [9]) : var_15)))))))));
                    arr_12 [i_0] [21] [i_2] = (arr_8 [i_0] [5] [i_0]);
                    var_19 = (max(((((((arr_5 [i_2] [i_1] [i_1]) << (((arr_6 [i_1] [i_1]) + 2232403635673116516))))) ? ((8422893617633503916 ? (arr_5 [i_0] [i_0] [i_0]) : 22)) : ((min((arr_3 [i_0] [i_0] [i_2]), (arr_10 [i_0] [i_1] [i_2] [11])))))), ((((min(1, 31396))) >> (((max((arr_6 [i_2] [i_0]), (arr_8 [i_1] [i_1] [i_2]))) - 1490340571))))));
                }
            }
        }
        arr_13 [i_0] [19] = (((((min((arr_0 [i_0] [i_0]), (arr_1 [i_0]))))) ? 255 : (max(((max((arr_9 [i_0] [i_0] [i_0]), (arr_1 [i_0])))), (((arr_9 [i_0] [i_0] [i_0]) ? 18446744073709551615 : 31))))));
        var_20 -= (min(((-(arr_8 [i_0] [i_0] [i_0]))), (!16384)));
        arr_14 [13] = ((!((max((((!(arr_4 [i_0] [i_0] [i_0])))), (((arr_8 [i_0] [i_0] [1]) ? 0 : (arr_0 [7] [19]))))))));
        var_21 = min((arr_3 [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0]));
    }
    var_22 = ((var_2 ? (((var_4 / 47) & (((var_16 ? 12690 : -548934839))))) : ((((!(var_0 || var_3)))))));
    var_23 = var_10;
    var_24 += (((-(var_6 <= var_5))));
    var_25 = (max(var_14, 31));
    #pragma endscop
}
