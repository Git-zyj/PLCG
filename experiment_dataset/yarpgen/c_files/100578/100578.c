/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = ((250 ? 7280 : -1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_15 &= (((((((min(17583596109824, 6604054289508381547))) ? (arr_0 [14]) : (arr_1 [i_1 - 1])))) ? (arr_4 [i_0] [i_1]) : (!4388609480158892319)));
                var_16 += ((-(~-1)));
                var_17 = (min(var_17, (min((((arr_3 [i_1 + 2] [i_0]) ? var_5 : (arr_0 [i_0]))), (arr_0 [14])))));
                arr_5 [i_0] [17] = ((((((arr_3 [i_0] [i_1 - 1]) ? ((~(arr_0 [i_0]))) : 8192))) || (((((min((arr_2 [i_0] [i_0]), 127))) ? 2902862583 : (((((arr_0 [2]) || var_1)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_4] [i_1] = ((((267911168 ? 0 : 250)) >> (((~var_4) - 1344530630))));
                                var_18 = (max(var_18, var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 ^= ((~(!var_11)));
    #pragma endscop
}
