/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min(((11865865042870783891 ? (max(var_13, var_2)) : -var_5)), var_8)))));
    var_18 = (min(var_18, 845240817291509097));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_19 ^= 84;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_20 = 1033152622;
                            var_21 = ((((min((arr_12 [i_0 + 1] [i_0 - 2] [i_0 - 2] [15] [i_1] [i_1]), -732130277))) > ((-14315 ? 1 : (arr_3 [i_0 - 2] [i_3])))));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_3] [i_0 - 2] [i_5] = (((((1 | (((arr_9 [i_5] [i_5] [i_5] [i_5]) | (arr_6 [i_0] [i_0 - 2] [i_0] [i_0 - 2])))))) ^ (arr_2 [i_0])));
                            var_22 = (max(var_22, ((((((((((arr_14 [12] [12] [i_0] [i_0] [12]) ^ (arr_4 [i_1] [i_1])))) ? (((max((arr_15 [i_1] [i_1] [i_1] [i_1] [17] [i_1]), (arr_10 [i_0] [i_0] [i_2] [i_0] [i_5]))))) : var_9))) ? (((-((-(arr_13 [i_0] [i_1] [i_2] [i_3] [i_3])))))) : var_11)))));
                            var_23 = (max(var_23, ((max((((~(var_0 >> 1)))), (((~32767) ? ((12839 ? (arr_17 [i_0 - 2] [18] [i_2] [i_0 - 2] [i_5] [i_5]) : 267386880)) : -1859348462)))))));
                        }
                        arr_20 [i_1] [i_1] = (-(arr_14 [i_2] [i_2] [i_2] [i_2] [2]));
                        var_24 += (((((-(arr_10 [i_0] [0] [i_0 - 1] [i_0 - 2] [i_2])))) + var_4));
                    }
                }
            }
        }
        arr_21 [i_0] &= (((!(arr_9 [i_0] [i_0 + 1] [i_0] [i_0]))));
    }
    #pragma endscop
}
