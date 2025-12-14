/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = 26290;
        arr_2 [18] &= ((1773551405609634362 ? 55 : 65535));
        arr_3 [i_0] [i_0] = (((-4 % var_8) ? (56301 == var_1) : ((var_16 ? 9232 : var_16))));
        var_21 = (max(var_21, ((((!var_1) ? -1149119399807367987 : (arr_0 [18]))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_22 = ((~(max(1817399258, 65535))));
        var_23 = ((!(+-56235)));
        arr_8 [i_1] = 655858799;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_24 |= (arr_5 [i_1]);
                    var_25 = ((((-(arr_9 [i_3] [i_1] [i_1]))) - -var_10));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_26 = (min(var_26, ((((arr_11 [i_5] [i_4]) ^ ((((arr_12 [i_5] [i_5] [i_4]) ? (205 != var_10) : (!-4)))))))));
            var_27 = (min(var_27, (((-3639108496 > ((max(-1149119399807367979, 32752))))))));
        }
        var_28 = (max(var_28, ((((-var_5 ? (~15314452450492917651) : -var_10))))));
        var_29 = (min(var_29, (19 | 1175516555)));
        arr_20 [i_4] = ((-(min((((!(arr_4 [i_4] [i_4])))), ((var_0 ? var_2 : 0))))));
        arr_21 [i_4] [i_4] |= ((!((((var_5 || 16673192668099917252) ? var_14 : (!var_6))))));
    }
    var_30 = (min(var_30, (!var_7)));
    var_31 -= ((((((min(655858814, 64975))))) ^ (~5580073002217665094)));
    #pragma endscop
}
