/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [1] [i_0] [i_0] |= ((var_3 ? (((min((arr_0 [i_1]), 2773093399)))) : (((arr_3 [i_0 - 2]) * (arr_0 [i_0 - 1])))));
                var_12 = (((arr_3 [i_0 - 1]) > (arr_0 [i_0 + 2])));
                arr_5 [i_0] [i_1] |= (arr_0 [14]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_13 = (((((((!(arr_0 [i_3]))) && (arr_7 [i_3])))) != ((32736 ? 21729 : (arr_6 [i_3])))));
                var_14 = -786830326;
                arr_11 [i_2] [i_2] = (((0 * -1877652497) * (((!((!(arr_1 [i_3]))))))));
            }
        }
    }
    var_15 = (min((((var_8 ? (var_3 <= 17308006316197264991) : ((var_10 ? 0 : var_7))))), (min((var_1 || 1), var_9))));
    #pragma endscop
}
