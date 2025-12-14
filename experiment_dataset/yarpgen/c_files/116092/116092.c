/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_11 = var_6;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = ((((((46 != var_7) ? ((max(var_7, var_4))) : ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))) ? (((!((((arr_4 [i_2] [i_1] [i_1] [i_0]) ? var_6 : 202)))))) : (((~var_9) % ((1 % (arr_3 [i_0] [i_1])))))));
                    arr_6 [2] |= ((min(((var_4 % (arr_5 [0]))), (((94 > (arr_5 [1])))))));
                    var_13 += ((((min(var_9, (((var_8 + 2147483647) >> (((arr_1 [2]) - 13629151066987177786))))))) ? (((min(var_6, (arr_5 [1]))) >> (((min(var_3, 73)) - 55)))) : ((((!(arr_1 [1])))))));
                    var_14 = ((((arr_0 [i_0] [i_0]) ? 2478587893 : -424379015625264325)));
                }
            }
        }
        var_15 = (arr_1 [i_0]);
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                {
                    var_16 *= ((((var_6 / -8944116025730013519) ? (arr_15 [i_3] [1]) : (arr_12 [12]))));
                    var_17 = (((arr_10 [i_4] [i_5] [i_4]) > (arr_10 [i_4] [i_4 + 1] [i_4])));
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_18 = (1 != 69);
            var_19 ^= ((55 ? 30493 : 9467));
        }
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            var_20 &= var_8;
            var_21 &= (min(((~(28 & 41794))), ((((max((arr_14 [i_3] [16]), (arr_15 [i_3] [0])))) ? (((arr_17 [i_3] [i_3]) ? (arr_14 [i_3] [20]) : 25740)) : ((max(var_9, var_10)))))));
        }
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            var_22 += ((-var_9 + ((max(55782, 229)))));
            var_23 = (((144 && var_1) ? (min(var_9, (arr_19 [i_3]))) : -112));
            var_24 = (min(var_24, var_0));
        }
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_25 |= -35;
        arr_29 [i_9] [i_9] |= (((((var_3 || var_1) ? (!8944116025730013518) : -6760978904108155027))) ? (min(var_0, (min((arr_27 [i_9]), var_2)))) : (((((arr_28 [i_9]) == var_0)))));
        var_26 += (max((arr_27 [i_9]), (max(((var_2 ? var_2 : var_4)), (arr_25 [i_9])))));
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_27 = -4923;
            var_28 = 142;
        }
        var_29 = (arr_20 [i_10]);
    }
    var_30 = (min(((max((116 >= var_10), var_10))), (min(var_0, var_0))));
    var_31 = var_1;
    #pragma endscop
}
