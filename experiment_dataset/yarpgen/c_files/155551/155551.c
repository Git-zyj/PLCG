/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = -1647190186;
                var_12 = (min((618608648716712096 > 0), (((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_13 = (((var_8 / -23) / 9223372036854775807));
                var_14 = (min(var_14, (((((((arr_5 [i_3] [i_2]) / ((min(3912601597, 32)))))) ? (arr_5 [i_3] [i_2]) : ((min(-90, -124))))))));

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_15 = ((((((((min(0, 65521)))) ^ (min((arr_8 [i_3]), (arr_6 [i_2] [i_3])))))) ? (min((((45 > (arr_1 [i_4] [i_4])))), (((arr_7 [i_2]) ? 130944 : 18446744073709551613)))) : (((((((arr_3 [i_3] [i_3]) ? (arr_4 [i_2]) : (arr_5 [i_2] [i_2])))) ? (var_5 > 2338511586) : (arr_6 [i_2] [i_2]))))));
                    var_16 = (~(arr_6 [i_2] [i_2]));
                }
                var_17 = (max(var_17, 1920));
                arr_10 [i_2] [i_2] = min(((((min(2, (arr_0 [i_2] [i_3]))) > (((12 << (-90 + 91))))))), 27354);
            }
        }
    }
    var_18 = var_5;
    var_19 &= (32640 * 27357);
    #pragma endscop
}
