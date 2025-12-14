/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 |= var_12;
    var_19 = (min(-5, var_11));
    var_20 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (i_0 % 2 == 0) ? ((min(((((!18234382929394482487) <= (arr_2 [i_0])))), (((arr_2 [i_0]) ? ((((((arr_2 [i_0]) + 2147483647)) >> (((arr_1 [i_1]) + 7213243145884518700))))) : 1002933319445164291))))) : ((min(((((!18234382929394482487) <= (arr_2 [i_0])))), (((arr_2 [i_0]) ? ((((((((arr_2 [i_0]) - 2147483647)) + 2147483647)) >> (((arr_1 [i_1]) + 7213243145884518700))))) : 1002933319445164291)))));
                    var_22 = ((~((~((((arr_2 [i_0]) < (arr_3 [i_1] [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
