/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((~((((var_4 == 1) == var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_11 += (0 >= ((13117168989505145150 >> (1023 - 990))));
                    arr_10 [i_0] = (max((((max((arr_8 [9] [i_1] [i_0] [i_0]), var_4)) <= ((6321005386053511014 ? var_7 : 527886427)))), (((((13812327703232822539 ? 18446744073709551593 : (arr_4 [i_0] [i_1] [0])))) && ((max(30341696, 5424658959741698328)))))));
                    var_12 = (1923758009415687675 >> (((~5112616303477818640) - 13334127770231732940)));
                    arr_11 [i_0] [i_1] |= (!(~18446744073709551565));
                }
            }
        }
    }
    var_13 = (max(var_1, var_8));
    var_14 = ((12087431877285645643 || (var_8 >> var_4)));
    #pragma endscop
}
