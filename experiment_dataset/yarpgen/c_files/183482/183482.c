/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_11 = -2;
        var_12 *= ((!((!(arr_1 [2])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_13 -= (((((((var_8 ? var_4 : var_3))) ? var_1 : (arr_2 [i_1])))) ? (!var_4) : (arr_1 [6]));
        var_14 = ((max((arr_4 [i_1]), (arr_3 [i_1]))));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_15 = min(178, (max(180, 175)));
                    var_16 = ((-0 ? ((((((arr_5 [i_2]) ? 202 : (arr_8 [i_2] [i_2])))) ? 167 : 3346827810298900818)) : 126));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_17 = ((arr_18 [i_2] [i_3] [i_4] [0] [i_6] [i_6]) ? -2862372192241409170 : (min(8905899032519170044, 7630552833513495078)));
                                var_18 = (+((var_8 ? (arr_9 [i_2]) : var_4)));
                            }
                        }
                    }
                    var_19 = min(var_4, var_6);
                }
            }
        }
    }
    #pragma endscop
}
