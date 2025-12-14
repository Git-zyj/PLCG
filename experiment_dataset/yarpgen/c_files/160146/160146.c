/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((((max((arr_1 [i_0]), var_11))) ^ (((1443878888 ? -1443878893 : 1443878888))))))));
                arr_4 [1] |= ((!-1791936052) << (-var_7 - 1165522518));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_14 = (!((((arr_0 [i_2]) ? (arr_2 [i_2] [i_2] [11]) : (arr_7 [i_3] [i_2] [i_2])))));
                var_15 = ((((((arr_3 [i_3]) ? (arr_9 [i_3] [i_2] [15]) : (arr_9 [i_2] [i_2] [i_2])))) && ((((var_5 ? 2142643896 : var_11))))));
                var_16 = ((((-1443878889 ? (arr_5 [i_2]) : (arr_5 [i_3]))) == (arr_5 [i_2])));
                arr_10 [i_2] [18] = (arr_6 [i_2]);
            }
        }
    }
    #pragma endscop
}
