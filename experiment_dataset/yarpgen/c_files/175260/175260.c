/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((var_5 & var_6) >= var_9)))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((!(!var_9)));
        var_12 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = ((((+((((arr_4 [19] [i_0 + 3] [i_0]) == 27013)))))) && 8186153062997766994);
            var_13 = (min(var_13, ((+(min((964062345 % 1441199806), (arr_1 [i_1])))))));
            var_14 = ((((((arr_4 [i_0] [i_0 + 3] [i_0]) / ((((arr_6 [i_0] [i_0] [6]) / (-127 - 1))))))) % (~13835407792825398728)));
        }
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_16 [i_0] = ((((((!(((arr_13 [i_0] [i_2 - 2] [i_2] [i_4]) != -5929)))))) <= (min(((5929 ? var_3 : 13835407792825398741)), (((92 ? (arr_5 [i_0] [i_0]) : -3636756938852538604)))))));
                        var_15 &= (((((min(-232397315, 181)))) ? ((((arr_4 [i_0 - 1] [i_2 - 2] [i_3]) != (~var_9)))) : (!var_1)));
                        var_16 = ((3541201256214632959 + (((min(var_3, (((!(arr_10 [i_0]))))))))));
                    }
                }
            }
        }
        arr_17 [i_0] [i_0] = 3636756938852538599;
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_22 [12] = ((~(~-var_9)));
        var_17 = (arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [6]);
        arr_23 [1] = (((-32767 - 1) == (min(((111 ? (arr_14 [i_5] [i_5] [10] [i_5]) : (arr_6 [i_5] [4] [i_5]))), ((-2063147347 ? 13835407792825398728 : 536870912))))));
        arr_24 [i_5] = 75;
    }
    for (int i_6 = 2; i_6 < 23;i_6 += 1)
    {
        var_18 = -14;
        var_19 = (min(1800145613, var_4));
        var_20 = (arr_27 [i_6]);
    }
    #pragma endscop
}
