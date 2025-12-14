/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 ^= ((var_8 && ((((var_3 >= -22576) & -97)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = ((var_7 ? (max((arr_0 [i_1] [i_0 + 4]), -133169152)) : (((max(-27412, 1))))));
                    arr_10 [i_2] [i_1] = var_0;
                    arr_11 [i_0] [6] = (-27412 ? ((((!(((arr_7 [i_0]) || var_10)))))) : (max(34469069, 6580498458031547441)));
                    var_14 = -511;
                    var_15 = (max(var_15, ((((((-(arr_9 [i_2] [i_2] [1] [i_0])))) && ((((arr_8 [i_0 + 1]) ? var_1 : (arr_8 [i_0 + 1])))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_16 = ((~(min((-85 && 323518072), -1278867483))));
        arr_14 [i_3] = var_1;
    }
    var_17 = (((min(7568, 3107102265)) + var_9));
    #pragma endscop
}
