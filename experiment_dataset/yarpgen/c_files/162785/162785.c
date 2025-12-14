/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = (max(8068644796855237647, 10378099276854313978));
                    var_15 = ((((min((arr_1 [i_0]), (!0)))) & (~8068644796855237655)));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_2] = (((min(32754, 2147483647))) ? (((arr_3 [i_0]) ? 32767 : (12773534333257621976 == -31664))) : var_5);
                        arr_14 [i_0] = (~0);
                        arr_15 [i_0] = 7495;
                        var_16 = (max(var_16, ((((((-7504 ? 0 : 1))) ? ((-((-1043852290 ? 434165378 : 1710723743)))) : ((((((0 ? var_12 : 335282355))) ? 189891869 : var_12))))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = (~-189891869);
                    }
                }
            }
        }
    }
    var_17 = (max(var_17, var_4));
    #pragma endscop
}
