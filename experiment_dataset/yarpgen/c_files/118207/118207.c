/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_18 = var_4;
                            var_19 = (((arr_4 [i_1 + 2] [i_1 + 2] [i_1 + 1]) * (((arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 3]) ? 9175002556335807148 : var_3))));
                            var_20 = (min(var_20, ((min(((-(arr_4 [i_1 + 3] [i_2] [i_3]))), (((!(arr_4 [i_2] [i_3] [i_4])))))))));
                            arr_17 [i_0] = (((0 >= 3780) >> (((max(59376, ((var_9 ? var_10 : 72055395014672384)))) - 59372))));
                        }
                    }
                }
            }
            var_21 = ((((min(-91, -57))) ? (max((((31661 ? var_3 : var_9))), (min(var_0, (arr_3 [i_0] [i_1 + 1] [i_1 + 2]))))) : 2642107883));
        }
        var_22 = (min((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_10 : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((max(var_7, var_8)))));
        var_23 = var_12;
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_23 [i_6] [i_5] = ((((min((max(53922, var_1)), ((max(0, var_9)))))) != 1));
            arr_24 [6] = (arr_22 [i_6]);
            arr_25 [i_5] [i_5] = ((max(((-1259707205 ? 1 : var_12), ((max(255, 59376)))))));
            var_24 = min(var_15, (max((arr_21 [i_5] [i_6]), (!var_10))));
        }
        var_25 = (max(var_25, var_1));
        var_26 = (min((min((59377 ^ 14863), var_14)), var_1));
    }
    var_27 = var_7;
    var_28 = var_0;
    #pragma endscop
}
