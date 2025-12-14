/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = 658008081277363911;
        var_13 = (min(((max(var_1, var_5))), (((var_0 < (arr_2 [i_0 - 2]))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_14 = ((-((-123 ? -102718088862491827 : 1))));
                        var_15 = (i_2 % 2 == zero) ? (((((~(arr_5 [i_2 - 1] [i_1 + 2] [i_0 + 1]))) ^ (((3140289569 << (((arr_11 [i_1 - 2] [i_2 - 1] [4] [i_2]) - 61)))))))) : (((((~(arr_5 [i_2 - 1] [i_1 + 2] [i_0 + 1]))) ^ (((3140289569 << (((((arr_11 [i_1 - 2] [i_2 - 1] [4] [i_2]) - 61)) - 44))))))));
                    }
                }
            }
        }
        var_16 = ((((((arr_3 [i_0 - 1]) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 1])))) || (var_9 >= 44353)));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_20 [i_4] [i_4] [i_4] = (((0 % (max(0, var_8)))));
                var_17 = ((max((!var_9), (arr_17 [i_4 + 2] [i_4 - 1]))));
                arr_21 [i_5] [i_5] [i_5] = ((((min((arr_16 [i_4]), (arr_15 [10])))) ? ((((((var_2 ^ (arr_19 [i_5])))) <= (((arr_17 [i_4] [i_5]) ? (arr_17 [i_4 - 1] [i_4 - 1]) : (arr_18 [17] [i_5])))))) : 1));
            }
        }
    }
    #pragma endscop
}
