/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-127 - 1) && ((max(50666, 1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = (((((-50664 + (14869 / 2184468813921457796)))) ? ((var_12 ? var_5 : ((var_7 ? var_1 : var_10)))) : ((((arr_3 [i_0] [i_1] [i_2]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))))));
                    var_15 = (arr_0 [i_0]);
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (((((arr_4 [i_0] [i_1] [i_0]) || (((~(arr_2 [i_0])))))) ? (min((~14865), ((var_2 + (arr_1 [i_0] [i_0]))))) : (((-((min(1, (arr_1 [i_0] [i_0])))))))));
                }
            }
        }
        var_16 = (((((-var_10 ? (((var_10 ? var_4 : 50670))) : (14869 & 0)))) ? (arr_0 [i_0]) : (50660 / 41865)));
        var_17 ^= (((((-(arr_7 [i_0] [i_0] [i_0])))) ? ((-(max(var_10, 514883620)))) : (min((-7471050779030905679 != var_4), (4294967278 * 50670)))));
        var_18 = (arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_19 *= (max(var_2, (((min(var_2, (arr_8 [i_3] [i_3 - 1]))) + 50667))));
        arr_12 [i_3] [i_3] = (((((((((arr_11 [i_3] [i_3]) | (arr_7 [i_3] [i_3] [i_3])))) ? ((var_1 ? -4486391630073921619 : var_2)) : var_2))) ? (arr_2 [i_3]) : ((-(~1)))));
    }
    #pragma endscop
}
