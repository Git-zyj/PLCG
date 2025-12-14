/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, 2019794009));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_6 [0] |= ((~(((arr_0 [i_2 + 1]) ? (arr_4 [i_1 + 1] [4]) : ((2019794004 ? 2275173291 : 2275173303))))));
                    var_14 ^= (min(((min((~var_1), (arr_2 [1] [1] [1])))), (~2275173273)));
                }
            }
        }
        var_15 ^= 5427100908679504003;
        arr_7 [3] = ((((var_8 >= (arr_2 [i_0] [0] [i_0]))) ? (arr_1 [1]) : (((((arr_5 [i_0] [i_0]) <= (arr_4 [i_0] [8]))) ? ((((3850489793 == (arr_1 [1]))))) : -var_0))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] |= (min((((arr_3 [i_3] [i_3]) ? (arr_3 [i_3] [i_3]) : var_6)), (((!((!(arr_1 [i_3]))))))));
        arr_12 [i_3] |= (min(-var_4, ((((var_11 ? var_2 : 2019793995))))));
    }
    var_16 = ((~((-290500875920866349 ? ((var_3 ? var_3 : var_2)) : var_3))));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                var_17 = ((~(((!(arr_17 [i_4 + 2] [i_4]))))));
                arr_20 [22] [22] [i_4] = var_2;
                var_18 = (max(var_18, (min(((-(arr_17 [i_4] [i_4 + 2]))), (((!(((-(arr_18 [i_4] [i_5] [3])))))))))));
            }
        }
    }
    var_19 = ((((((min(2763573497767364814, var_12))))) % (min(-1, var_5))));
    #pragma endscop
}
