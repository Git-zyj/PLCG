/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 += (min((((!((max(115037658946559039, (arr_3 [1]))))))), -1984));
                arr_4 [i_1] = (max(2567690310, 1));
                var_13 ^= (max(1984, ((((!1984) > 1984)))));
                arr_5 [i_1] [i_1] = (-49 > (min(1984, 1956567324)));
            }
        }
    }
    var_14 = 63552;
    var_15 = var_0;
    #pragma endscop
}
