/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 4; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((194410579 ? 4100556716 : 4100556701))));
        var_13 = var_1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = var_10;
                    arr_7 [i_0 + 1] [i_0 + 1] [14] = 0;
                    arr_8 [4] [i_0] [i_0] = (((!(((194410598 >> (194410598 - 194410595)))))));
                    var_15 = -2003357105;
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_16 = 4100556705;
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_17 = ((((((!(arr_5 [9] [i_4 + 2]))))) ? (((((!6211398116112747942) && (((-6211398116112747943 ? (arr_6 [0] [0] [i_5]) : 2617373207728592917))))))) : 194410613));
                        arr_20 [i_6] [i_5] [i_5] [i_5] [14] [i_3] = (-1 % 5141844545114192201);
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_18 -= (~12469593471700986351);
                        var_19 = 82;
                    }
                    arr_24 [i_5] [i_5] [i_5] = 194410598;
                }
            }
        }
        arr_25 [i_3 + 2] = ((!(arr_13 [i_3] [14])));

        for (int i_8 = 2; i_8 < 16;i_8 += 1) /* same iter space */
        {
            var_20 = (arr_6 [i_3 + 1] [i_3] [i_8]);
            arr_29 [15] [i_8 + 1] = (max(((((((-1321487946 ? 192 : (arr_19 [i_3] [i_3] [i_8] [i_3])))) ? (arr_17 [i_3] [14]) : (!28)))), (((min(var_0, var_0)) / (3807170162 && var_7)))));
            var_21 = (((arr_27 [i_3 - 1] [i_3 - 1]) > (3818258128 <= 4100556701)));
            var_22 -= ((((((arr_4 [i_3 + 4]) ? (arr_4 [i_3 + 4]) : (arr_4 [i_3 + 4])))) * (arr_21 [6] [i_8] [i_8] [2] [i_3])));
        }
        for (int i_9 = 2; i_9 < 16;i_9 += 1) /* same iter space */
        {
            var_23 += 33597;
            var_24 += (((((((arr_28 [i_9] [8] [5]) + (arr_16 [i_3 - 3] [i_3 - 3] [i_3] [i_9]))) <= (max(6211398116112747925, 856817647574099457)))) ? (arr_4 [i_3 - 4]) : (max((arr_12 [i_3 + 4]), (arr_6 [i_9 + 3] [i_3 - 3] [i_3])))));
            var_25 = 0;
            var_26 = var_3;
            arr_34 [18] = (!0);
        }
    }
    var_27 = (min(((var_8 ? var_6 : -var_6)), ((((1895429886776493425 ? 161 : var_6)) % var_4))));
    var_28 = 4100556698;
    var_29 = -var_6;
    #pragma endscop
}
