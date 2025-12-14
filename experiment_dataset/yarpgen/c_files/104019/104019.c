/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1 + 1] [1] &= ((((((var_1 << (((arr_2 [i_0]) - 82))))) ? ((~(arr_1 [i_0 + 1] [i_1]))) : ((((!(arr_1 [i_0] [i_1]))))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_15 ^= ((((!var_3) ^ (arr_2 [i_0 + 3]))));
                    var_16 = (max(var_16, (((~((((arr_0 [i_0 + 3] [i_1]) >= (arr_0 [i_0 + 2] [i_1 - 1])))))))));
                    arr_9 [6] [i_2] = (((!var_12) ^ ((204 ? (((var_9 >= (arr_5 [i_2] [i_2])))) : var_9))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_17 &= (max(((2147483625 / (arr_16 [8] [i_5] [7] [8] [7] [i_4 - 2] [13]))), 2147483625));
                                arr_20 [i_5] [i_4] [i_3] [i_1] [i_0] = 0;
                                var_18 = (arr_1 [i_0 + 2] [i_1]);
                                arr_21 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((((((arr_17 [i_1 - 1] [i_0 + 3] [i_0 + 3] [i_0] [i_0]) ? (arr_15 [13] [i_0]) : 1))) ? (min((arr_8 [i_1] [i_0 - 1] [i_0] [7]), (arr_14 [i_1 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]))) : (arr_8 [9] [i_0 + 1] [i_0 + 3] [i_0])));
                            }
                        }
                    }
                    var_19 = (((arr_19 [i_0]) ? (!var_5) : (((arr_1 [i_1] [i_0 + 1]) ? (~var_6) : var_2))));
                }
                for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_20 = ((((max((!var_8), 30560))) || (arr_26 [i_1 + 1] [i_0 + 1])));
                                var_21 -= 12536;
                                var_22 ^= (((((!((27 || (arr_1 [12] [i_8]))))))) - (max(((~(arr_14 [i_0] [i_0] [i_6] [10] [7]))), (arr_26 [i_1] [i_1]))));
                                var_23 = (max(var_23, (((~(((((arr_18 [i_0] [i_1]) ? (arr_8 [i_8] [i_7] [1] [i_1]) : (arr_8 [i_0] [i_1] [i_0] [14]))) | (min(-1974173527, (arr_7 [i_0] [i_0] [i_0]))))))))));
                            }
                        }
                    }
                    arr_29 [i_1 - 1] [i_1 - 1] [i_0] &= 1828512960466022857;
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_24 += (((((~(arr_13 [i_0 + 2] [i_1] [i_9 - 1] [i_10 + 3] [4] [i_10 + 2])))) ? (arr_30 [i_6] [i_6] [i_6] [i_0 + 1] [i_1] [i_0 + 1]) : (!702496396)));
                                var_25 -= ((!(!9)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (~var_9);
    var_27 = var_3;
    var_28 = (((((3191757131 >> (8388608 - 8388598)))) ? var_8 : var_10));
    #pragma endscop
}
