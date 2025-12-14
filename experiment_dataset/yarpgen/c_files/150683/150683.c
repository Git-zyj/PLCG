/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (max(((-72636265 ? 4713467878598535073 : -1073741824)), var_7));
        arr_3 [i_0] = (arr_1 [i_0]);
        var_13 = (((min(2481014176011557997, (((5329224820504187898 ? 1663749044 : (arr_0 [17]))))))) ? (!22) : 14469850143946493884);
        arr_4 [i_0] = arr_1 [9];
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_14 = (min(((((max(1815, -4583541462086322190))) ? (arr_7 [i_1]) : ((5329224820504187898 * (arr_5 [i_1] [i_1]))))), ((min(((-(arr_7 [i_1]))), -1663749023)))));
        var_15 += var_12;
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            {
                var_16 += min((!-2481014176011558006), ((65 ? 1506107911 : 210)));
                var_17 = ((((max(2481014176011558005, 173))) ? ((5184 ? (arr_1 [i_2 - 2]) : (arr_5 [i_2 + 1] [i_3 - 1]))) : 144));
            }
        }
    }
    #pragma endscop
}
