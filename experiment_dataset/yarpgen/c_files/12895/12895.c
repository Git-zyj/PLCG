/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_0] [i_1] = ((((-52 ? 1 : -921109303438378852)) | (-280318756 && 17589357761001181759)));
                        var_13 -= ((-30 ? (min((6759460396003827620 + 29), var_12)) : ((((144115188075855872 ? 857386312708369876 : 0)) | (((36799 ? var_7 : (arr_6 [i_0] [20] [i_3]))))))));
                    }
                }
            }
        }
        arr_12 [i_0] = ((-(min((min((arr_4 [i_0] [10] [i_0 + 2]), 10)), var_5))));
        var_14 = (min(var_14, var_10));
    }
    var_15 = (max(var_15, (((var_12 % (((0 ? var_11 : 2518420977))))))));
    var_16 = var_0;
    var_17 = (0 && 18446744073709551605);
    #pragma endscop
}
