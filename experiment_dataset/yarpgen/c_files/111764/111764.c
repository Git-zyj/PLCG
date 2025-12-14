/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (max((min(65512, 2202213701)), (arr_0 [i_1 + 1] [i_1 + 1])));
                arr_5 [i_0 + 4] [4] [i_1] |= ((((max((~-34), (arr_3 [i_1 + 1] [i_0 + 2])))) == (2806901780466218539 + 3316295638)));
            }
        }
    }

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        arr_9 [i_2] = 13675;
        arr_10 [i_2] [i_2 - 1] = (max((2111934457 * -2183032839), -1));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        arr_13 [i_3] = (((((((min(2111934457, 2111934457))) ? (arr_6 [i_3]) : (max((arr_6 [i_3]), var_0))))) ? (((((-(arr_0 [i_3 - 1] [i_3])))))) : ((((arr_8 [i_3 + 1] [i_3]) / 25442)))));
        arr_14 [i_3] = 65535;
        var_19 = ((((max(65533, (min(var_2, (arr_0 [i_3] [i_3 - 1])))))) >> (2111934457 - 2111934433)));
    }
    #pragma endscop
}
