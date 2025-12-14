/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_5, (-9223372036854775807 - 1)))) ? 3141649062 : 8147763534658366961));
    var_19 = (min(var_14, (529007492 >= 32757)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [9] [0] [i_0] [i_0] [0] = 9223372036854775807;
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = 3765959796;
                                var_20 = ((18446744073709551612 ? -242100980 : 21));
                            }
                        }
                    }
                    var_21 += -1;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            {
                var_22 = (min(32757, 1));
                var_23 = (-9223372036854775795 ^ 1);
                var_24 = (((max((min(24973, -9223372036854775795)), ((min(203, 115))))) >= (((58545 * (min(var_15, 3765959790)))))));
                var_25 = (((max((arr_3 [i_5] [10] [i_6 + 2]), 2692365298870730853)) % (((9223372036854775795 ? 3765959796 : (arr_3 [i_6] [i_5] [i_6 + 1]))))));
            }
        }
    }
    #pragma endscop
}
