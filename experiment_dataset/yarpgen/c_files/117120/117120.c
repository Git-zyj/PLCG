/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [16] [i_1] = (((((-3491804022 ? (4804377125812596927 >= 7748205030367184562) : (arr_2 [i_0] [i_1])))) * var_10));
                arr_6 [5] [i_1] = (arr_2 [i_0] [i_1]);

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    arr_10 [i_1] [i_1] = (((-5233 - (max(28987, (arr_2 [i_0] [i_2]))))));
                    arr_11 [i_1] [i_0] [i_1] [i_0] = ((((((min((arr_9 [19] [i_1] [i_2 + 3] [19]), (arr_9 [3] [i_1 + 1] [i_1 + 1] [16])))) && ((max((arr_9 [i_0] [18] [1] [18]), (arr_3 [i_1] [i_1 + 1] [i_1 + 1])))))) || (((+(((arr_4 [i_1] [1]) ? (arr_0 [i_1] [i_1]) : var_6)))))));
                }
            }
        }
    }
    var_13 = max((((var_6 == ((min(var_9, var_11)))))), var_11);
    #pragma endscop
}
