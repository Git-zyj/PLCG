/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_2 && var_5) + var_14)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [0] [i_0] = (((((~(arr_1 [0])))) ? ((max((arr_4 [i_0] [17] [17]), (arr_1 [i_0])))) : (arr_2 [i_0 + 2])));
                    var_21 = (((arr_7 [i_1 - 1] [i_1 - 1] [i_2]) ? (1255103209 / 21872) : ((min((arr_7 [i_1 - 1] [i_1] [i_2]), (arr_7 [i_1 - 1] [i_2] [5]))))));
                    arr_9 [i_0] = (min((arr_6 [i_0] [1] [i_2] [2]), (((4434 - 3) - 4775759659350806235))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_17 [i_4] [i_4] = ((((36 ? 65521 : 4440)) - (((((((arr_4 [1] [i_4] [i_4]) * (arr_16 [i_4])))) || (((arr_6 [0] [0] [0] [17]) <= (arr_13 [i_3] [i_3]))))))));
                arr_18 [i_3] [i_3] [i_4] = (min((max((max((arr_1 [i_4]), (arr_15 [i_3] [7] [i_4]))), (arr_0 [i_3]))), ((((((532676608 ? 1441003071211709603 : 17736))) ? (arr_13 [1] [i_4]) : ((min((arr_4 [i_3] [13] [i_4]), (arr_12 [i_4])))))))));
            }
        }
    }
    #pragma endscop
}
