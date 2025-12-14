/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] = ((4398782647980296728 <= (arr_0 [i_0])));
            var_13 ^= ((9149 < (arr_0 [i_0])));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_14 -= (max(-1149837518, 0));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_15 ^= 56141;
                            var_16 = (min(((((arr_14 [i_0] [i_4 - 1] [i_0] [i_4 + 1] [i_4] [i_4 - 1]) < 1134869706841467168))), 5927));
                        }
                    }
                }
            }
            var_17 ^= ((max(((0 % (arr_14 [i_2] [1] [i_2] [18] [i_2] [i_2]))), (1 && 1))));
            var_18 = -1922667412;
        }
        var_19 = (min(1, -841587962248334579));
        arr_19 [10] &= (arr_4 [i_0] [3]);
        var_20 ^= (((((~(arr_5 [17] [17])))) + (((184 >= (((-32757 + 2147483647) >> (151293918 - 151293900))))))));
    }
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        var_21 += 49;
        var_22 = (max(var_22, 22456));
        var_23 = (-15744 >= -110498311);
    }
    var_24 = (((-9223372036854775807 - 1) % 4264985200));
    var_25 = (var_7 - 1);
    var_26 = 14211;
    #pragma endscop
}
