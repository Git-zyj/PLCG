/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 = (((63 ? (arr_2 [i_0 - 1] [i_0 - 1]) : var_5)));
                            var_13 += (((((-55 - ((min(0, (arr_9 [1] [1] [1] [i_3]))))))) && (((496786124 ? ((496786124 ? var_3 : 2)) : (((((arr_1 [i_0] [i_0]) < 496786116)))))))));
                            arr_10 [i_0] = ((((arr_6 [i_0] [10] [i_2] [i_0]) ? 1614727571 : var_5)));
                        }
                    }
                }
                var_14 = (((~var_11) != (arr_9 [i_0 - 1] [7] [0] [i_0 - 1])));
                var_15 = (min(var_15, -57209861));
            }
        }
    }
    var_16 = (min(var_9, ((-(3499243183048149529 <= 4710642565719283414)))));
    #pragma endscop
}
