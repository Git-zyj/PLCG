/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_11 = (((((-(131 / 141)))) ? (max(113, (var_8 % var_5))) : (arr_5 [i_0] [i_0])));
                        var_12 = (max((max(((1332588764 ? (arr_4 [i_2]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), ((max(115, 121))))), ((((min((arr_0 [i_0]), -5902020110165962613)) >= (arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 3] [i_2 - 3]))))));
                    }
                }
            }
        }
        var_13 = (((((arr_2 [i_0] [i_0]) ? (((var_3 ? var_2 : 121))) : 9034691692885474945)) * (((1538083652 % (arr_5 [i_0] [i_0]))))));
        var_14 |= ((max(98, 114)) >= 103);
        var_15 = var_4;

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_16 -= ((((((32767 ? 139 : 1014466313)) + (arr_7 [14] [14]))) ^ (max((arr_13 [2]), (6 ^ -1235322997)))));
            arr_14 [i_0] = (0 * 135);
            arr_15 [i_0] = ((var_6 && ((max(var_0, (arr_7 [i_0] [i_0]))))));
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_17 &= ((var_1 - (max(0, (var_9 / 141)))));
        var_18 = (((((-2147483647 - 1) ? 11867289281504844611 : 2297795007)) ^ ((max(234, 752212865)))));
        var_19 -= (arr_16 [i_5]);
    }
    var_20 = max(var_10, (~var_6));
    #pragma endscop
}
