/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 += ((65535 ? (arr_5 [i_2 - 3]) : var_5));
                    arr_6 [i_2] [i_1] [i_1] [i_0] = ((((((((-810928788 ? 4194303 : var_4))) ? -810928780 : ((810928792 ? var_2 : var_8))))) ? (((arr_1 [i_2 - 3]) ? (arr_1 [i_2 - 3]) : 3)) : var_1));
                    arr_7 [i_1] [i_1] [i_2] = 3481;
                }
            }
        }
    }
    var_12 = (!-810928788);
    #pragma endscop
}
