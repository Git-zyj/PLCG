/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(var_1 / var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((+(((arr_5 [i_1 + 2] [i_1 + 2] [i_0]) ? (arr_5 [i_1 - 1] [i_1] [i_0]) : (arr_1 [i_0] [i_1])))));
                arr_7 [i_0] = -28535;
                var_11 &= (((((-2147483647 - 1) ? (max(13245810844679785811, (arr_1 [2] [i_1 + 1]))) : 110)) - 1912004283391128201));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] [i_2] = var_2;
                var_12 = (arr_11 [i_2] [i_2]);
                var_13 = ((arr_8 [i_2]) | ((((((arr_11 [i_3] [i_2]) ? (arr_8 [i_3]) : 6725157218986090083))) ? ((((arr_10 [i_2] [i_2] [i_3 + 1]) << (((arr_9 [i_2]) - 14423703457477897306))))) : var_6)));
            }
        }
    }
    #pragma endscop
}
