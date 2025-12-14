/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (((((!(arr_0 [i_1 - 2])))) << (((min((arr_0 [i_1 - 3]), -6275)) + 155676934))));
                var_17 = (min(((1700153630 ? (arr_1 [i_0 - 3] [1]) : (arr_3 [i_0] [i_0 + 1] [i_1 + 2]))), (arr_3 [i_0] [i_0 + 1] [i_1 + 2])));
                var_18 = (((arr_1 [i_1] [i_0]) && 1073741823));
            }
        }
    }
    var_19 = (((((((max(1, 6274))) ? ((65524 ? 64 : var_1)) : 24))) ? (var_7 || -var_15) : (min((min(2954568996624155864, 1482)), var_12))));
    #pragma endscop
}
