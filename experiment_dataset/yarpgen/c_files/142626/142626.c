/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_7 ^ (min(var_7, -var_3)))))));
    var_11 = ((var_2 * (!4254695362378534266)));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_12 = (arr_0 [i_0] [i_1]);
            var_13 *= (((((((!(arr_4 [i_0 - 1]))) ? (arr_7 [1] [i_0] [i_1 + 2]) : 10031))) ? ((((arr_7 [5] [i_0] [i_1 + 3]) || (((var_7 ? var_5 : -115)))))) : (((!(((arr_5 [i_0] [i_1]) || var_1)))))));
            var_14 = 47334935;
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 14;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_2] [i_2 + 2] [i_0] [i_2] = (arr_6 [i_0]);
                        var_15 = ((-95 > (!1)));
                        var_16 = (((!(arr_4 [i_3]))));
                        arr_16 [i_0] [10] [8] [9] [i_2] = ((~((var_6 | (arr_2 [6])))));
                        arr_17 [i_3] &= var_3;
                    }
                }
            }
            var_17 ^= (((!1) & (arr_1 [i_0 - 1])));
            arr_18 [i_0] [i_2 + 1] &= (((arr_0 [i_0] [i_0]) != (var_5 % 10016)));
            var_18 = (max(var_18, ((((((var_4 >> (var_6 - 15889728904433618523)))) ? (((((arr_6 [i_2]) <= var_8)))) : var_9)))));
        }
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            var_19 = (max(var_1, var_8));
            arr_21 [i_0 - 2] [i_0 - 2] = (((~var_7) ? ((max(-47334936, (arr_19 [i_0 - 1] [i_0 - 1] [i_5])))) : (max(-1045871299128050928, (min(var_8, var_5))))));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_20 = ((((max(((((arr_7 [i_6] [i_6] [3]) != (arr_1 [i_6])))), ((var_6 ? var_7 : var_5))))) ? (min((min((arr_9 [i_0] [i_6]), (arr_13 [14] [i_0] [i_0] [i_6]))), (((arr_6 [i_6]) ? (arr_9 [i_0] [i_0]) : 6)))) : (((47334927 ? 45 : -6604690597550843536)))));
            var_21 *= (((arr_1 [i_0]) >= (min((arr_7 [1] [1] [1]), ((var_9 ? var_1 : (arr_13 [i_0] [i_0 - 2] [i_0] [i_6])))))));
            arr_24 [i_0] [i_0] [i_0] = ((55203382 ? 11687892033478922228 : 11687892033478922231));
            arr_25 [i_6] [i_0] = ((((min((arr_13 [i_0 + 1] [i_0 - 1] [i_6] [i_0 - 1]), (((arr_14 [i_0] [i_0] [i_6] [0] [i_6]) ? var_6 : (arr_4 [1])))))) ? ((((max(var_0, (arr_7 [i_0] [i_6] [i_6])))) ? (((arr_23 [i_0] [i_0] [i_6]) ? (arr_9 [i_0] [i_6]) : 22)) : (((((arr_0 [i_6] [i_0]) || (arr_14 [i_6] [i_6] [4] [i_6] [i_6]))))))) : (((var_0 ? 55512 : 141)))));
            var_22 = -55520;
        }
        arr_26 [i_0] = var_2;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    {
                        var_23 &= (((~1045871299128050903) ? (((((arr_27 [i_7] [i_0]) == (((min(1, var_0)))))))) : (min((arr_27 [i_0] [6]), ((((var_5 + 2147483647) >> (var_7 + 55))))))));
                        var_24 = (max(var_24, (arr_32 [14] [i_0] [i_0] [i_0 - 1])));
                        var_25 = ((((((-1045871299128050903 ? -1794962135 : -5942)))) >= (max(-3046052618532299259, (((1245180251 ? 7807 : 3049787046)))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_39 [i_10] = ((-((((arr_36 [i_10]) == var_2)))));
        var_26 *= (arr_36 [i_10]);
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        var_27 = (min(var_27, var_3));
        arr_42 [i_11] = (max(((((min((arr_22 [i_11] [i_11] [i_11]), var_9))) ? (max((arr_5 [i_11] [i_11]), 470948633)) : (((var_3 ? (arr_36 [i_11]) : var_3))))), (((var_3 >= (min((arr_20 [i_11] [7] [i_11]), 8190)))))));
    }
    #pragma endscop
}
