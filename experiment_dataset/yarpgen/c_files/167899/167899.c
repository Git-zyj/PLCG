/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0 + 1] &= ((-(arr_2 [i_2 + 1] [i_2] [i_2])));
                    var_11 = (max(var_11, ((((max((arr_6 [i_2 - 1] [i_2] [i_2 + 1]), (arr_6 [i_2 - 1] [i_2] [i_2 + 1])))) ? (((arr_6 [i_2 - 1] [i_2] [i_2 + 1]) ? (arr_6 [i_2 - 1] [i_2] [i_2 + 1]) : (arr_6 [i_2 - 1] [i_2] [i_2 + 1]))) : ((37 ? 0 : 148))))));
                    var_12 = ((-(arr_4 [i_0] [i_0 + 4] [i_0 - 1] [i_2 - 2])));
                    arr_9 [i_0] [i_0] [i_0] [i_0 + 3] = (((var_1 * (~65525))));
                }
            }
        }
    }
    var_13 = (!-1497983233);
    var_14 &= (((~5) || ((((251658240 ? 3207041417381601600 : -21064))))));
    #pragma endscop
}
