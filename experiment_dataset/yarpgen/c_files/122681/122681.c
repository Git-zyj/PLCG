/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((-7598994944552156922 == (((arr_2 [i_0] [i_1] [9]) ? (max(4233379022079529346, 7598994944552156896)) : ((max(var_6, (arr_1 [i_1]))))))));
                var_14 = ((((((~(((!(arr_4 [i_0 + 3])))))) + 2147483647)) >> ((((var_0 < (arr_2 [i_0] [i_1] [i_1])))))));
                var_15 = (max(var_15, 0));
            }
        }
    }
    var_16 = -var_2;
    var_17 &= var_6;
    var_18 = (var_2 & (((!(((60 >> (-32747 + 32754))))))));
    #pragma endscop
}
