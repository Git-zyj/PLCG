/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [15] [15] = (max((((var_0 && (arr_0 [i_0])))), (min((arr_1 [i_0] [i_1]), ((((arr_1 [i_0] [i_1]) || 2573483221)))))));
                var_12 = (min(var_11, (((1 ? 1721484075 : (arr_0 [i_1 - 1]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                {
                    var_13 = max(((var_5 || (((1793310893 ? var_0 : 4037255959))))), ((!((((arr_5 [i_2] [8]) ? -1 : 4294967277))))));
                    arr_11 [i_4] = ((~(max((((arr_2 [i_2] [i_3]) ? 4294967268 : var_1)), (var_11 & var_11)))));
                }
            }
        }
    }
    var_14 = (min(var_14, ((max(var_9, var_2)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_20 [i_6] &= (arr_3 [18] [i_6] [4]);
                arr_21 [i_5] = ((((var_1 ? (arr_19 [i_5] [i_5] [i_6]) : ((max(var_6, var_2))))) / (((arr_7 [i_5] [i_5]) / var_5))));
                var_15 = (max(var_15, var_8));
            }
        }
    }
    #pragma endscop
}
