/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((max(((min((var_10 || 2147334991), var_3))), var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] = -62;

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_18 += max((max((((-(arr_0 [i_2])))), var_11)), var_2);
                        var_19 = (max(var_19, (((((0 ? 7620441961258714376 : (-32767 - 1)))) ? 1 : (var_7 == 2)))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_20 = 3622201749109723670;
                            arr_25 [i_5] [i_5 - 1] [i_6] [i_7] = (max((+-7620441961258714376), var_0));
                        }
                    }
                }
                arr_26 [i_5] [i_5] = -var_9;
            }
        }
    }
    var_21 ^= ((~(max(((max(1, 56107))), 5307703389692203334))));
    var_22 = 9429;
    #pragma endscop
}
