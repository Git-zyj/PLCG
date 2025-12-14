/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((((~(!var_8)))) ? (~var_10) : ((((min(2057600692, 2019628396777127287))))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_16;
        arr_4 [i_0] = (min(6431658680472009111, (min(1612569933315947170, 16))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] = var_11;

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_18 = ((((min(var_15, var_0))) ? -6571254660495346957 : -6571254660495346951));
                        arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = ((((((var_9 >= ((((arr_6 [i_0]) | var_7))))))) <= 6571254660495346932));
                    }
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        var_19 += (arr_12 [i_0] [i_1] [i_0] [i_0]);
                        arr_17 [12] [12] [12] [12] |= (~3989706551083585252);
                        var_20 = var_6;
                        var_21 += ((max(((var_13 >> (var_14 - 1985670923))), ((((arr_15 [i_0] [i_1] [i_2] [i_2]) >= 6571254660495346956))))));
                    }
                    arr_18 [10] [i_2] &= (((var_12 ? var_5 : (arr_16 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
