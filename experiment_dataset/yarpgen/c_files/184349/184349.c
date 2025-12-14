/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2] = min(var_6, -var_7);
                    arr_8 [i_0] [i_2] [i_1 + 2] [i_2] = 0;
                    var_10 = (arr_4 [i_0] [i_1 - 2] [i_2]);
                }
            }
        }
    }
    var_11 = (min(var_11, ((((min(18446744073709551590, -1742791327))) ? var_8 : 1))));
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_3] = ((((((min(1, -5)))) == ((~(arr_12 [i_3] [i_4]))))));
                arr_15 [i_3] [i_4] = ((249 ? ((-32762 ? 65535 : (arr_11 [i_4]))) : 1));
                var_13 *= ((((((arr_10 [i_3]) | (arr_10 [i_3])))) ? (arr_11 [i_4]) : (((var_1 && (arr_11 [i_3]))))));
            }
        }
    }
    var_14 = ((~(min(var_8, var_2))));
    #pragma endscop
}
