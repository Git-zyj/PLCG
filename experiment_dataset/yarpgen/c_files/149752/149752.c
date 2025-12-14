/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((!(((var_2 >> (((arr_4 [i_1] [i_1]) - 11691427436128270364)))))));
                var_16 = (min((min((min(var_15, (arr_1 [i_1 - 3]))), ((var_1 ^ (arr_3 [i_0] [i_1]))))), (min((arr_4 [i_1] [i_0]), ((((arr_0 [i_0]) ? 84373023 : 12)))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_17 = var_11;
                    arr_10 [i_0] [i_0] = (min((arr_1 [6]), (((var_9 ? (((!(arr_8 [i_0] [i_1] [i_2])))) : 0)))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_18 *= (!24);
                    var_19 -= ((var_12 + (((629266579 ? (arr_9 [3]) : (arr_8 [i_0 - 1] [i_0 - 1] [i_3]))))));
                }
                for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_4 + 1] [i_4] [i_4] [i_0] = max(1, ((881894375458778315 >> (11343100897398423854 - 11343100897398423830))));
                    var_20 = (max(var_20, ((((!((max(var_7, (arr_1 [i_0])))))) ? ((((!(!var_3))))) : (((!2470818043) ? 2926297046 : (((min(221, 1))))))))));
                    arr_19 [i_4] = (((arr_13 [1] [i_4] [i_4 - 1] [i_0 - 1]) ? ((var_12 ? var_6 : (arr_13 [i_4] [i_4] [i_4 + 1] [i_0 - 1]))) : (0 + 0)));
                    arr_20 [i_4] = (max((((arr_0 [i_1 - 2]) ? var_11 : var_12)), (arr_6 [i_0] [i_0 - 1] [i_0])));
                    var_21 = (((min((arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_9 [i_4 + 1]))) + (max((arr_9 [i_0]), (arr_0 [i_0])))));
                }
            }
        }
    }
    var_22 *= var_8;
    #pragma endscop
}
