/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~447836555);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    arr_8 [i_2 + 1] [i_2] [i_2 + 1] = (max((max((1665854017 == -123), ((4370332549494705960 / (arr_0 [i_1]))))), var_2));
                    var_13 = (((min(((65533 ? 1023 : 14076411524214845643)), ((((arr_3 [i_0] [i_0] [i_2 - 1]) ? (arr_5 [i_0] [1] [i_2] [i_0]) : (arr_2 [i_0])))))) + (((((((arr_1 [i_0]) ? (arr_4 [i_0] [i_0]) : 9))) + (((arr_0 [7]) ? var_4 : var_9)))))));
                    var_14 = (!246617982);
                }
            }
        }
    }
    var_15 += (min((((var_8 != (986830267 * 3)))), var_5));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_16 &= (((((((arr_10 [0]) || var_0))) + (((arr_10 [i_3]) * var_0)))));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_17 = ((((14076411524214845654 ? 91 : -2023567897)) == ((~((min((arr_14 [i_3]), var_11)))))));
                    var_18 = (min(var_18, (arr_12 [i_4] [i_4])));
                }
                var_19 += ((max((((var_7 ? var_10 : (-127 - 1))), (min((-9223372036854775807 - 1), 164))))));
            }
        }
    }
    var_20 += -297024364;
    #pragma endscop
}
