/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((min(((max((arr_5 [i_0]), (arr_1 [i_0])))), (~1)))) ? ((~(arr_0 [i_0]))) : (1 > 1)));
                arr_7 [i_0] [i_0] = (max((!1), ((1 ? 2800298238398393397 : 261632))));
                arr_8 [i_1] = ((((((min(var_11, var_7))) ? ((var_12 ? 206 : 150261299)) : 49)) ^ ((max((arr_2 [i_0]), (arr_2 [i_1]))))));
                arr_9 [i_1] = (((arr_1 [i_0]) ? (max((41371 | -1972315992), ((min(1, 23947))))) : 1929748712));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_15 [7] [7] = (max((((arr_5 [i_2]) ? 32763 : var_9)), (((var_4 <= (arr_5 [i_2]))))));
                arr_16 [i_3] &= ((~(arr_12 [i_2] [i_3])));
                arr_17 [i_2] = (((arr_3 [i_2] [i_3] [i_2]) ? (~238) : (min((min(0, 7)), 51955))));
            }
        }
    }
    #pragma endscop
}
