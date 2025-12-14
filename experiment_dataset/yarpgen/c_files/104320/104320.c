/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_11 <= -17468) ^ ((-(~var_17))));
    var_20 = ((((-(var_18 ^ var_17))) <= ((~(min(var_7, 0))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((((((~(arr_2 [i_0] [i_0])))) ? -3977 : (((arr_0 [i_0]) ? 8712968201934457896 : var_1))))) ? ((((~-3966) == ((~(arr_0 [i_0])))))) : (((!(((var_12 ? 22 : 30465))))))));
        arr_4 [i_0] = -1417728569;
        arr_5 [i_0] [i_0] = 327760748;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = (min(var_9, (arr_1 [18] [6])));
                    arr_11 [i_0] [i_0] [i_1] [21] = var_13;
                    arr_12 [i_0] = ((-72 <= (1 ^ 2009)));
                }
            }
        }
    }
    var_21 = (min(((1333391827 ? ((min(var_13, var_10))) : -var_18)), (min((min(var_2, -555742691)), var_11))));
    #pragma endscop
}
