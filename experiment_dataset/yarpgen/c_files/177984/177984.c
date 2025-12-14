/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_0] [i_2] &= (min(2049114982313811190, (1152921503533105152 ^ var_2)));
                    var_20 = ((((((arr_1 [i_0] [i_0]) + (arr_1 [i_0] [i_0])))) || ((((var_2 < var_8) ? var_18 : (((2049114982313811209 ? 31620 : (arr_2 [i_0] [i_0] [i_0])))))))));
                    arr_8 [i_0] [i_1 - 1] [i_2] = (((((var_2 ? (arr_4 [i_0] [i_1 + 1]) : var_2))) ? ((-32763 ? (arr_4 [i_1] [i_1 + 1]) : (arr_6 [i_1] [i_1 + 1] [i_1 + 1]))) : (min((arr_4 [i_1 + 1] [i_1 - 1]), (arr_4 [i_0] [i_1 - 1])))));
                    var_21 = ((+(((((-31631 ? (arr_3 [i_2]) : 116))) ? ((max((arr_1 [i_1 - 1] [i_1 - 1]), var_8))) : ((32746 ? var_0 : -32763))))));
                }
            }
        }
    }
    #pragma endscop
}
