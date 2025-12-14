/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (((-((var_9 ? var_9 : (arr_2 [2] [i_0 - 2]))))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_12 = (((~var_9) << ((((~0) <= ((min(var_7, var_2))))))));
                        arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] = var_6;
                        arr_9 [i_0 - 1] [i_0 - 1] [i_2] [16] &= ((32767 ? var_3 : (~-11)));
                        var_13 ^= (max((1600101198 & -729417062314387954), 32767));
                    }
                    arr_10 [i_0] = (~-94);
                    var_14 = ((((min((-8372 != var_1), (2097151 <= 4294967295)))) != ((~(!-8182017957560508178)))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_15 = 8;
                        var_16 ^= (~80);

                        for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            var_17 = (min(var_17, (arr_0 [i_5])));
                            var_18 = -40;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_19 = ((~(~10834718414070345985)));
                            arr_18 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] = var_3;
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_20 -= ((var_10 ? -7 : (arr_5 [i_0] [i_7] [i_7])));
                            arr_21 [i_0] [3] [i_2] [i_4] [i_2] [0] [i_0 - 1] = (!var_3);
                            var_21 = (min(var_21, ((((arr_2 [i_7] [i_0 + 2]) << (var_4 - 6705343092295004614))))));
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    var_22 = ((max((min(-8, 0)), (arr_23 [i_0 + 2]))));
                    arr_24 [9] [i_0] [i_8] = var_10;
                }
                var_23 = (max(((max(-729417062314387966, (arr_4 [i_0] [i_0 + 2] [i_0 - 1])))), (((((15265 ? 4294967295 : -729417062314387966))) ? ((max(1995877903, -4))) : var_5))));
            }
        }
    }
    var_24 = -103;
    #pragma endscop
}
