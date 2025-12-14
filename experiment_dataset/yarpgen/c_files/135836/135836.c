/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((((max(-114, 44079))) ? var_2 : -var_1))) >= (min(12, (max(1, 2145022456735544839)))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = (((max(3121310729, ((((arr_2 [i_0]) ? 124 : 21456))))) | (arr_1 [i_0])));
        arr_3 [i_0] = -var_5;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = 44080;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_14 = 21457;
                    var_15 = (arr_10 [i_3] [i_2]);
                }
            }
        }
        var_16 = (max(var_16, ((((31947 + 242) ? ((~(arr_11 [i_1] [i_1] [i_1] [i_1]))) : ((~(!102))))))));
        arr_14 [1] = ((((21477 ? 44081 : -2147483630)) > -152854922));
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_17 = ((var_10 << (((((max(var_2, (arr_1 [i_4])))) != (arr_13 [i_4] [i_4] [i_4] [i_4]))))));
        var_18 = (max(var_18, var_9));
        var_19 = var_3;
    }
    #pragma endscop
}
