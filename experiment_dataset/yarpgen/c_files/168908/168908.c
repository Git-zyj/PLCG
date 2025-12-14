/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_10, var_15));
    var_17 = max(var_1, var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((((arr_1 [i_0]) == (arr_3 [i_0] [i_1])))) + (arr_1 [i_0]))));
                arr_7 [i_1] [i_1] [i_0] = (((max(((var_13 ? var_9 : 21267)), 2135207483)) | 2135207490));
                var_18 = 3878672167;
            }
        }
    }

    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            var_19 = (arr_5 [i_3] [i_3] [i_3 + 2]);

            for (int i_4 = 4; i_4 < 13;i_4 += 1)
            {
                var_20 = ((!(((~(((arr_15 [i_3]) / -2135207483)))))));
                arr_16 [i_2] [i_3] [i_2] [i_3] = (max((((-2135207490 <= ((-(arr_4 [i_2] [i_2] [i_2])))))), 2311312611));
            }
        }
        arr_17 [i_2 - 1] [i_2] = ((((((arr_15 [i_2 - 3]) / (arr_15 [i_2])))) || (((-2135207486 ? (arr_15 [i_2 - 2]) : -2135207484)))));
    }
    var_21 = ((!(var_9 == var_10)));
    #pragma endscop
}
