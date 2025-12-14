/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 127;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_2] [i_2] [i_3] = (((((4880185750262867952 && 4080) || ((min(var_7, 83))))) ? (arr_0 [i_0]) : ((+((var_1 ? (arr_8 [i_1] [0] [8] [i_1]) : (arr_2 [i_1])))))));
                            arr_10 [i_0] [1] [i_2] [0] = (!6442400678939659010);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_11 *= (min((((arr_3 [1]) ? (arr_3 [i_0]) : (arr_3 [i_1]))), (((arr_3 [i_5]) - (arr_3 [i_0])))));
                                var_12 |= ((var_0 * ((((4065 != ((min(var_7, 61455)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = 1677212611;
    var_14 = var_2;
    #pragma endscop
}
