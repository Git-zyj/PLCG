/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_9));
    var_16 = 52745;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_17 = (((~(arr_3 [i_0 - 1]))));
        var_18 = max(((var_5 ? (arr_0 [i_0 - 2] [i_0 - 2]) : -22406)), (max((~var_3), 15747040609567919581)));
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    {
                        var_19 = var_13;
                        var_20 = ((((((34796 ? 1 : (arr_8 [i_4] [i_4] [i_4]))) & 65408))) ? ((((arr_10 [i_1 - 2] [i_1 - 1] [i_2 - 2]) ? 2079766593 : (arr_10 [i_1 - 1] [i_1] [i_1])))) : ((-(min(-478155778, var_6)))));
                    }
                }
            }
        }
        arr_13 [i_1] = ((((arr_5 [i_1 - 3] [i_1 + 1]) && -2097746792)));
        arr_14 [i_1 - 1] = ((~((~(max(15248234599942068115, var_13))))));
    }
    var_21 = -var_9;
    #pragma endscop
}
