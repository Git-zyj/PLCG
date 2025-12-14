/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((var_10 > (min((min(223015370, var_9)), (max(var_1, var_1))))));
    var_21 = (min((1813061995 != var_2), (~var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = ((~((~((min((arr_9 [i_0] [i_0] [i_3]), (arr_9 [i_0] [i_2] [i_2]))))))));
                        var_22 = (((((var_18 ? (arr_0 [i_0]) : var_10))) > 4294967295));
                    }
                    arr_11 [i_0] [i_0] = min(((~(arr_5 [i_0]))), ((~(arr_5 [i_0]))));
                    arr_12 [i_0] [i_0] [i_1] [i_2] = 4294967295;
                }
            }
        }
    }
    var_23 ^= var_6;
    var_24 = ((((min(538485130, (max(633112000, var_14))))) ? (min(((var_13 ? var_6 : var_1)), var_11)) : var_12));
    #pragma endscop
}
