/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_7, ((min(var_10, (var_1 + 571699627))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_13 += (((var_5 || var_7) ? ((max(var_3, 3723267692))) : ((((((63 ? -63 : var_3)) != var_5))))));
                    arr_9 [i_1] = 3299563378;
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_3] [i_4] [i_1] [i_1] = ((var_9 ? (((((max(4294967295, var_4))) && ((max(0, var_5)))))) : (((((max(1, -101))) && -1197177456)))));
                        arr_16 [i_1] [i_4] = ((-((571699613 / (((3723267668 ? var_2 : 58393)))))));
                        var_14 = (min(((-(min(571699627, -101)))), (((-var_6 ? var_10 : -1)))));
                        var_15 = (((min(9663366697228528785, var_2)) + -var_11));
                    }
                    arr_17 [8] [8] [i_1] = ((+(((!0) ? (min(32767, var_8)) : var_2))));
                }
                arr_18 [i_1] [3] [4] = (max((var_4 - var_6), -0));
                var_16 = ((((min(var_1, var_6)) ^ (((72 >> (var_2 - 39)))))));
                var_17 = ((min((var_1 ^ -1259510071), 1259510070)));
                arr_19 [i_1] [i_1] = (!1099511627775);
            }
        }
    }
    var_18 = (min((!var_3), (max(-4625101253803575652, ((max(702838423, -63)))))));
    #pragma endscop
}
