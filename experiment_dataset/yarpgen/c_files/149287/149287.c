/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min(((((1702751071 << (var_3 + 739018749))) | var_7)), ((var_2 ? var_7 : var_4))));
    var_19 = 2021411562;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = ((((((~(arr_5 [i_0] [i_1] [i_2] [i_3]))))) ? 2021411563 : (max((((arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]) ? var_10 : var_12)), (var_3 | -2021411572)))));
                            var_21 = (min(var_21, ((((((~(max((arr_1 [i_0]), (arr_9 [i_0] [i_0] [i_2] [i_2] [i_3])))))) ? ((max((arr_10 [i_3 - 3] [i_3 + 1] [i_3 - 3] [i_3] [i_3 - 3] [i_3 - 1]), (arr_10 [i_3 + 2] [i_3 + 1] [i_3 + 2] [i_3] [i_3 + 1] [i_3 + 1])))) : ((-1024 ? (arr_7 [i_3 - 2] [i_3 - 2] [i_3] [i_3 + 2]) : (arr_7 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 2]))))))));
                        }
                    }
                }
                arr_11 [i_0] [i_0] = ((!((max((arr_3 [i_0]), 3920487807286939909)))));
                var_22 = (max(var_22, -var_0));
            }
        }
    }
    var_23 = (+-2021411556);
    var_24 = (~-var_15);
    #pragma endscop
}
