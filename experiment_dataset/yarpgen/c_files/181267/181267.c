/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 += (arr_3 [i_0] [i_1] [i_1]);
                var_20 = (min((max(25467, (arr_3 [i_0] [i_0 + 1] [0]))), ((min((arr_3 [i_0 - 2] [i_0 + 1] [i_1]), (arr_3 [i_1] [i_0 + 2] [i_0]))))));
            }
        }
    }
    var_21 = (((max(var_6, ((min(var_17, var_2))))) * ((((((var_5 ? 32767 : var_1)) <= (1 + var_0)))))));
    var_22 = ((-(((var_15 != ((var_13 ? var_6 : var_7)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            {
                var_23 *= (((arr_5 [i_3]) << ((min(var_2, (((!(arr_4 [i_2])))))))));
                arr_8 [i_2] = (((max(((~(arr_7 [i_2] [i_2] [i_2]))), ((var_14 ? 59721 : (arr_5 [i_2])))))) ? (var_13 - var_1) : ((max((arr_7 [i_3 - 2] [i_2] [i_2]), (arr_7 [i_3 + 1] [i_3 + 1] [i_3 - 1])))));
            }
        }
    }
    #pragma endscop
}
