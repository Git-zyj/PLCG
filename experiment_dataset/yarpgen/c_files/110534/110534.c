/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 -= ((((var_6 % ((min(var_3, var_12))))) <= (var_8 - var_14)));
        var_16 = (max((((var_13 >= var_14) << var_1)), (var_8 + var_1)));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_17 = (max(var_17, ((((!((min(var_9, var_0))))) || (1 & 5362)))));
        arr_7 [i_1 - 1] = (min((~60173), (!var_11)));
        arr_8 [i_1] = ((-((-(var_1 == var_11)))));

        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] [i_3] = (min((!var_13), (var_14 & var_6)));
                        var_18 = (((~-var_2) && var_5));
                        arr_17 [3] [i_2] [i_4] [i_4] = ((~((((((min(var_14, var_1)))) == -var_3)))));
                        var_19 ^= (min(((((var_9 <= var_14) - (var_12 & var_3)))), (var_9 - var_6)));
                    }
                }
            }
            var_20 = var_7;
        }
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            var_21 = ((-(((6457014773107859666 >= (~18806))))));
            var_22 = ((!(!5362)));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_23 = (((((!var_10) || var_2))) == (!62546));
            var_24 = ((+(((var_9 ^ var_0) - var_10))));
            arr_23 [i_6] = ((+(((-6457014773107859667 + 9223372036854775807) << (-3845371947 - 449595349)))));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            arr_26 [i_1 + 2] = ((var_4 + (((-(var_8 / var_8))))));
            var_25 -= (((-(62546 - 910685560))) << (273720660 <= 60185));
        }
        var_26 ^= ((((max((!var_2), var_14))) << ((((1261595156 + 536870911) <= ((max(var_11, var_0))))))));
    }
    var_27 |= ((-((((!4294967295) || 55)))));
    #pragma endscop
}
