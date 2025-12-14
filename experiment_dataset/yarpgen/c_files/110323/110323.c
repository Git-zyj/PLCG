/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = (min(var_13, var_9));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = ((~((-7 ? (arr_1 [i_0]) : 0))));
        var_15 ^= ((!((max((!0), ((268435455 ? 55638 : (arr_1 [6]))))))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = 0;
        var_16 = (max(var_16, -var_10));
        var_17 = (max(var_5, (((((1422512539662280108 ? 0 : 65408))) || var_5))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_18 -= ((((max((arr_0 [i_1 + 2]), 65533))) ? (max(var_5, -65413)) : (arr_0 [i_3])));
                        var_19 = (((--4356238696149967011) || 862834696));
                    }
                }
            }
        }
        var_20 ^= (min((((((min((arr_13 [1] [1]), (arr_7 [10] [10])))) || (arr_10 [i_1] [i_1] [1] [i_1])))), 67));
    }
    #pragma endscop
}
