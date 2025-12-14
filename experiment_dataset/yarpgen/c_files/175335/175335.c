/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (!3768104426);

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_17 = (((4060842170 ? (arr_1 [i_1]) : -26672)));
            arr_7 [i_0] [i_0] = (((26373 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_1] [i_0]))));

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_18 = (max((max(1563242450, 234125102)), (((arr_9 [i_2 + 1] [i_2 - 1] [i_2 + 1]) ? (234125126 / 1160757764) : ((((arr_3 [i_0]) ? var_15 : (arr_5 [i_0] [i_0]))))))));
                arr_11 [i_2] [i_0] [i_0] [i_0] = ((((max(var_2, (arr_2 [i_0] [i_0])))) & ((((((6632 ? var_3 : var_15))) && ((((arr_6 [i_1] [i_2]) * var_9))))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_19 = (arr_6 [i_3] [i_0]);
                    arr_14 [i_0] = ((((((arr_12 [i_0] [i_1] [i_0] [i_3]) ? (arr_5 [i_0] [i_0]) : 8898731341928364328))) ? (arr_10 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]) : 1));
                    var_20 = 11309;
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_21 = ((4294967286 ? 105 : ((((((arr_12 [i_0] [i_1] [i_0] [i_4]) ^ (arr_15 [i_0] [i_0])))) ? (((~(arr_0 [i_0] [i_0])))) : (((arr_15 [i_0] [i_1]) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (arr_3 [i_2])))))));
                    var_22 *= ((!(11309 != 6769785099130923934)));
                    arr_17 [1] [i_4] [i_0] [i_0] [i_1] [i_0] = max(((max(var_6, ((!(arr_8 [i_0] [i_0] [i_0] [i_0])))))), 15788);
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    var_23 = (((3134209518 ? var_7 : (arr_13 [i_0] [i_1] [i_2]))) * (((var_3 ? var_3 : -11306))));
                    var_24 = 1;
                    var_25 = (arr_12 [i_5] [i_5 + 4] [i_0] [i_5 + 4]);
                    arr_21 [i_0] [i_1] [i_2] [i_0] = (((-2147483647 - 1) ? -211823977 : 3954032147));
                    arr_22 [i_0] [i_1] [i_0] [i_0] = (arr_19 [i_0] [i_1] [1] [1] [i_5] [1]);
                }
                arr_23 [i_0] [i_0] [i_0] = 1952017289;
            }
            var_26 = -4606057448861267062;
        }
        var_27 += ((6769785099130923933 ? 211823972 : ((1 << (-1168245484 + 1168245509)))));
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_27 [i_6] = (((((-2147483636 ? (arr_15 [i_6] [i_6]) : 913346467))) & ((var_4 >> (-4606057448861267079 + 4606057448861267110)))));
        var_28 = 16952691244922058980;
        var_29 = (min(var_29, (arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
    }
    var_30 = (max(var_30, (2060856325 + 0)));
    #pragma endscop
}
