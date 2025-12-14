/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_20 = (((((((max(var_13, 12))) ? (max((arr_0 [0]), var_10)) : (arr_2 [i_1] [0])))) ? (arr_2 [i_0 + 3] [i_1]) : (((+((((arr_2 [i_0] [i_1]) < var_2))))))));
                arr_4 [2] |= (max((~5), (max((arr_2 [i_1 - 1] [i_1]), (arr_2 [i_1 + 4] [i_1])))));
            }
        }
    }
    var_21 = var_18;
    var_22 = var_4;

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_9 [1] [i_2] = -5;
        var_23 = var_10;
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        arr_12 [i_3] = (max((((min(-53, 1687878943)))), ((~(((arr_5 [i_3 - 2]) >> (2461230787 - 2461230757)))))));
        var_24 = (max(var_24, 7));
        arr_13 [i_3] = (min((1 * 288229276640083968), (max((((801729818563420369 ? -53 : 47))), (min(-3440557935392984075, 1076168278))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = (((arr_11 [i_4] [i_4]) && ((((arr_10 [i_4] [i_4]) ? (arr_6 [9]) : (arr_10 [i_4] [i_4]))))));
        var_25 = (max(var_25, ((((((arr_15 [6]) == -5)) ? (arr_7 [i_4] [i_4]) : (!-751928307))))));
    }
    var_26 &= var_8;
    #pragma endscop
}
