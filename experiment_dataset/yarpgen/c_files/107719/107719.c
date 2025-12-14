/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_6 ? var_9 : (max(-6748032382616536929, var_2))));
    var_19 = (min(var_19, (((!((((((var_2 ? var_15 : 6748032382616536928))) ? ((var_8 ? var_17 : var_16)) : -var_13))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (min((((((((arr_2 [i_1] [i_1] [i_0]) ? var_0 : var_2))) ? 6578209947070925237 : ((var_5 / (arr_0 [i_1] [i_1])))))), -6748032382616536943));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_20 += ((!(((var_6 ? (arr_1 [i_2]) : (arr_1 [i_0]))))));
                    var_21 -= 1;
                    arr_10 [i_0] [i_0] [i_0] [i_2] = (((((((((arr_4 [i_0] [i_1]) % (arr_1 [i_0])))) & (((arr_9 [i_0] [i_1] [i_2] [i_2]) ? (arr_2 [i_0] [i_0] [i_0]) : var_1))))) <= (max(((((arr_8 [i_0] [i_0] [i_1] [i_1]) | var_16))), (arr_3 [i_0] [i_0] [i_2])))));
                    var_22 = (((((arr_9 [i_0] [i_1] [i_2] [i_1]) ? (arr_4 [i_1] [i_1]) : var_9))));
                }
            }
        }
    }
    #pragma endscop
}
