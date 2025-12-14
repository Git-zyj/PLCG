/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((var_9 ? (max(((max(88, var_1))), var_2)) : var_3));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_16 = (max(var_16, ((max(var_9, (((~(var_1 > var_8)))))))));
            var_17 = var_8;
            var_18 = (min(var_18, ((max((arr_0 [i_1 - 1] [i_1 + 2]), (((!(arr_0 [i_1 - 1] [i_1 + 2])))))))));
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [16] [i_0] [i_0] [i_0] &= (arr_8 [i_0] [i_2] [i_2] [1]);
                        arr_15 [16] |= (((((562941363486720 * 0) != (((14833 ? var_1 : (arr_6 [i_2])))))) || (((168 ? (!6984560150573293683) : var_10)))));
                    }
                }
            }
            var_19 = (arr_8 [i_0] [i_2] [i_2] [i_0]);
        }
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            var_20 = ((!((!(((var_6 ? (arr_6 [i_0]) : -6984560150573293684)))))));
            arr_19 [i_5] [i_0] = var_8;
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_21 ^= (arr_5 [i_0]);
                            var_22 = var_1;
                            var_23 *= (max(var_14, (arr_8 [4] [i_5] [i_5] [i_5])));
                            var_24 = (min(var_24, var_8));
                            var_25 = (min((arr_24 [i_0] [i_6] [i_0] [i_0]), var_0));
                        }
                    }
                }
            }
        }
        arr_27 [i_0] = var_0;
    }
    #pragma endscop
}
