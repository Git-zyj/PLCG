/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((1 ? 1375975277 : (!var_18)))));
    var_20 = (min(((var_18 ? (~var_11) : var_14)), 7799746));
    var_21 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_22 = (max(var_22, 1648415387));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_23 = 244846658;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_24 = (!6139865453628857134);
                            var_25 = ((~(arr_9 [i_0] [i_1] [i_2] [i_2 + 1] [i_4] [i_2])));
                            var_26 = (arr_10 [i_0] [i_0] [7] [i_0]);
                        }
                    }
                }
            }
            var_27 &= (((arr_1 [i_1] [i_0]) >> (((arr_1 [i_0] [i_0]) - 9130324479839290485))));
        }
        var_28 = ((-(arr_11 [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_29 -= (((((arr_13 [i_5] [1]) ? ((((var_9 == (arr_13 [i_5] [i_5]))))) : (((arr_13 [i_5] [i_5]) ? var_7 : (arr_14 [0] [i_5]))))) ^ ((((arr_13 [13] [i_5]) % (((arr_13 [i_5] [i_5]) - 1622136484)))))));
        var_30 = (arr_14 [i_5] [i_5]);
        var_31 = (max(var_31, (3318240635 - 244846658)));
    }
    #pragma endscop
}
