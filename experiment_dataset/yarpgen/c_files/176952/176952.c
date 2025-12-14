/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_14 *= ((((min(var_4, -15621))) ? ((max(var_13, var_12))) : (max(var_3, (15620 < 1167343172)))));
                        arr_13 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0] = ((+(min((arr_3 [i_0 + 3] [i_0 + 3]), 1128325790))));
                        var_15 = (min(1901739501, (((min((arr_12 [i_0] [i_0] [i_0] [i_0]), 10033713064587492881))))));
                        var_16 += (min((((var_10 < (arr_10 [i_0] [i_1 + 3] [i_2])))), (((max(13, 1)) + var_6))));
                        var_17 *= var_2;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_1] = ((~(arr_4 [i_0] [i_0 - 2])));
                        arr_18 [i_0] [i_1] [i_0] [i_2] = ((-(arr_15 [i_1 - 1] [i_0 - 2])));
                    }
                    var_18 = (11956709728621096900 ? 1 : -12870);
                    var_19 = ((-var_2 >= (~-970750194)));
                    var_20 = (var_6 ? ((((min((arr_1 [i_0]), 63051))) ? ((0 ? 14583063403733641445 : 65535)) : var_13)) : ((max(var_10, 4294967295))));
                }
            }
        }
    }
    var_21 = (max((min(var_10, var_12)), var_0));
    var_22 = var_4;
    var_23 = (((var_12 ? 167 : (var_13 > var_6))));
    #pragma endscop
}
