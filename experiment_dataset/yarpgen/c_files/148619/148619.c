/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (max((((((min(4294967295, (arr_8 [i_0] [i_0] [1])))) ? var_6 : (((-(arr_9 [16] [i_1 - 2] [i_2] [i_2]))))))), (arr_2 [i_0])));
                    arr_10 [i_1] = ((max(var_3, (((arr_6 [i_0] [i_1 - 1] [i_0]) ? 13332 : 0)))) % (arr_4 [i_0] [i_1] [i_0]));
                    arr_11 [i_0] [i_0] [i_1] [19] = ((!((!(arr_5 [i_0] [i_1 + 3] [i_2])))));
                    var_16 = (arr_6 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_17 *= ((18446744073709551615 ? 1384074660 : 1));
    var_18 = ((((min((-127 / 8388608), ((1 ? 8388608 : 0))))) && ((((25170 ? 0 : 4411991117721947277))))));
    #pragma endscop
}
