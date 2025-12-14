/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 &= (((-293897116 & -8814) ? (min(var_11, (arr_1 [i_3] [i_1]))) : ((max((arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1]), var_12)))));
                            var_14 *= (min((!var_12), ((24068 / (var_11 & var_3)))));
                            var_15 = ((max((((var_7 ? 56 : var_0)), (min((arr_8 [i_0] [i_1] [i_2]), var_8))))));

                            /* vectorizable */
                            for (int i_4 = 4; i_4 < 21;i_4 += 1)
                            {
                                var_16 *= -56;
                                var_17 *= var_8;
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_18 = (((max(var_11, ((min(-87, -871657980))))) % var_6));
                                var_19 = (((max((511 ^ var_12), 116))) ? (((((min(var_5, -508)) == (~146))))) : (((arr_3 [i_0 - 1] [12] [i_0]) ? var_3 : (max(var_5, (arr_3 [i_0 + 1] [i_1] [i_0]))))));
                            }
                            var_20 = (var_5 % ((min((var_7 == var_10), (max(-56, -2142926626))))));
                        }
                    }
                }
                arr_16 [i_0] = ((-88 ? ((((((-1983656340 % (arr_7 [i_0] [i_0] [i_0] [i_1])))) & ((var_5 ? var_6 : 505))))) : (min((((var_4 ? 5 : var_4))), ((var_4 ? var_5 : (arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                var_21 -= (min((((-1115565396641242105 - 2584710003) & (254 & var_5))), (((!(arr_2 [i_0]))))));
            }
        }
    }
    var_22 = (max((((((min(15872, 128))) & (3077 && 51)))), var_3));
    #pragma endscop
}
