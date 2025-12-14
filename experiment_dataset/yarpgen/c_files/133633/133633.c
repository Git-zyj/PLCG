/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(43627, 4182498189534488041));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (max(((max(235, var_7))), (max((min(4933549321025083492, 30128)), 20456))));
                    arr_8 [i_2] [i_0] [i_0] [i_0 + 1] = (min(((((max(20456, -68))) ? ((4367013951925840121 ? 1 : 36777)) : 189)), 20439));
                    var_20 ^= (min(35747322042253312, ((((((1223 ? 103 : 18446744073709551615))) ? ((var_7 ? var_3 : var_2)) : (((var_3 ? 152 : 37))))))));
                    var_21 = (min((min(var_14, (min(63, 20456)))), 26712));
                }
            }
        }
        arr_9 [i_0] = (min((min((min(var_10, var_7)), 170566330647019468)), (((((min(var_5, var_17))) ? -1224 : var_0)))));

        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_22 -= (((min(var_17, var_16))) ? var_0 : ((var_13 ? var_13 : var_1)));
            var_23 = (max(((max(-1200, 46522))), (min(var_2, 32))));
            var_24 = (min((max(15074711849756547424, 15654047942680652099)), ((max(var_5, ((max(-8192, -1223))))))));
            var_25 *= -7946026788619122028;
        }
        var_26 = (max(((max(var_15, 13033))), ((36111 ? var_6 : 17113073594745493292))));
    }
    #pragma endscop
}
