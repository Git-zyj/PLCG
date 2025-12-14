/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((((-(92 != -3)))))));
                    arr_9 [i_1] [i_1] = ((((max(((((arr_4 [i_1] [i_1 + 1]) <= 8676234300277758883))), (1944590893 * -32756)))) || ((((((-1 ? -8258010832266768854 : 254))) & (arr_1 [i_1 + 1] [i_1 + 1]))))));
                    arr_10 [i_0] [i_2 + 1] [i_1] = 254;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_15 -= ((~(1 && -17)));
                                var_16 = ((15 ? (((!((max(-7, -42)))))) : ((min((-2 || 1), 34)))));
                                var_17 = ((-(6444277837810784347 - 1)));
                                arr_17 [i_1] [i_2] = ((((((-(arr_11 [i_4] [i_2 + 3]))) | 1)) <= 1));
                                var_18 = (max(var_18, (((+((-61190 ? (arr_11 [i_3] [i_3]) : (arr_0 [i_3] [i_3]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_19, -1795574499910722393));
    var_20 = ((((((239547613 ? -1 : -11555)))) ? (((var_0 <= 1022310388) | ((-20 ? 591371271 : 110)))) : ((min(((var_7 ? 17 : 229)), var_13)))));
    #pragma endscop
}
