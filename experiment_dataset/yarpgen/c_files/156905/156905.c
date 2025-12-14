/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 += (min((((17988960840083311602 % 3103628596902733258) ? var_11 : (14956918323544974881 == 14956918323544974873))), 4608706342785236958));
                    arr_9 [i_0] = (((((((arr_0 [i_1] [i_0]) != var_11)) ? 3489825750164576737 : var_1))) ? (min(45718, (arr_6 [i_0] [i_0] [i_0]))) : 1);
                    arr_10 [i_0] [i_0] [i_2] [i_0] = min((min((arr_7 [i_0]), var_14)), 3489825750164576737);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] = ((((var_13 + (arr_12 [i_0] [i_1] [i_1] [i_0] [12])))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = (((var_8 ? -5490885399554826522 : (var_5 * var_8))));
                                var_17 = (max((min(3489825750164576736, 68)), 3489825750164576735));
                                arr_20 [i_0] [i_0] [i_2] [i_3 - 2] [2] [i_0] = 3489825750164576734;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_12;
    var_19 = var_7;
    #pragma endscop
}
