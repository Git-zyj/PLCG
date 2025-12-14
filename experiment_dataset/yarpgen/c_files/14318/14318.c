/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = 18446744073709551603;
    var_18 = (max(var_18, 1354087970));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_19 = ((!(((-1953690220 ? 2940879343 : (arr_2 [i_1]))))));
                    arr_10 [i_0] [i_0] [i_1] [i_1] = 2940879329;
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_14 [i_0] [i_1] [i_3] = (arr_2 [i_1 - 1]);
                    arr_15 [i_0] [i_0] [i_3] [i_1] = ((~(arr_9 [i_0] [i_0] [i_1 + 1] [i_0])));
                    var_20 = (min(((((arr_2 [i_1 - 1]) ? var_4 : (-665706842 % var_1)))), var_7));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_21 = var_1;
                    arr_19 [0] [i_1] [0] = ((28690 ? ((+((11619022662866472630 ? (arr_7 [i_0]) : 2940879327)))) : ((+((2940879337 ? (arr_12 [i_1] [i_1]) : 242))))));
                    var_22 = ((var_3 ? var_14 : ((min((((arr_11 [6]) ? var_15 : (arr_2 [i_0]))), -var_11)))));
                }
                arr_20 [i_0 + 1] [i_1] = (~(min(2940879338, (arr_5 [i_0 + 1]))));
            }
        }
    }
    #pragma endscop
}
