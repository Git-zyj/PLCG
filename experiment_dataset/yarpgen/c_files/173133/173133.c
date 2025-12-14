/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (~(arr_1 [i_0] [23]));
        var_13 = ((((((arr_1 [i_0] [i_0]) ? -15 : (((((arr_0 [i_0]) && (arr_0 [i_0])))))))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                arr_8 [i_1] [i_1] = (!0);
                arr_9 [i_2] [i_1] = ((164365289784162963 ? -164365289784162967 : 164365289784162963));

                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_14 = (max(((var_10 ? (max(-1623394477, (arr_6 [2] [i_2] [i_3]))) : ((max(var_4, var_0))))), (((15 ? -1623394477 : -501913976)))));
                        arr_16 [i_4] [i_1] [i_1] [i_1] = (arr_1 [19] [i_3 + 1]);
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_1 + 1] [i_1] [9] [i_1] [i_1] = (((max(-164365289784162963, (((!(arr_10 [i_1])))))) >= (min(-29168, 164365289784162963))));
                        var_15 = (((arr_17 [i_1] [i_1] [11]) ? ((min((arr_1 [i_2] [i_2]), 0))) : ((min((max(0, -30640)), (arr_12 [i_2] [i_5]))))));
                    }
                    var_16 = var_10;
                    var_17 = (max(var_17, ((max((arr_3 [i_3 + 1] [10]), (~var_10))))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_23 [i_1] [i_2] = ((-21 > (arr_17 [1] [i_2] [8])));
                    var_18 = ((-(min((arr_13 [i_1 + 4] [i_1 + 1]), (arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])))));
                    var_19 = (arr_13 [i_1 + 4] [i_1 + 4]);
                    var_20 &= var_9;
                    arr_24 [i_1] [i_1] = (((((1749856865 ? -164365289784162963 : -22))) ? -1623394477 : -506162570));
                }
            }
        }
    }
    #pragma endscop
}
