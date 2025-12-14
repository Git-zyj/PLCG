/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = (min((arr_2 [i_0] [i_0] [i_0]), ((((max(187, (arr_2 [3] [3] [3])))) ? (max(1990747969, (arr_1 [i_1]))) : (((((arr_1 [i_1]) && (arr_1 [i_0])))))))));
                arr_5 [i_1] [i_1] = ((!((min(519228038, 118)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_18 = (((((((0 || 20) ? (arr_2 [i_0] [i_1 + 1] [i_0]) : (((arr_7 [i_3]) ? (arr_0 [i_1]) : 7625848167730090951)))) + 9223372036854775807)) >> (((16706 > (((!(arr_1 [i_0])))))))));
                            var_19 &= (min((--20), (!var_13)));
                            var_20 &= 8980;
                        }
                    }
                }
                var_21 += (((arr_8 [i_0] [4] [i_1 + 1]) ? (~var_2) : 20));
            }
        }
    }
    #pragma endscop
}
