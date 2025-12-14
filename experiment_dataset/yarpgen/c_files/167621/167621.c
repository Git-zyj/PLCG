/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (((545795772 % 5) ? -var_6 : ((((((arr_2 [i_0]) ? 12711045509599872412 : (arr_4 [i_1])))) ? var_9 : ((((arr_2 [i_0]) && (arr_4 [i_1]))))))));
                arr_7 [i_1] [i_1] = ((((((arr_6 [i_1 - 1]) / (arr_6 [i_1 - 2])))) && (((((max((arr_3 [i_0] [i_0] [0]), (arr_2 [4])))) ? ((~(arr_6 [i_0]))) : (arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 1]))))));
                var_18 = (((((arr_0 [i_1 - 1]) - var_5)) << (min((max((arr_1 [i_0] [i_0]), -22)), 27))));
                arr_8 [i_1] = ((((((((126 ? var_14 : var_6)) < (~var_1))))) >= ((-34 ? ((max(1532977059, var_3))) : (arr_0 [i_1 + 1])))));
            }
        }
    }
    #pragma endscop
}
