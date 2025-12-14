/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = 5;
                    var_16 = (max(var_16, ((((-(arr_5 [i_1] [i_1] [i_1])))))));
                    arr_8 [i_0] [i_1] = ((~((((var_4 ? var_4 : (arr_6 [i_1] [i_1] [i_0] [i_1])))))));
                    var_17 ^= var_5;
                }
            }
        }
    }
    var_18 -= 5;
    var_19 ^= (((((var_7 || var_8) ? var_3 : ((min(var_14, var_7))))) < (((((min(99, var_8))) != ((var_2 ? var_0 : var_2)))))));
    var_20 ^= (max(((-(var_11 > var_13))), var_5));
    var_21 = -var_11;
    #pragma endscop
}
