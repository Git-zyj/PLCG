/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((max((max(var_3, var_5)), var_11))) ? ((((((var_4 ? var_9 : var_6))) || -var_3))) : (((!var_11) ? 0 : 16764490164850963614))));
    var_15 = ((((~((var_6 ? 0 : 2047)))) < var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = var_4;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_1] [6] [i_2] = (!var_1);
                    arr_11 [i_1] = (arr_7 [i_0] [i_1] [i_2]);
                }
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    arr_14 [i_1] [i_1] = (max(80, (((((min(var_8, 23))) && 16241368031630705456)))));
                    arr_15 [i_0] [i_0] [i_3 + 1] &= (max((max((max(23, 173)), (arr_12 [i_3 - 1] [i_3] [i_3] [i_0]))), var_8));
                    arr_16 [i_0] [i_1] [i_0] |= (((arr_12 [i_3 + 1] [i_0] [i_1] [i_0]) ? ((((var_6 ? -6583718952716494183 : (arr_8 [i_0] [i_1] [i_3]))) / (arr_4 [i_0] [i_3]))) : var_3));
                }
                var_16 = var_3;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_20 [i_1] [i_4] = ((386321430 ? (((799558630 ? 1042312801 : 0))) : 6583718952716494187));
                    arr_21 [i_1] [i_1] [i_4] [i_4] = ((((var_5 ? (arr_0 [i_0]) : (arr_12 [1] [i_0] [i_1] [i_1])))) ? 56 : (arr_7 [i_0] [i_1] [i_4]));
                }
            }
        }
    }
    var_17 -= (min(14997698752138399921, var_9));
    #pragma endscop
}
