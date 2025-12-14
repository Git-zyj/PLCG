/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((!(max((!-6418063671291585326), var_7))))));
                var_15 = (((~4294967290) ? 22 : -108));
                var_16 = (((((69 ? 255 : 222))) | ((~((var_10 ? var_11 : (arr_1 [i_0 - 2] [i_0])))))));
                var_17 = (max(var_17, (arr_3 [i_0 - 1] [i_0 + 2])));
                arr_5 [i_0] = ((((((var_3 / var_11) ? -var_2 : 4))) ? (((((min(var_7, -65))) <= 7))) : (((((241 || (arr_1 [i_0] [i_0]))) && (((29 ? (arr_2 [i_0] [i_1] [i_1]) : 226))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_18 = 67;

        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            var_19 = ((((min((arr_10 [i_3 - 2] [i_3]), var_11))) ? (((arr_7 [i_3 - 2] [i_3]) ? (arr_10 [i_3 - 2] [i_3 + 4]) : var_9)) : ((((arr_10 [i_3 - 2] [10]) == (arr_10 [i_3 - 2] [i_3 + 2]))))));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    var_20 = (~var_6);
                    arr_18 [20] [i_5 - 1] [i_4] [2] [i_3] = ((((((arr_17 [i_2] [i_3 - 3] [i_3] [i_3] [i_3] [i_3]) ? var_6 : var_12))) ? ((var_11 ? var_10 : 5)) : (arr_16 [i_3] [i_3] [i_4] [i_4])));
                }
                var_21 = ((~((192 ? (((arr_7 [i_2] [i_3]) ? 254 : var_4)) : (3425876340 || 1170183973439109195)))));
                arr_19 [i_3] = var_10;
            }
            var_22 ^= ((((max(var_5, (max(var_9, (arr_6 [i_2]))))))) != ((var_7 ? ((481149780 ? var_1 : var_3)) : (arr_10 [i_3 + 2] [2]))));
        }
        arr_20 [i_2] [i_2] = (arr_14 [i_2] [i_2]);
    }
    #pragma endscop
}
