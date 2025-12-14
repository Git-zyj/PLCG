/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(((((var_8 ? 740569254 : 155))) ? (~var_10) : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [9] [i_1] [i_0] = (arr_2 [8]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_1] [0] [i_1] = 1926230910107839066;
                            arr_11 [i_1] [i_1] = 4294967290;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_13 += -16;
                                arr_20 [i_6] [i_5] [i_1] [i_1] [i_1 - 1] [i_0] = ((((((~15) ^ ((-740569282 ? -1073741824 : 15))))) ? (((arr_6 [i_0] [i_0] [i_0]) & (arr_17 [8] [i_5] [i_1] [i_1] [i_0]))) : ((min(((-1489190188 ? -740569262 : -740569231)), 4294967295)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_14 = (max(var_14, ((max(((((max((arr_6 [i_11] [i_9] [i_9]), (arr_23 [i_7] [i_7])))) ? ((((arr_19 [i_11] [2] [i_8] [i_8] [i_8] [2] [2]) >> (3617908572 - 3617908561)))) : ((1532845564 ? 32767 : 5093476832143754314)))), ((32637 ? ((min(6, -1855177641))) : (max(35, 4194189658876066134)))))))));
                                var_15 -= ((((((min(31, -24))) ? (-2147483647 - 1) : (-32767 - 1))) < 677058724));
                                var_16 = (min(((min((~63), ((max((arr_34 [i_7]), 1)))))), ((((((arr_25 [i_11]) ? 3560228946 : (arr_18 [i_7] [i_8 + 3])))) ? 5165378503848126959 : 734738342))));
                            }
                        }
                    }
                }
                arr_37 [i_7] = (min((((-127 - 1) + 1)), (((arr_8 [i_8 - 3] [i_8 - 2] [i_7] [i_8]) + (arr_12 [i_7] [i_7] [i_8 - 3])))));
                arr_38 [i_8 - 3] [i_7] [9] = (120 ? ((((!((max(28, -1855177641))))))) : ((~(((arr_13 [5] [i_8] [i_8]) - 12841)))));
            }
        }
    }
    #pragma endscop
}
