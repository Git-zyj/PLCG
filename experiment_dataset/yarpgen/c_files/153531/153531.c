/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((max((arr_6 [i_0]), 163)));
                arr_8 [i_0] [i_1] [i_1] = ((((arr_6 [i_1]) ? (arr_5 [i_1] [i_0]) : ((((arr_2 [i_0] [i_0]) < (arr_5 [i_0] [i_1])))))));
                arr_9 [i_0] [i_0] [i_0] = 145250167;
                var_18 = (18446744073709551614 ? (arr_1 [i_0]) : -2049025850);
                arr_10 [i_0] = ((1023 / (3546375056835077675 && 17586249136157616246)));
            }
        }
    }
    var_19 = ((var_1 ? var_16 : var_6));
    #pragma endscop
}
