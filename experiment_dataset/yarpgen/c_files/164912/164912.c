/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 9307021002771293579;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = var_3;
                    var_12 = min((!9139723070938258037), (((((9307021002771293579 ? 9139723070938258024 : 288230376151711680))) ? var_3 : -288230376151711688)));
                }
            }
        }
    }
    var_13 = var_1;

    for (int i_3 = 1; i_3 < 13;i_3 += 1) /* same iter space */
    {
        var_14 += min(18446744073709551615, ((max(((var_1 - (arr_2 [i_3] [i_3] [i_3 + 2]))), (arr_5 [i_3] [i_3] [i_3 + 2] [i_3 + 2])))));
        arr_8 [i_3] [i_3] = ((((((min((arr_3 [i_3]), 5924411225963482551))) ? 288230376151711687 : var_5)) * (75 > 255)));
        var_15 = (max((!9307021002771293552), (((var_2 ? 9307021002771293579 : (arr_1 [i_3 + 1]))))));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
    {
        var_16 = (max(var_16, (var_6 * var_6)));
        var_17 = ((((~((9307021002771293585 ? 9307021002771293585 : (arr_2 [13] [1] [1]))))) ^ (((+(((arr_10 [i_4]) ? 1 : -1)))))));
        var_18 = (max(var_18, ((((9307021002771293582 ? (arr_6 [i_4 - 1] [i_4 - 1]) : var_8))))));
    }
    #pragma endscop
}
