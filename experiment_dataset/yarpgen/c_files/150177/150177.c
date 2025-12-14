/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(-var_6, -var_10)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(((1 ? var_15 : (arr_1 [2]))), -var_1))) ? (max(((~(arr_0 [i_0]))), 1)) : 1));
        arr_3 [i_0] = (--12002747199456869134);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                var_18 = (-(((arr_9 [i_1]) + (arr_1 [i_2]))));
                arr_10 [i_2] [i_1] = (arr_7 [i_1]);
                var_19 = (((((((((arr_5 [i_2]) ? (arr_6 [i_1] [i_2]) : (arr_7 [i_2])))) ? var_7 : ((-7023 ? (arr_9 [1]) : (arr_5 [i_2])))))) ? ((min((-3789936199408749622 ^ var_0), (~3789936199408749646)))) : (((~13) & (max((arr_9 [i_2]), (arr_6 [i_1] [i_2])))))));
                var_20 = -3789936199408749614;
                var_21 *= (((max(3789936199408749639, 268435328)) ^ (((~((-(arr_7 [i_2]))))))));
            }
        }
    }
    #pragma endscop
}
