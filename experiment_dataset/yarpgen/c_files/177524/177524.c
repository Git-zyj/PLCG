/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = (arr_3 [i_0]);
                    arr_9 [i_0] [8] [i_2] = 6882;
                    arr_10 [i_1] [i_0] = (min((arr_2 [i_2]), var_0));
                    var_15 &= (!var_6);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_16 &= (min((arr_1 [i_3] [i_3]), (((arr_1 [i_3] [i_3]) * var_7))));
        var_17 = (max(var_17, (((((var_4 ? (((arr_13 [i_3]) ^ 0)) : 53)) >= (((min((arr_2 [i_3]), (arr_2 [i_3]))))))))));
        var_18 = ((((((((arr_14 [i_3]) ? (arr_7 [i_3] [i_3] [i_3] [i_3]) : -26))) ? (((arr_12 [3]) * 27645)) : ((min((arr_14 [i_3]), 1))))) >= (arr_0 [i_3] [i_3])));
        var_19 = (min(((+(min((arr_5 [i_3] [i_3]), 1)))), ((min(55162, (min(994, (arr_1 [i_3] [i_3]))))))));
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1)
    {
        arr_19 [i_4 - 3] [1] = (((!(arr_7 [i_4] [i_4 + 3] [i_4] [i_4]))));
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                {
                    arr_26 [i_4 - 2] [i_5 - 4] [i_6] [i_6] = ((((1 ^ (((arr_25 [i_4 + 2]) ? var_7 : 14589629313660297760)))) >= ((((!(((3173967398 ^ (arr_7 [1] [i_5 + 1] [i_5 + 1] [4]))))))))));
                    arr_27 [i_5] = 1;
                }
            }
        }
        arr_28 [i_4] = ((2857196130 ? (arr_2 [2]) : (~3584)));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                {
                    arr_38 [i_9] [i_8] [i_7] = (((((arr_21 [i_9] [i_9 - 1] [i_9 - 1]) ? 255 : (arr_21 [i_9] [i_9 - 2] [i_9 + 1])))) * 824633720832);
                    arr_39 [i_7] [i_8] [i_7] [i_8] = (min((min(-16, (((arr_1 [i_9] [i_8]) / (arr_17 [i_9]))))), ((~((0 ^ (arr_30 [i_9])))))));
                    var_20 = (((min(var_10, (arr_5 [i_7] [i_7])))) ? (arr_18 [i_7] [i_7]) : (min((min(var_1, 0)), ((min((arr_2 [i_7]), (arr_8 [i_7] [i_8] [i_7])))))));
                }
            }
        }
    }
    var_21 = (max(var_21, (min((((((1 ? 4096 : var_7))) && -var_6)), (!var_7)))));
    var_22 = (min(((-667004287 ^ (-3 >= -37))), var_13));
    #pragma endscop
}
