/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [6] [12] [1] &= (max(var_9, 1));
                                var_13 -= var_7;
                                var_14 = (min(var_14, (((((var_5 && -848801495) >= ((var_9 ? 0 : var_7))))))));
                                arr_16 [6] [6] &= ((-(min(var_5, ((var_5 ? var_3 : var_1))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_15 ^= ((-var_9 * (var_6 / var_2)));
                                var_16 = (min((max(1, -291839699)), (((var_8 && var_0) / ((1742458161 << (var_12 - 17443)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_17 = -3065668004200235330;
                            var_18 = (min((((-1 && (((var_4 ? 291839701 : -8)))))), ((((min(var_4, var_10))) ? (4212400347 ^ var_9) : (max(var_5, var_2))))));
                            arr_34 [i_7] [i_7] [13] [i_9] [i_10] = (max(((2097152 ? var_2 : var_2)), -5331202818859591774));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 19;i_13 += 1)
                        {
                            {
                                arr_45 [i_8] [i_8] [i_13] [i_12] [i_13] = 93;
                                var_19 |= (((((-1970739645 ? 0 : 1))) <= ((-6123456565789065853 ? 2488243817520283143 : -3847237487879917001))));
                                var_20 = ((min(var_5, var_4)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 17;i_16 += 1)
                        {
                            {
                                arr_53 [i_7] [i_8] [i_7] [1] [i_7] [i_16] [i_7] = 2224457398170162551;
                                var_21 = (!66);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
