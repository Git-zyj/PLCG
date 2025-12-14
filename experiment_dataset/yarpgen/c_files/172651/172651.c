/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_12 = (max(var_12, (((~var_6) ? (((!(arr_3 [i_2 - 1] [i_0 + 3])))) : (((((-(arr_0 [2])))) ? ((max(0, (arr_1 [i_0 - 3] [i_1])))) : (-107 <= var_6)))))));
                    var_13 = (arr_0 [i_0]);
                    arr_8 [i_0 + 3] [i_0] [i_0] [i_0] = min(2563152251426320639, (((((max(125, -116))) ? (128 | -126) : ((14585974073828101611 ? (-32767 - 1) : var_4))))));
                }
                var_14 = (((((var_2 + 8822843966996641787) - (((128 ? var_2 : var_7))))) - ((((!(((var_4 ? (arr_0 [i_0]) : var_3)))))))));
                var_15 = (((((arr_2 [i_0 - 1] [i_0 - 3] [i_0]) ? 104 : (arr_2 [i_0] [i_0 + 1] [i_0]))) != ((3 ? (4089179015 || var_10) : (arr_2 [3] [i_1] [i_0])))));
                arr_9 [i_0] = (((((9223372036854775807 || var_0) != var_8)) ? (((((var_10 & (arr_0 [i_0]))) <= (((max(134, var_3))))))) : -2147483640));
            }
        }
    }
    var_16 = (max(var_9, (-1801266401 || var_9)));
    var_17 *= (-127 - 1);
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                {
                    var_18 = (min((((arr_14 [i_4 + 2] [i_3] [i_3]) << (((((arr_12 [i_5 + 2]) + 30866)) - 6)))), ((((min(8651017210595187081, 122))) ? (((arr_15 [i_4 + 3]) ? (arr_16 [i_3 - 1]) : (arr_14 [10] [1] [6]))) : (((arr_13 [i_4] [i_4]) ? (arr_17 [i_4] [i_4 + 1] [8] [i_4]) : (arr_17 [i_5] [i_4 + 1] [i_3] [i_3 + 1])))))));
                    var_19 = (max(((((((431612154 ? (arr_10 [i_3]) : var_1))) && (var_8 / var_9)))), (min(var_6, var_2))));
                    var_20 = (max(var_20, (((((-((min(-4, (arr_15 [10])))))) / ((-(((arr_14 [i_3] [7] [i_5]) * (arr_11 [i_4 + 2]))))))))));
                    var_21 = (((((((9223372036854775807 ? var_7 : (arr_16 [i_3])))) && ((max(1801266403, 2559552613188136304))))) ? (arr_16 [i_3]) : (((max(var_0, 7016917681065263065)) | (var_7 <= var_5)))));
                    var_22 = (((((((0 ? var_4 : var_7))) || ((((arr_13 [i_4 + 1] [i_5]) ? var_11 : (arr_14 [0] [i_3] [i_5])))))) ? (max(((var_0 ? -1801266411 : 8186416785066378389)), (arr_17 [i_3] [i_3 - 1] [8] [i_5]))) : (max(15887191460521415311, 10260327288643173227))));
                }
            }
        }
    }
    var_23 = (min(var_23, 1));
    #pragma endscop
}
