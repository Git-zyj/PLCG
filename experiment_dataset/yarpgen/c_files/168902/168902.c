/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((((arr_0 [i_1 + 1]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 + 2])))) ? var_1 : (min(65515, 1537314534098591052))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] [i_3 + 2] = ((((((min((arr_6 [i_2] [i_3]), (arr_0 [i_0])))) ? (((arr_2 [i_2]) ? (arr_7 [i_0] [i_2] [i_3]) : (arr_1 [i_0]))) : (((arr_7 [i_2] [i_1] [i_0]) ? (arr_1 [i_0]) : var_5))))) ? ((2147483647 ? 9079524606839065392 : 28)) : ((max((arr_3 [i_2]), (arr_8 [i_2] [i_1])))));
                            arr_11 [7] [i_0] [i_1] [i_2] [i_3] = (min(((424065600 ? 8257530189212618439 : 9710039805871074253)), (arr_1 [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
