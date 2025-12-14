/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = (((((((((65535 || (arr_0 [i_3] [i_2]))))) * (max((arr_7 [6] [i_2] [3]), 63))))) ? ((((((((arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2]) && 9))) <= ((((arr_4 [8] [i_1] [9]) && -4508456992414470149))))))) : ((((max(9007197107257344, (arr_2 [2])))) ? (max((arr_6 [i_2] [i_1] [i_0]), (arr_1 [i_0]))) : (arr_1 [i_0])))));
                            var_14 = (((((arr_7 [2] [i_1] [i_1]) | ((((arr_8 [i_0] [i_0] [i_0] [i_0]) >= (arr_8 [3] [i_1] [i_2] [i_3])))))) / 38775));
                            var_15 ^= (arr_8 [i_2] [i_2] [i_1] [i_0]);
                            var_16 = ((((min((((2 || (arr_10 [i_0] [i_0] [i_0] [i_0])))), (arr_6 [i_0] [i_1] [i_2])))) ? ((((arr_0 [i_0] [i_1]) >= (arr_0 [1] [i_2])))) : (((481815218 ^ 2064111909) ? (arr_9 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1]) : (-2014843553 | 57519846)))));
                            var_17 = (arr_8 [15] [i_1] [i_2] [i_1]);
                        }
                    }
                }
                var_18 = ((arr_1 [i_0]) / ((((((65065 ? (arr_2 [i_0]) : (arr_7 [i_0] [i_1] [i_1]))) + 2147483647)) << (((((min(-2014843564, (arr_8 [i_0] [i_0] [i_0] [i_1]))) + 2014843582)) - 18)))));
            }
        }
    }
    var_19 = ((var_6 ? (max((max(var_8, var_6)), var_8)) : (var_4 || var_1)));
    var_20 = (min(var_20, var_2));
    #pragma endscop
}
