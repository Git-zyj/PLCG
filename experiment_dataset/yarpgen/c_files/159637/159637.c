/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [0] [i_0] [0] [i_2] [i_2] [15] = ((((min((((~(arr_6 [i_1])))), (((arr_9 [8] [i_1] [i_1]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [13] [i_0] [i_0])))))) ? ((max(1, -9352))) : -5445));
                            var_14 -= (-((((arr_5 [16] [i_1] [i_2] [i_3]) == (((arr_4 [i_0] [i_2] [20]) ? 862130978 : (arr_6 [i_0])))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] = (max(var_10, ((max((~4263196915610765472), (~var_13))))));
            }
        }
    }
    var_15 -= (!((((min(var_0, 109))) == ((max(var_4, -31600))))));
    var_16 = var_11;
    var_17 = (min(var_0, -93));
    #pragma endscop
}
