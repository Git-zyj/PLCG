/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min(((((((-127 - 1) + var_0))) ? var_3 : var_9)), ((max(((min(var_4, -8))), ((188814971 ? var_0 : 188814971))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            {
                var_15 = (((((2251799813685184 / var_9) / 21)) < ((((-127 - 1) ? 1462216271 : (arr_3 [i_0 - 1]))))));
                var_16 = min((((arr_3 [i_0 - 2]) < 20650)), (((!var_7) == (var_2 >= var_10))));
                var_17 = (max(var_17, (((((-53 ? 65535 : (arr_0 [5]))) * (((!(arr_2 [i_1 + 2])))))))));
            }
        }
    }
    #pragma endscop
}
