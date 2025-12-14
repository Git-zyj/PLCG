/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (~-5554618230548089491);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] [i_3] [i_0] [i_3] [i_3] = (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_17 |= (min((((-32757 ? -32757 : ((min(28, -4584)))))), (min(0, ((2744 ? -13207 : 534773760))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] = (min(((~(arr_10 [i_1] [i_0]))), ((min(-73, 4035)))));
                arr_16 [i_0] [i_0] = ((((((-4904 ? 4294967293 : 1360520108)) ? var_13 : var_13))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 7;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_18 ^= ((((min(var_2, (-13220 <= 16889949042730490684)))) ? 0 : 4171408160));
                            var_19 *= (min((min(-2235, ((25 ? (arr_19 [i_6] [i_0] [i_1] [i_0]) : 1103755791)))), 27220));
                            arr_22 [i_0] [i_0] = ((min(((min(var_3, (arr_13 [i_0] [i_1] [i_5] [i_0] [i_6]))), 14595408885489488326))));
                            arr_23 [i_0] = (((((min(var_7, -90651556))) || -13220)) ? 1 : ((min((min((arr_0 [i_0] [i_0]), -51)), ((((arr_20 [i_0] [i_1] [i_0] [i_1] [i_6]) > 4171408160)))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = 0;
    var_21 &= (min(-1261188447, (118 / 1804668104)));
    var_22 = (!var_8);
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_23 *= ((!(((-(min(var_10, (arr_26 [i_7] [i_7] [i_7]))))))));
                var_24 &= ((((max((arr_25 [i_8]), (arr_25 [i_8])))) >> (((arr_25 [i_7]) - 65))));
                arr_28 [i_8] = min((((!(((arr_25 [i_8]) || var_6))))), (min((arr_26 [i_7] [i_7] [i_7]), -1272510229691923368)));
            }
        }
    }
    #pragma endscop
}
