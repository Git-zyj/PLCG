/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = ((((arr_0 [i_0] [i_0]) ? (((3890210014 ? -18328 : 18329))) : ((~(arr_4 [10] [i_1] [i_1]))))));
                var_18 &= ((((3780139253 + (-18328 / var_2))) == (((3562434947 ? ((((!(arr_3 [10] [10]))))) : 3562434947)))));
                var_19 *= ((((-(arr_4 [i_0] [12] [i_1]))) ^ ((min(-953266164331495289, (min(732532349, (arr_0 [i_1] [i_0]))))))));
            }
        }
    }
    var_20 &= (6457565682961190932 & -1485786203);
    #pragma endscop
}
