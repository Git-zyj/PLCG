/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max((((0 ? -2000762631660209620 : 48))), 6328)))));
    var_11 = (-328050531127962364 ^ var_1);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 += (((((min(3, (arr_2 [i_0]))))) != ((1061949975621317263 ? -7837731005716246879 : (arr_2 [i_0])))));
        var_13 = ((-6 >= ((8916 ? -1 : (-9223372036854775807 - 1)))));
        var_14 = (max(var_14, (arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_15 = (max((((((min(7, -127))) ? ((20448 ^ (arr_5 [i_1] [i_1]))) : var_7))), var_0));

        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            arr_8 [i_1] = (min(((((arr_6 [15] [i_2 + 1] [14]) ? -15048 : var_1))), -919256380843923066));
            var_16 = ((var_1 ? (((arr_7 [i_1] [i_2 + 2]) ? 6546036374823036085 : (-127 - 1))) : (((~(arr_4 [i_1]))))));
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_17 = (max(var_17, 255));
                            arr_17 [i_1] = 40987;
                            var_18 = min(32767, 721248156787581593);
                        }
                    }
                }
            }
            var_19 = 16635;
        }
    }
    var_20 = (((32767 || ((min(var_2, var_0))))));
    #pragma endscop
}
