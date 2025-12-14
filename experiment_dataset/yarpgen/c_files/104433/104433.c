/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_4] [12] [i_3] = ((((0 ? -7078096729174173689 : 7078096729174173688))));
                                var_11 = (min(var_11, ((min(((65535 ? 4776 : 65534)), (min((((-127 - 1) ? 0 : 31531)), 0)))))));
                                var_12 *= ((!((min((~65479), 2139095040)))));
                                arr_13 [i_1] [i_1] [i_4] = (((((((-9223372036854775807 - 1) ? 0 : 65535))) ? ((57 ? 32767 : 57)) : 22402)));
                                arr_14 [i_0] [6] [8] [i_0 - 3] [8] |= (max((((max(0, -7078096729174173689)))), (((((65520 ? 127 : -29173))) ? (-2147483647 - 1) : ((min(1, 57)))))));
                            }
                        }
                    }
                }
                var_13 = (((1 ? 67 : -29162)));
                arr_15 [i_0] [i_0] = 0;
                arr_16 [9] = ((min(((18584 ? 25 : 15), ((min(248, 65456)))))));
            }
        }
    }
    var_14 = (((~57) ? (((((1 ? 255 : -1))) ? var_7 : 7078096729174173689)) : 7078096729174173675));
    var_15 = (~var_2);
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                arr_21 [i_5] [i_5] [i_5] = ((!(((0 ? 10841 : 7)))));
                arr_22 [i_5] [i_6] [i_5] = ((((65534 ? -1 : 2063926851))));
            }
        }
    }
    #pragma endscop
}
