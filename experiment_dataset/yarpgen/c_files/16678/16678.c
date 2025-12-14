/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((!var_16) ? ((-5914524387117981157 ? 5914524387117981156 : var_0)) : (var_3 >= var_5))));
    var_18 = -5914524387117981168;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 ^= var_15;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_20 = (((var_1 / (arr_0 [i_1]))));
            var_21 &= (!((max((((arr_4 [i_0] [13] [i_1]) ? (arr_2 [i_1]) : var_7)), ((max(-10693, (arr_7 [i_0]))))))));
            var_22 -= ((var_9 ? (((((2969625468 ? var_11 : var_6)) <= (arr_3 [i_0])))) : -var_6));
        }
        for (int i_2 = 4; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_23 = (arr_10 [i_0] [i_0] [i_2]);
            var_24 ^= 7118232225607227203;
            arr_11 [i_2] = ((!(((((max(2471, 137))) ? ((268435440 ? (arr_9 [i_0]) : (arr_9 [i_0]))) : var_11)))));
            var_25 = min(137, 7118232225607227203);
        }
        for (int i_3 = 4; i_3 < 12;i_3 += 1) /* same iter space */
        {
            var_26 = ((((((arr_2 [i_0]) ? var_7 : -2))) ? (arr_1 [i_3] [i_3]) : ((min((arr_6 [i_0] [i_3] [i_3]), (max(var_12, var_3)))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    {
                        var_27 = (!195);
                        var_28 *= (((((252 ? -4368539241773952120 : -23008))) ? 1 : ((-((((arr_0 [i_0]) || var_13)))))));
                        arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_3] = 66;
                    }
                }
            }
            var_29 = min(((((arr_12 [i_3 + 2] [i_3]) && (arr_12 [i_3 - 4] [i_3])))), ((3715327748 ? var_6 : (arr_12 [i_3 - 1] [i_3]))));
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_24 [i_7] [i_3] [i_0] [i_3] [i_3] [i_0] = (arr_9 [i_7]);
                        var_30 *= (((-(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [7]))));
                        var_31 = (min(var_31, ((63 ? ((max(1142, -23001))) : ((min((arr_21 [i_0] [i_3 - 1] [i_6] [i_6 + 1]), (arr_21 [i_0] [i_3 + 1] [i_3] [i_6 + 1]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
