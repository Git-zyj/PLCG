/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = (min(var_2, (((!(15871435335663135955 && 2575308738046415661))))));
                    arr_11 [i_0] [i_1 - 1] [i_2] [i_2] &= (min(-3069201448507964246, var_15));
                    var_17 = (max(var_17, ((max(((((((arr_2 [i_0 - 1] [i_2]) ? var_7 : var_3))) ? (arr_2 [i_0 - 1] [i_2]) : (!var_4))), ((max(var_4, var_14))))))));
                }
            }
        }
    }
    var_18 = (min(var_18, var_7));
    var_19 = var_9;
    var_20 = 7324103501747284605;
    var_21 += var_1;
    #pragma endscop
}
