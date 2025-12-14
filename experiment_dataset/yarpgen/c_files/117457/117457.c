/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = ((((arr_4 [i_2 + 1]) | var_4)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = var_15;
                                var_18 = ((((((var_0 ? (arr_2 [i_2]) : var_10))) | (max(1017743822, 2147483647)))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    arr_19 [i_5] [i_5] [i_5] [i_5] = -2147483647;
                    var_19 = (((var_4 * (arr_13 [i_5] [i_5]))));
                }
            }
        }
        arr_20 [i_0] = ((((((var_2 || var_9) ^ (min(-2147483647, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) || (arr_15 [i_0] [i_0])));
        arr_21 [i_0] = (max(((max(((max(1, var_6))), (arr_2 [i_0])))), (max((arr_15 [i_0] [i_0]), (arr_14 [i_0])))));
        var_20 = min((var_10 + 3898356793608988201), ((max((arr_2 [i_0]), ((14548387280100563415 ? var_14 : var_1))))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_21 ^= ((arr_12 [i_7] [i_7] [i_7] [i_7]) ? ((((min(4294967292, 1))) ? var_15 : 331)) : var_13);
        var_22 ^= (18434 > var_13);
        arr_25 [i_7] [i_7] = (max(((var_10 || (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))), ((!(arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))));
    }
    var_23 = -78;
    var_24 = (var_14 * var_15);
    #pragma endscop
}
