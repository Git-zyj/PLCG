/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (var_2 != -var_4);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [18] |= min((((((max(0, 1))) ? 51794 : (-8690 ^ -123)))), ((((((arr_0 [i_0] [i_0]) ? var_10 : var_17))) ? ((-(arr_3 [i_0] [i_0]))) : (((var_11 ? var_12 : 3968110442))))));
                arr_6 [i_0] [i_0] = (((((max((arr_0 [i_0 + 2] [i_0 + 1]), var_1)))) >= var_10));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 9;i_3 += 1)
        {
            {
                var_21 = (min(var_18, (arr_9 [i_2])));
                arr_12 [i_2] = ((-(((var_17 >> (18115805361455992530 - 18115805361455992514))))));
                var_22 = ((+(max((arr_7 [i_2 - 1]), (((var_8 <= (arr_0 [8] [i_2]))))))));
                arr_13 [i_3] = (arr_3 [1] [i_3]);
            }
        }
    }
    #pragma endscop
}
