/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (!(((-20 - -1639571229) < var_4)));
                            var_19 = (min(170, ((max(-23, var_2)))));
                            var_20 = ((var_3 & (((var_2 ^ 2147483627) ? ((max(61236, 1669239123))) : ((7 ? var_12 : -5291427978782590372))))));
                            var_21 = ((((524287 || 1125899906809856) ? ((min(var_7, 1))) : (2625728173 && -912))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = var_7;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_4] [i_0] [i_0] [i_4] [i_1] = (max(((-638419661 ? 20 : var_4)), (max((~var_7), var_10))));
                                var_22 = ((((((max(var_16, 1634524423))) ? (var_6 | var_15) : (max(27576, 3897854664)))) != (((((var_17 ? 2625728173 : var_6))) ? -8 : (min(2625728172, -70))))));
                                arr_23 [i_0] [i_1] [i_1] [i_0] [i_6] [i_0] [i_0] = (max(-1669239123, (-22562 % 891717975)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_23 = (((((var_7 ^ var_9) | 3))) ? ((min((min(var_0, 13)), var_0))) : var_0);
                            var_24 = (var_17 == var_5);
                            arr_28 [i_0] [i_1] [i_1] [i_0] [i_0] = (max(32744, ((max(-2147483646, (!var_6))))));
                        }
                    }
                }
                arr_29 [i_0] [i_1] [i_0] = ((2625728185 ? (((-32754 || ((max(478564304, -105)))))) : ((min(var_7, 121)))));
            }
        }
    }
    var_25 = ((((((var_12 >= -16737) << (var_0 - 13729)))) ? 149 : 1));
    var_26 = var_12;
    /* LoopNest 3 */
    for (int i_9 = 1; i_9 < 13;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            {
                                var_27 = (((2625728200 ? -38 : var_17)) == 1669239096);
                                var_28 = (min(((((min(var_4, var_10))) ? ((var_12 ? -6791926082384094439 : 2625728191)) : (((var_16 ? var_7 : 73))))), ((min((min(var_8, var_11)), (!15))))));
                            }
                        }
                    }
                    var_29 = (min(var_29, (((var_14 || ((min(132, -15))))))));
                }
            }
        }
    }
    #pragma endscop
}
