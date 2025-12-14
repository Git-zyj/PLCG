/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = ((((min(19790, 45722))) || 19809));
                var_20 = ((((min(4294967287, 4294967295))) <= 19799));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    var_21 ^= ((arr_8 [i_0] [i_2]) + 274877906943);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = 19786;
                                var_22 = (max(var_22, ((((arr_1 [i_1]) ? (arr_1 [i_2]) : -274877906951)))));
                                var_23 = ((arr_5 [i_0] [i_1]) > (19823 / -8731597424507005800));
                                var_24 += ((23784 ? (arr_12 [18] [i_1] [i_1] [i_1] [20] [i_1] [i_1]) : (arr_4 [i_0] [i_0])));
                                var_25 = var_6;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [2] [i_0] = (((!(((45751 ? var_4 : var_6))))));
                    var_26 = (min(var_26, ((max(((45741 | (((arr_6 [i_0] [i_1] [i_5]) ? (arr_8 [1] [1]) : 19772)))), -19792)))));
                    arr_18 [i_0] |= (-(arr_5 [i_0] [i_1]));
                }
                arr_19 [i_0] = (((max((var_7 > var_1), (min(65518, var_11)))) | ((((((arr_8 [i_1] [i_1]) ? var_3 : (arr_9 [i_0] [i_1]))))))));
            }
        }
    }
    var_27 = var_8;
    var_28 = (max(var_28, ((((((max(-274877906937, var_3)) * (var_3 / var_12)))) ? var_6 : var_9))));
    #pragma endscop
}
