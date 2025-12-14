/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_10 = ((((max(((18446744073709551615 ? 18446744073709551615 : 7793985733025834563)), 1))) ? 4194303 : (max(2147475456, -5212324704745859983))));
                var_11 = 255;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 -= 11;
                                var_13 = (min(var_13, 1));
                                arr_12 [i_1] [i_0] [i_1] [i_1] [i_0] = max(((0 ? (min(-3685213542797241250, 102)) : (((1 ? 4258669677 : 1))))), ((min(((max(1, 85))), 9))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_14 *= (((2863786594084284352 ? 247 : 252)));
                            arr_19 [i_0] [i_1] [i_5] [i_6] [i_0] = (min(((max(14, 26))), 10904));
                            arr_20 [i_0] [9] [i_0] = ((~((min(1, 0)))));
                            var_15 = (min(var_15, 1));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = (max(2147483647, ((14597511218021565923 ? 3 : 1))));
                            var_16 = 4217923570162776339;
                            arr_31 [i_7] [i_7] [i_7] [i_7] = 5393491002564334047;
                        }
                    }
                }
                var_17 = (max(var_17, ((max(34752, ((((min(30, 1))) ? ((min(58, 4208073897))) : ((65535 ? -6526765738202662052 : 255)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 18;i_14 += 1)
                    {
                        {
                            var_18 = 200219167;
                            var_19 = 197;
                            var_20 *= 58;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 18;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        {
                            arr_49 [i_11] [i_12] &= ((~((max(-116, 58)))));
                            arr_50 [i_11] [i_11] [i_11] [i_11] [i_11] [2] = (min(((-36 ? (!-10904) : (max(21, 40)))), -10904));
                            var_21 = (max(var_21, (((17 ? -109 : (((((-6526765738202662052 ? 1 : -57))) ? (min(0, 5160324704424144632)) : (((-82 ? 3502407458 : 222))))))))));
                            arr_51 [i_16] [i_11] = 28373;
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, ((max(var_3, (!-28379))))));
    var_23 = (min(var_23, ((min((((((-2147483647 ? 2367058638157141608 : 2377130459))) ? (min(14756470000974230872, 28)) : ((min(2147483646, 0))))), ((((min(1, -87))))))))));
    #pragma endscop
}
