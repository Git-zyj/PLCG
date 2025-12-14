/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_19 &= var_9;
        var_20 = (min(var_20, ((min((min(var_3, var_2)), (min(var_6, var_4)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, var_8));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_22 += var_5;
                                var_23 += (min(-3496586306808029553, -3496586306808029553));
                                var_24 = (min(-var_18, (~3496586306808029552)));
                                var_25 = (min(3496586306808029559, -3496586306808029553));
                                var_26 ^= min((~var_18), (~var_8));
                            }
                        }
                    }
                    arr_14 [i_1] [4] [10] [i_3] = min((min((min(var_14, var_8)), ((min(var_0, var_0))))), ((min(16, 16))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_27 = (min((min((min(var_11, var_6)), ((min(var_10, var_13))))), (min((min(5215053660224141584, 18446744073709551615)), ((min(var_13, var_13)))))));
                        var_28 += (min(var_12, 3496586306808029577));
                        arr_24 [i_1] &= var_7;
                        arr_25 [9] = var_0;
                        var_29 &= (min(var_7, var_9));
                    }
                }
            }
        }
    }
    var_30 = (min((min(var_11, (min(var_10, var_11)))), var_4));
    var_31 ^= var_5;
    var_32 = (min(var_32, (min(((min(var_7, (min(-2592580313687221526, 430670785))))), (min((min(var_2, var_11)), ((min(var_12, var_17)))))))));
    /* LoopNest 3 */
    for (int i_9 = 3; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            {
                                var_33 += (min((min((min(var_18, var_2)), ((min(var_6, var_8))))), var_16));
                                var_34 = ((-((min(239, 243)))));
                                var_35 += (!var_16);
                            }
                        }
                    }
                    var_36 += (((min(46370, 241))));
                }
            }
        }
    }
    #pragma endscop
}
