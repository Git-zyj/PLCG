/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((var_12 ? ((((min(41890, 3474196769))) - ((3474196752 ? 35184372087808 : 23626)))) : (((max((((!(arr_1 [i_0] [i_0])))), (arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [6] [i_1] = ((((min(32767, (~-2702630874434129209)))) ? (((((min(var_5, 0))) ? (!41910) : (arr_3 [8] [1])))) : 842341591));
                            arr_12 [4] [6] [4] = 15872;
                            arr_13 [4] [6] [10] [4] |= 0;
                            arr_14 [i_0] [4] [8] [10] = ((-669562201 ? ((var_5 ? -3 : (arr_6 [i_0] [i_2] [i_2]))) : 0));
                        }
                    }
                }
                arr_15 [0] [i_1] = (arr_2 [0]);
            }
        }
    }
    #pragma endscop
}
