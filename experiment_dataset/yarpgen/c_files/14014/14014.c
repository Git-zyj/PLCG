/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (((max((-32 * 0), ((((-2147483647 - 1) || 15542149225708384938))))) | (((((1 > 6) || ((max(10, 936972514)))))))));
                arr_6 [i_1] [i_1] = -33;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (((-9 - 13856) + (93354163 + 4294967288)));
        var_14 *= 115;
        var_15 = (min(var_15, (((4294967286 > ((2824954048 ^ (-32767 - 1))))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            {
                var_16 = (min(var_16, ((min((max((max(1787674132, 0)), (54012 >> 11))), (max((31155 / 29010), ((20035 << (115 - 114))))))))));

                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    var_17 = (min(var_17, ((((min(((max(64269, 4294967286))), 80274534959019739)) - 224)))));
                    arr_20 [i_4] [1] [1] = 5100794640152279719;
                }
                var_18 = (min(((min(1, 0))), (((max(224, 0)) % (2407002711 && 212)))));
            }
        }
    }
    var_19 = ((12264127785572884158 >> (576458553280167936 - 576458553280167932)));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            {
                var_20 = (((((1 * 72) | ((219 ? -6866049567436837967 : 6991799332215199872)))) << (89 - 80)));
                arr_25 [i_6] [i_7] = (((min(((min(59917, -3978193971358628394))), (min(12399682833164822108, 708)))) | (((min((65532 < 0), (max(8, 5618))))))));
            }
        }
    }
    #pragma endscop
}
