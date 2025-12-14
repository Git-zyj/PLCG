/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_8);
    var_15 = var_11;
    var_16 = ((((3596381898902854246 ? (min(var_13, 7667913221173192246)) : var_9))) - ((var_4 ? var_6 : 7667913221173192265)));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = ((var_2 * (arr_3 [i_0])));
                    arr_8 [i_0 - 1] [i_0] = (max(-7667913221173192247, 12169));
                }
            }
        }
        var_17 |= 22157;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_18 = (max(var_18, ((min(((-7667913221173192247 - (var_4 < 213))), (((((-5652685753732915702 ? -6116977384748274308 : -22157)) >= (((((arr_1 [i_3]) < var_11))))))))))));
        var_19 = (min(13, var_0));
    }
    var_20 = ((7667913221173192271 != (((max(2109341073, -7667913221173192247)) >> (((max(var_9, var_0)) - 18446744072831884170))))));
    #pragma endscop
}
