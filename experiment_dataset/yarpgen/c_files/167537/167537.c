/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, -var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((var_2 > (var_8 < var_2)));
                    var_11 = 52963;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_13 [i_3] [5] [i_3] = ((-((428842295 ? var_0 : var_7))));
                var_12 = (min(var_12, ((((((21 ? 6147712223503935432 : 3295525844))) ? ((((!(arr_12 [i_3] [i_3]))) ? (arr_1 [i_3] [i_3]) : -100)) : ((max((arr_1 [i_4] [i_4]), (arr_1 [i_3] [i_4])))))))));
                var_13 = (min((!234), (arr_5 [i_3])));
            }
        }
    }
    #pragma endscop
}
