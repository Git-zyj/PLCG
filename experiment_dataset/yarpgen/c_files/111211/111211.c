/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 += (max((((arr_3 [2] [2]) ? (var_5 && var_4) : var_1)), ((((((arr_1 [i_1] [i_1]) ? 1930187944 : (arr_0 [1] [i_1])))) ? (var_9 - var_4) : ((12 ? -14873 : 0))))));
                    var_12 = (max(var_12, 4294967295));
                    var_13 = (arr_1 [i_1] [i_2 - 1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_14 += (((((2410096237434746217 ? (12289053936767573498 - 0) : 160))) ? (~52) : (max(((max(var_4, (arr_14 [i_3] [9])))), ((var_7 ? 58 : var_9))))));
                    var_15 = ((((!(((~(arr_9 [i_4]))))))));
                }
                arr_16 [1] [1] [i_4] &= var_7;
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
