/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((~0) + (-var_13 == var_12)));
    var_17 |= var_10;
    var_18 &= ((-(((((max(var_7, 0))) >= var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [3] [i_0] = (((((!(arr_3 [i_0] [i_1] [i_0])))) >> 0));
                var_19 &= (max(((((var_1 ? (arr_4 [10]) : (arr_4 [2]))) << ((((~(arr_1 [i_0]))) - 2907998589309729802)))), var_1));
            }
        }
    }
    #pragma endscop
}
