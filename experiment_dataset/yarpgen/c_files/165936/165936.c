/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((max(22300, (((!var_0) ? (arr_1 [i_1 + 1]) : var_19)))))));
                arr_4 [i_1] = (!72057576858058752);

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_2] [10] = 3870304616;
                    arr_8 [i_2] = (~9);
                }
            }
        }
    }
    var_21 = ((var_10 > ((min(57469, var_17)))));
    #pragma endscop
}
