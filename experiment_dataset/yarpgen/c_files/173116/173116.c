/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_14 ? (-82 - var_14) : var_8)));
    var_18 = (min(((var_1 ? (var_7 ^ var_3) : ((var_5 ? var_1 : 65535)))), ((var_2 << (var_0 - 4294967190)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (arr_2 [i_1] [i_0]);
                var_20 = (max(var_20, ((min(2790599548, ((((arr_0 [i_0]) > ((var_8 ? -22 : (arr_4 [i_0] [i_0] [12])))))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_21 = (max(var_21, ((((((((((arr_6 [i_3]) >= 255))) << (!0)))) ? var_4 : ((~(arr_11 [i_3] [i_3] [i_4]))))))));
                    var_22 = ((-((5 ? 67104768 : var_0))));
                }
            }
        }
    }
    var_23 = (max(var_23, ((min((((var_1 * (-127 - 1)))), (((~(~0)))))))));
    #pragma endscop
}
