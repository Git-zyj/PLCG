/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] = ((((((arr_10 [i_0] [i_1] [i_0] [11] [i_2]) ? 64 : var_2))) ? (arr_7 [i_2] [i_0] [i_2]) : var_9));
                        var_12 = (min((arr_7 [i_0] [i_0] [i_2]), ((((((arr_6 [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_0] [i_3]) : 39))) ? (arr_0 [i_0 + 1] [i_0]) : 62))));
                        var_13 = (max(var_13, ((((((var_11 >= var_10) ? (((arr_3 [i_3] [i_3]) ? (arr_4 [i_3]) : (arr_1 [i_3]))) : (((max(var_7, (arr_10 [i_2] [i_1] [i_3] [i_3] [2])))))))) ? ((((!(arr_7 [i_0 - 2] [i_3] [0]))))) : (min(((var_9 ? (arr_4 [i_3]) : (arr_5 [i_0] [i_3]))), var_6))))));
                    }
                }
            }
        }
        arr_12 [i_0] [i_0 - 1] = ((+(max(19725, (min((arr_7 [10] [i_0] [i_0]), 4294967239))))));
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = ((-(min(((59297 << (((arr_13 [7] [i_4]) + 581)))), (24576 && 3631541659)))));
        arr_16 [i_4] [i_4] = ((arr_13 [i_4] [0]) ? (((min(((min(100, 191))), (arr_13 [i_4] [i_4]))))) : (min(var_6, 1799686823)));
        arr_17 [18] [i_4] = ((!((((arr_13 [i_4 - 1] [i_4]) ? (arr_13 [i_4 + 1] [7]) : (arr_14 [i_4 - 1] [i_4]))))));
    }
    var_14 = ((~((~(max(-871928185, 245760))))));
    var_15 += (!var_4);
    var_16 = (max(var_16, (((!((min(var_3, (~var_4)))))))));
    var_17 = var_1;
    #pragma endscop
}
