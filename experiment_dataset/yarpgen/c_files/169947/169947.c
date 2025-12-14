/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = ((-7253 ? 3 : 10519263));
                    var_14 |= 4284448032;
                    arr_9 [3] [i_0] [i_0] = (((max((((-1781459191369667515 ? 65527 : -4))), ((var_1 ? (arr_7 [11] [i_1] [i_1]) : var_3))))) ? (max(10519270, (arr_4 [i_1 + 3] [i_1 + 3]))) : var_11);
                    var_15 += ((8394947971573110049 ? (((arr_8 [10] [10]) ? (((~(arr_5 [0] [i_1] [i_2] [i_0])))) : (((arr_8 [10] [22]) ? 4284448032 : -1)))) : (8234 % 10519279)));
                    var_16 = ((-((var_4 ? 65516 : ((1 ? 4284448028 : -26))))));
                }
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
