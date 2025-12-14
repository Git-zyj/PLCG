/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((!((((((16 | (arr_5 [i_1])))) ? (arr_4 [2] [i_1]) : (arr_5 [i_0])))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_0] = (min(((((((arr_3 [i_2] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_2]) : var_12))) ? (((arr_1 [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_8 [i_0] [i_1] [i_2]))) : var_3)), 1));
                    arr_10 [i_0] [i_0] = (((arr_0 [i_1]) ? (((arr_1 [i_0]) ? 1 : (arr_1 [i_2]))) : (~var_3)));
                    var_14 = ((((0 >> (-1 + 1)))) ? 1 : (min((((arr_3 [i_0] [i_0] [i_2]) | (arr_4 [i_0] [i_2]))), (((arr_5 [i_0]) ^ (arr_2 [i_0] [i_0]))))));
                    var_15 += ((max((arr_1 [i_0]), (arr_5 [i_0]))));
                }
            }
        }
    }
    var_16 = (((var_10 + 2147483647) << (((var_5 + 510586300292758095) - 31))));
    var_17 = (--4734976822828568987);
    var_18 = (min(var_18, (((1 ? -127 : -2584684407567535429)))));
    var_19 = var_5;
    #pragma endscop
}
