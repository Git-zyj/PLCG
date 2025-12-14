/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_10 = (var_4 != 65535);
                                arr_13 [i_1] [1] = (((min(0, 6856201211786767751))) ? ((((arr_9 [i_4 + 3]) != (arr_9 [i_4 - 2])))) : (((arr_0 [i_2 + 1]) ? (arr_0 [i_2 - 3]) : (arr_9 [i_4 - 1]))));
                                var_11 *= ((((arr_7 [i_4] [i_4] [i_2 + 2]) ? (arr_7 [8] [5] [i_2 - 3]) : var_8)));
                                var_12 = var_4;
                            }
                        }
                    }
                    var_13 *= (((((7168 ? (arr_5 [i_0] [i_0] [i_2]) : (max(8475534324612563778, -358024877134783717))))) ? (arr_5 [i_0] [i_0] [i_2]) : var_3));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_14 = (min(var_14, ((min(((((min(2147483647, (arr_21 [i_0] [i_1] [i_2] [i_5] [i_6]))) + ((min(var_8, var_8)))))), (((arr_3 [i_0] [13]) ? ((((217 >= (arr_0 [i_6]))))) : ((var_5 ? var_5 : (arr_5 [i_1] [i_1] [i_2]))))))))));
                                var_15 -= ((28618 ? 20762 : 1155572209));
                                var_16 = (arr_12 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5] [i_6]);
                            }
                        }
                    }
                    var_17 = (min(var_17, var_4));
                    var_18 = (max(var_18, (arr_16 [i_2 - 2] [1] [i_1] [i_0])));
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_19 = ((((arr_3 [i_7] [7]) ? var_6 : ((-1757137333 ? var_8 : var_3)))));
        var_20 = (((min(var_8, (min(var_8, var_4)))) << ((((((min(var_7, (arr_16 [1] [1] [i_7] [i_7])))) ? (arr_21 [i_7] [15] [i_7] [i_7] [i_7]) : (((arr_9 [i_7]) ? var_4 : 217)))) - 166))));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_21 = (-239796974 - 175);
        var_22 = (((((min(1102497654, var_8)) ? var_6 : ((min(36917, (arr_21 [i_8] [i_8] [i_8] [i_8] [17]))))))));
    }
    #pragma endscop
}
