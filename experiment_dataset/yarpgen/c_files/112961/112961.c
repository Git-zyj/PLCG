/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((43 ? (arr_0 [i_0]) : ((~(var_13 <= 947189549)))));
        arr_3 [i_0] [i_0] = ((!((max((arr_1 [i_0] [i_0]), (((-(arr_0 [i_0])))))))));
        arr_4 [i_0] [i_0] = (((max((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), var_8)) != 232));
        arr_5 [i_0] [i_0] = (((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_9 [i_1] = -1;
        arr_10 [i_1] = (((var_17 ? (arr_7 [i_1] [i_1 - 2]) : (arr_7 [i_1] [i_1 + 1]))) - (((arr_7 [i_1] [i_1 + 1]) | (arr_7 [i_1] [i_1 - 2]))));
        arr_11 [i_1] = ((((min(var_1, (-17716 != var_4)))) ? ((((min(var_11, var_10))) % 104)) : var_9));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_14 [i_2] = 203;

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_19 [i_2] [i_2] [i_2] = (((((arr_8 [i_2] [i_3]) / (arr_8 [i_2] [i_2]))) / ((max(-1694370256, var_6)))));
            arr_20 [i_2] [i_2] = ((((((var_1 + var_10) + (max(56, 13900259039213502833))))) ? -8965303030954218924 : var_10));
            arr_21 [i_2] = (max((arr_8 [i_2] [i_2]), (((var_17 ? -2718191638056496155 : (arr_7 [i_2] [i_2]))))));
            arr_22 [i_2] [i_2] [i_2] = (min(((-1694370256 & (8965303030954218924 >= var_12))), (((-8965303030954218919 != var_8) & var_1))));
        }
        arr_23 [i_2] [i_2] = ((((((((var_4 ? var_4 : -1430372798))) ? (!var_12) : (arr_15 [i_2] [i_2])))) + 4546485034496048782));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_28 [i_4] [i_4] = (((var_14 % var_10) ? 13900259039213502833 : ((((!(arr_7 [i_4] [i_4])))))));
                arr_29 [i_5] = 203;
            }
        }
    }
    var_19 = (~((var_11 ? (max(var_6, -947189549)) : (max(var_15, var_9)))));
    #pragma endscop
}
