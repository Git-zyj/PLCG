/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = var_1;
                arr_4 [i_1] &= ((((max((arr_3 [i_0] [i_1]), -7978673907273147221))) ? (3349836535 && 10) : 0));
                var_12 = (~2420183139);
            }
        }
    }
    var_13 = var_2;

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_14 = (~128);
        var_15 = (((((((min(59518, 56120))) ? (arr_7 [i_2]) : 39889))) ? ((((((25646 ? var_8 : var_6))) ? ((max((arr_7 [i_2]), (arr_5 [i_2] [i_2])))) : ((var_9 ? 100 : -1114830510))))) : (((arr_7 [i_2]) ? var_0 : (arr_7 [i_2])))));
        var_16 = (min(var_16, 39889));
        var_17 |= ((-81 ? -37 : -2461220480542073359));
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
        {
            arr_12 [i_3] [i_3] [i_4] = ((arr_1 [i_3 + 1] [i_4 + 1]) | (arr_9 [i_3]));
            var_18 = (arr_8 [i_3 - 1]);
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
        {
            var_19 = ((((((arr_15 [i_5 + 1] [i_3 + 1] [i_5 + 1]) ? ((((arr_2 [i_3]) ? var_4 : var_10))) : var_7))) ? (((39890 << (56357 - 56346)))) : -2800255803333375413));
            var_20 -= var_10;
            var_21 = ((((var_2 ? (((var_1 ? var_4 : (arr_2 [i_5])))) : ((147 ? 41165316 : var_9)))) >= (((33004 ? 9179 : 7)))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 8;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_22 = ((((-(((arr_1 [1] [i_7]) ? 8 : var_0))))) && var_6);
                        var_23 = (min(var_23, (((-4531635690875530829 ? 1644708082 : 39879)))));
                        arr_20 [i_5] [i_5] [1] [i_5] = (arr_2 [i_3 + 1]);
                        var_24 = (max(var_24, (((((~(arr_9 [i_3 - 1]))) / (((((21 ? var_4 : var_4)) << ((((var_1 ? 21 : var_1)) - 10))))))))));
                        var_25 = ((((!(var_4 + var_7))) ? ((865127492 ? 182 : 65521)) : (((((-8 ? (arr_17 [i_3] [i_5]) : (arr_16 [i_5] [i_5] [i_5] [i_5])))) ? var_8 : ((39889 ? (arr_8 [i_7]) : (arr_7 [i_7])))))));
                    }
                }
            }
        }
        var_26 = ((var_8 >> ((((((28 ? var_4 : var_5))) || (arr_10 [i_3 - 1]))))));
        var_27 = (((((((var_8 ? var_2 : var_3))) ? var_1 : (((arr_11 [5] [i_3]) ? var_2 : var_0))))) ? 57439 : var_10);
    }
    #pragma endscop
}
