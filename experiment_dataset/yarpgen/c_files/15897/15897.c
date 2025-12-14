/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(((var_10 ? var_1 : var_15)), var_4)) > var_0));
    var_21 |= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [2] = arr_7 [i_0] [i_0] [i_1];
                    var_22 ^= ((((var_11 ? (arr_2 [0] [i_0] [i_2]) : (((arr_1 [i_0]) ? 4312440853722840517 : var_12))))) ? (min(((((arr_2 [i_0] [i_1] [i_2]) + 195))), (max(-358590526, var_2)))) : ((((((-358590520 ? 358590529 : (arr_3 [i_2]))) >= (var_17 * 121))))));
                    var_23 = (min(var_23, (((-(max((arr_1 [i_0]), (min(-6866287658730246122, var_18)))))))));
                    var_24 = (((min(6866287658730246092, ((19 ? (arr_2 [i_1] [i_1] [i_0]) : var_14)))) != ((((!(arr_0 [i_0] [i_1])))))));
                    arr_9 [i_2] [i_1] = (((arr_4 [i_0] [i_1] [i_1]) ? (((42 > (min(var_4, var_11))))) : (((var_15 || (arr_6 [i_2] [i_0]))))));
                }
            }
        }
    }
    var_25 = (min(var_25, var_11));
    #pragma endscop
}
