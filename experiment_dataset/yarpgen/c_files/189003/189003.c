/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (arr_5 [i_0]);
                var_11 = (min(var_11, ((max((((1323501187653674851 & 2147483647) ^ 17123242886055876772)), (((((var_4 ^ (arr_0 [i_1]))) >> (-1488129246223358000 + 1488129246223358030)))))))));
            }
        }
    }
    var_12 = (~var_1);
    var_13 = (min(var_13, (((((var_5 != ((var_5 ? var_3 : var_1)))) ? ((min(var_4, (!2147483647)))) : var_5)))));
    var_14 = 2147483647;
    #pragma endscop
}
