/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] = -115;
                        arr_14 [i_3] [i_2] [i_0] [i_0] = (119 >= -106);

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            var_12 = ((-120 ? -119 : -22));
                            var_13 = (1 <= 108);
                            arr_19 [i_0] [i_1 + 1] [i_3] [i_3] [i_0] [i_2] = ((-1 ? 20632 : -111));
                        }
                        var_14 = ((1048575 ? 14041827326189903773 : 46));
                        arr_20 [i_2] [i_3] [i_1 - 2] [i_2] [i_1] = ((((((-115 <= 119) * 2084113266))) ? (5288 * 1610127548) : ((((!(3266974431 && -120)))))));
                    }
                }
            }
        }
        arr_21 [i_0] = 1516106801;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_15 = (((113 <= 0) ? (((-1 ? 28 : 126))) : ((209 ? 1516106804 : 0))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_32 [i_5] [i_5] [14] [i_7] [i_7] &= ((((119 ? 1 : -89)) % ((92 ? ((108 ? -107 : 0)) : -116))));
                        arr_33 [i_5] [i_5] [i_5] [i_8] = (((!1954201173) ? ((-6623639563988589823 ? 194 : -30)) : 46362));
                        var_16 &= 1;
                        var_17 = (((((-91 ? (120 > 1) : ((3930401890 ? 83 : 1954201178))))) ? ((14253 ? -10958 : 17477011050961876686)) : (0 + 15606)));
                    }
                }
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
