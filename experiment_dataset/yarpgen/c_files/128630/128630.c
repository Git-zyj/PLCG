/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_3] [i_2] [i_2] [i_1] [i_2] = (-9223372036854775807 - 1);
                            var_15 = (min((max(1, 115)), ((min(1, (min(255, 237)))))));
                            var_16 = ((27 && (4226113809 >> 1)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_17 = 1327166060;
                            var_18 = 2699052657882405989;
                            var_19 = ((min(-613, (min(16256, 3211036633)))));
                            arr_16 [i_5] = 9389398548317859622;
                        }
                    }
                }
            }
        }
    }
    var_20 = (((min(-16246, -31662))));
    var_21 = var_12;
    var_22 = (((-68853487 - 8191) && -1));
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    arr_27 [i_7] [i_7] [i_6] = ((((202 - (25711 / 9223372036854775801))) >= (-401651888 != 26606)));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_33 [i_9] = 671742704;
                                var_23 += ((68853512 < ((((!49) >> ((((min(9219, 8198))) - 8178)))))));
                                arr_34 [i_9] [i_10] [i_9] [i_8] [i_7] [i_9] = (min((45 || 4226113821), 4057956771));
                                arr_35 [i_8] [i_9] [i_8] [i_8] [i_8] [i_8] = 296083595;
                            }
                        }
                    }
                    var_24 = 215;
                    arr_36 [i_6] [i_7] [i_7] [i_8] = -28;
                }
            }
        }
    }
    #pragma endscop
}
