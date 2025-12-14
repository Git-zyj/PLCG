/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 -= ((-1888103980509067149 ? 16 : (-2147483647 - 1)));
                            var_14 = var_0;
                            var_15 = (~var_11);
                            var_16 = (min(var_16, (((min(((-1888103980509067154 ? (arr_1 [i_2] [i_3]) : var_3)), (arr_6 [i_0 - 2] [i_0 + 2])))))));
                        }
                    }
                }
                var_17 -= ((((max((min((arr_8 [i_0] [i_1] [i_0] [1]), 32760)), ((-1888103980509067177 ? (arr_7 [i_0 + 1]) : (arr_12 [8] [8] [i_1] [i_1 + 2])))))) ? (((arr_5 [i_0] [0] [i_0 + 1]) / (arr_5 [i_1 - 2] [i_1 + 1] [i_1 - 2]))) : (((arr_1 [i_1] [i_1 + 2]) | (arr_7 [i_0])))));
            }
        }
    }
    var_18 -= ((~(min(var_3, -var_5))));
    var_19 = (min(var_19, (((1293547770 ? 35446 : ((max((var_3 == var_5), var_3))))))));
    var_20 = ((((((!var_5) <= 60102065))) << (var_12 || 1888103980509067148)));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_21 = (min((max(var_0, 4294967295)), (arr_20 [i_4])));
                var_22 = (((((5352 >> (8333 - 8330)))) ? ((-1888103980509067152 ? 770650121 : 5346)) : (~62719)));
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_23 -= (-23 | -784473811);
                            var_24 = var_1;
                        }
                    }
                }
                var_25 = ((((arr_14 [i_4]) ? (arr_14 [i_4]) : var_10)));
                var_26 -= min((((!(arr_23 [i_4])))), (((arr_23 [i_5]) ? (arr_23 [i_4]) : (arr_23 [i_4]))));
            }
        }
    }
    #pragma endscop
}
