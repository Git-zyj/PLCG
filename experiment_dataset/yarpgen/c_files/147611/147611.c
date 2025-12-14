/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_2 + 1] [i_0] = ((~(((((var_5 ? 1745772486 : (arr_1 [i_0] [i_0]))) < 188)))));
                    var_17 = (-(arr_3 [i_2]));
                }
            }
        }
    }
    var_18 = ((min((3253799581274092377 % var_11), (var_7 - var_6))));

    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_19 &= ((-188 ? (((((min(4080533281, (arr_13 [i_3] [i_5] [i_3])))) ? (arr_8 [i_4]) : (((22942 <= (arr_3 [20]))))))) : (min(((((arr_7 [i_3]) >> (32767 - 32758)))), (((arr_11 [7] [i_4] [i_5] [i_3 - 1]) ? (arr_4 [20] [i_4] [i_5] [i_4]) : 17866013010278598694))))));
                    arr_14 [i_3] [i_4] [i_3] = (((((arr_5 [i_3 + 1]) * (arr_0 [i_3 + 1])))) && ((min(((min(32767, -32767))), 4398046511103))));
                }
            }
        }
        arr_15 [i_3] = (((32767 * ((min(-32761, var_3))))));
    }
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        var_20 = (min(var_20, var_12));
        var_21 = (min(var_21, (arr_17 [i_6])));
    }
    var_22 = (((((-32763 <= 2264655528) ? ((-7694935449831558389 ? var_2 : 10008)) : ((min(15132, var_1))))) < var_1));
    var_23 = -32743;
    #pragma endscop
}
