/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((25092 << (((arr_0 [i_0]) - 3983))))) ? ((var_9 ? (((-(arr_2 [i_1] [i_0] [i_0])))) : var_1)) : (arr_0 [i_0])));
                var_14 = ((((((var_5 ? (arr_0 [i_0]) : 217054260)))) ? 108 : ((((1 << (115 - 95)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                {
                    var_15 += (min(((max((arr_5 [i_4 + 1]), (arr_5 [i_4 + 1])))), ((-1242657745 ? (arr_5 [i_4 - 3]) : 1758508561))));
                    arr_14 [i_2] [i_3] [i_3] = (2716409635 > ((-(((arr_6 [0]) ? var_12 : var_4)))));
                    var_16 = (max(var_16, (arr_8 [i_4 - 2] [i_3] [i_4])));
                    var_17 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
