/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((((((var_9 % var_7) ? -10428 : (min(2603689637, 11365))))) || (((-10428 ? var_7 : ((var_11 ? -2014 : var_4)))))));
    var_15 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = ((!((0 <= (min(13, (arr_0 [i_0])))))));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 9;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_17 = (max(var_17, (min((max((arr_9 [i_1 + 1]), var_11)), (max(1632136959, (max(var_11, var_4))))))));
                            arr_13 [i_0] [i_1] [i_3 - 1] [i_3] = ((~(((arr_3 [i_2] [i_2]) ^ (arr_4 [i_3] [i_4])))));
                            arr_14 [i_3] [i_3] = (arr_9 [i_0]);
                        }
                    }
                }
            }
            var_18 ^= ((((-(var_13 >= var_5))) % ((((max(var_4, var_1)) != (var_2 & 14))))));
        }
    }
    for (int i_5 = 3; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] |= (max((max(var_7, ((var_10 ? var_2 : var_6)))), var_12));
        var_19 = (max(var_10, ((-(arr_16 [i_5 - 1] [i_5 - 2])))));
        var_20 = var_5;
    }
    for (int i_6 = 3; i_6 < 23;i_6 += 1) /* same iter space */
    {
        var_21 = ((+((((arr_19 [i_6] [13]) != (max(10454, (arr_15 [i_6]))))))));
        var_22 |= ((((4294967277 ? (((var_4 || (arr_18 [i_6] [i_6 - 2])))) : (~var_2))) >= (arr_18 [i_6 + 1] [i_6])));
    }
    var_23 = max(1691277682, 0);
    #pragma endscop
}
