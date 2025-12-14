/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((var_12 <= ((min(var_9, -69)))));
    var_16 = (((max((min(var_14, 3928283215)), ((min(186, var_14)))))) ? ((((max(69, -99))) ? var_8 : var_9)) : ((((var_14 <= (199 > 69))))));
    var_17 = (min(var_17, (((!(((min(4039320156, 3524251445)) > 4008229510161955508)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [10] &= (min(((((((4039320135 ? 73 : 91))) ? (arr_0 [i_1 + 1]) : var_9))), (min((((var_6 ? (arr_2 [i_0]) : var_10))), ((4039320144 ? 4190381499 : var_2))))));
                    var_18 = (max((4294967295 == 2755171068), ((!(arr_2 [i_0 + 1])))));
                    var_19 = ((((var_13 ? (((var_0 ? 3714765468754128819 : (arr_3 [0] [i_2])))) : ((2762619493 ? var_14 : var_5)))) * ((((arr_1 [i_0 + 1] [i_1]) ? (arr_5 [i_2] [i_1 + 2] [i_2]) : 91)))));
                    arr_9 [i_2] [i_2] [8] [i_2] = (+(((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 2]) : 0)));
                }
            }
        }
    }
    #pragma endscop
}
