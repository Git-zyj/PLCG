/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((~(502026061 || -3255812370914534792)));
    var_18 = (!var_1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (((((~(917232672762419806 & -1))) + 9223372036854775807)) << (((((((8354717255043411608 & 61914) ^ (~3623))) + 28354)) - 2)));
        var_20 = (-62 - 0);
        arr_2 [i_0] [i_0] = ((!17780) << (((max(4759413842338742508, 3622)) - 4759413842338742496)));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_3] [i_2] [i_1] = ((((min((~3623), 3627))) || 4294967295));
                                var_21 += ((!1) ? ((4296819044070075291 ? 0 : 4294967283)) : (~3632));
                            }
                        }
                    }
                    var_22 = (((~3631257028) << (((~65535) + 65551))));
                    var_23 = (((1 / 15) / -4963171642534539049));
                }
            }
        }
        var_24 = (~(min(1, 4963171642534539049)));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_25 = ((240 ? 255 : ((((~0) > 9)))));
        var_26 = 16937498680318377012;
    }
    var_27 = (max((((max(1, 0)) / 229)), (2147483648 * 0)));
    #pragma endscop
}
