/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_1 - 1] = min(40731, 145);
                    arr_10 [i_0] [i_2] = 1489470341018577681;
                    var_12 += ((((((((16957273732690973935 ? (arr_4 [i_0] [i_0] [i_0]) : 1))) ? (((-7925616075380305299 + 9223372036854775807) << (var_1 - 1648603099))) : -25))) ? (min(1489470341018577672, ((((arr_8 [3] [i_1] [i_1] [3]) ? -7925616075380305280 : (arr_1 [i_2 - 1])))))) : (max((arr_7 [i_1 - 1] [7] [i_0]), (-13 & 5)))));
                    var_13 = (max(var_13, (((var_3 ? 4 : (max(((-1 ? 9766991018654354780 : (arr_2 [i_0] [2]))), (arr_8 [i_0] [i_0] [i_2 - 1] [i_2 + 2]))))))));
                    var_14 = (!-8987);
                }
            }
        }
    }
    var_15 = (((min(((96 ? var_8 : var_7)), var_8))) && var_10);
    #pragma endscop
}
