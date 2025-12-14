/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] &= var_10;
                arr_7 [i_0] [i_1] [i_1] = 5670755950288938239;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] |= -1367978055;
                                var_14 = -5670755950288938249;
                            }
                            for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                var_15 = var_8;
                                var_16 = var_8;
                            }
                            for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
                            {
                                var_17 |= 229;
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_6 + 1] = 4294967295;
                                var_18 = (min(var_18, var_6));
                            }
                            arr_23 [i_1] = 63;
                        }
                    }
                }
                var_19 = (max(var_19, 7854727292837044200));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                {
                    var_20 = -3812184247264250631;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            {
                                arr_36 [i_7] = var_7;
                                var_21 = 0;
                                var_22 = 10592016780872507445;
                                var_23 = -68;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
