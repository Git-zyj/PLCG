/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 = max((min((((arr_1 [2]) ? 2897365622 : var_1)), (~var_3))), var_2);
        var_13 = ((!(!2238142072)));
        arr_3 [0] = arr_2 [i_0];
        var_14 = (max(var_14, (2568780951 == 4294967280)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            var_15 = min((((!(arr_5 [i_1])))), (arr_0 [i_2]));
            var_16 = min((max(3123515310, (1171451985 - 3250334325))), (((arr_0 [i_2]) ? 2656881711 : (arr_2 [3]))));
            arr_8 [i_1] [i_1] = min((arr_1 [i_2]), (min(var_11, (arr_6 [12] [10]))));
            var_17 = (max(var_17, ((((min((4294967295 + 4294967295), (min(2526179204, var_11))))) ? (~2361106055) : (((((((arr_0 [i_1]) && 3431871189)))) + (min((arr_7 [i_1] [i_1] [i_2]), (arr_4 [4])))))))));
            arr_9 [i_1] [i_2] [i_1] = var_0;
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            arr_12 [i_1] [i_1] = min((min((min(var_2, 4294967284)), (min(134217696, (arr_7 [i_1] [12] [i_3]))))), (((arr_5 [i_1]) ? 1168970406 : (arr_0 [i_1]))));
            var_18 += (((min((!334474266), (min(4294967290, (arr_11 [i_1] [i_1] [i_1])))))) ? (!var_7) : (max((arr_7 [6] [i_3] [i_3]), 4294967292)));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {
                        var_19 = max(495443803, (((((45060458 ? 1311435337 : 2219638742))) ? (var_1 <= 4249906862) : var_2)));
                        var_20 += (~2844405306);
                        var_21 *= min(((var_11 << (((arr_6 [i_1] [i_5]) - 3551351513)))), (max((arr_13 [i_3] [i_4] [i_5]), var_8)));
                        arr_18 [i_1] [i_1] [i_3] [i_1] = (((((-(arr_7 [i_1] [12] [i_5]))))) ? ((((171544629 == 1993389782) << -4294967295))) : (max((arr_2 [i_5]), (arr_2 [i_4]))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_21 [i_1] [i_1] [2] &= (!4294967289);
            arr_22 [i_1] [8] = ((arr_20 [i_1] [i_1] [i_6]) ? (arr_20 [i_6] [i_1] [i_1]) : (arr_20 [i_1] [i_6] [i_6]));
        }
        var_22 = 4294967295;
    }
    var_23 &= 3212538605;
    #pragma endscop
}
