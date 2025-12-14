/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(11933020516089515747, (((6226163017979673879 ? 56 : var_3)))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_17 = (arr_1 [i_0]);
        arr_4 [1] [i_0 - 1] = 14;
        arr_5 [i_0] = (max(((var_4 ? -6226163017979673879 : 32185)), ((min(6226163017979673901, 7503652961553659949)))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1 + 1] = -6226163017979673879;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_14 [i_1 + 1] [i_3] = (((((~(arr_10 [i_1 - 1])))) ? (3097714181989083856 && 3097714181989083856) : (((arr_0 [i_3]) | ((42 ? 63 : 2485432492))))));
                    var_18 = -939494661;
                }
            }
        }
        arr_15 [i_1] = 56;
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_19 = (-74 == var_4);
        var_20 = (((min(-817788090, (-973653894 + 0))) % ((max(1, (arr_13 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1]))))));

        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            var_21 = (arr_19 [i_4 + 1] [i_5 + 2] [i_5 + 3]);
            arr_23 [2] [i_5] = ((13423 ? ((max(36, (arr_17 [i_5 + 3] [i_5 + 2])))) : -2147483630));
        }
    }
    #pragma endscop
}
