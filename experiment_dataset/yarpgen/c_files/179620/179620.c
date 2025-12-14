/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((((-8455597984011925514 && var_2) * ((var_0 ? 195 : var_0)))), (((arr_1 [i_0] [i_0]) + (arr_0 [i_0] [i_0])))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_14 = (((((arr_0 [i_1 + 3] [i_1 + 2]) ? (min(10564822163698361860, 46)) : (((var_0 ? 8455597984011925514 : 8455597984011925514))))) & 58));
            arr_7 [i_1] = (arr_3 [i_0] [i_0] [i_1]);
            var_15 = ((51 ? 66 : 221));
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
        {
            var_16 = ((((((((10564822163698361860 ? (arr_6 [i_2]) : (arr_8 [i_2] [i_0])))) ? var_5 : 8455597984011925533))) ? (~10564822163698361873) : (!7881921910011189725)));
            arr_10 [i_0] [i_2] [i_2] = (((((-(((arr_1 [i_0] [i_0]) / (arr_4 [i_0])))))) ? 7881921910011189734 : (arr_3 [i_0] [i_0] [i_0])));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_17 = ((23605 ? 10564822163698361882 : 8455597984011925506));
                            var_18 = ((((((2165876 ? 8455597984011925529 : (arr_9 [i_0] [i_2] [i_4]))) >> (var_0 - 1651048579))) != (arr_4 [i_3])));
                        }

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_23 [i_0] [i_2] [14] [14] [i_3] &= (max((((var_4 ? 59 : (max((arr_17 [i_0] [i_0] [i_3] [i_4] [i_6]), var_10))))), var_12));
                            var_19 = (min(((((var_10 + var_12) || (((7881921910011189731 ? 36342 : 12265049520342942022)))))), (((((arr_1 [i_4] [i_6]) * (arr_17 [i_6] [i_4] [i_3] [i_2] [i_0]))) & ((var_13 & (arr_13 [i_6] [i_4] [i_3] [i_4])))))));
                            var_20 = arr_17 [i_2 + 2] [i_2 + 3] [i_2 - 1] [i_2] [i_2 - 1];
                        }
                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            arr_27 [i_0] [i_2] [i_3] [i_2] [i_7] = 10564822163698361860;
                            var_21 = (arr_21 [i_7 - 2] [i_2] [i_2] [i_3] [i_3] [i_4]);
                        }
                        var_22 = (arr_19 [i_0] [i_0] [i_2] [i_4] [i_2]);
                    }
                }
            }
        }
    }
    var_23 = ((36342 ? 10564822163698361889 : 1475553675));
    var_24 = var_10;
    #pragma endscop
}
