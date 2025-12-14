/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_7, (((!((max(-13526, var_6))))))));
    var_15 *= (!(((-30944 * (-30894 ^ 30943)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 += (((((((max(30926, -60)))) >= (~-1))) ? -1 : ((10810724235167319841 ? 0 : 6466963409435263887))));
                    arr_7 [i_2] [i_1] [i_0] = ((+((var_3 ? (arr_6 [i_0] [i_0] [9]) : var_2))));
                    arr_8 [20] [i_2] [i_2] = (max((((!(((4294967293 ? var_11 : 0)))))), ((~(min(503347338, var_13))))));
                }
            }
        }
    }
    var_17 = (((((65535 ? 6144 : 30904))) ? 1 : 0));
    #pragma endscop
}
