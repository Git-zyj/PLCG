/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_2] = (min((18446744073709551615 >= 18446744073709551615), (((3585170398 * 3593036251) / (arr_5 [i_2 - 2] [i_2 - 1] [i_2])))));
                    var_13 = ((((max((arr_2 [i_1] [i_2 + 1]), (arr_2 [i_1] [i_2 - 2])))) ? (((arr_2 [i_1] [i_2 + 1]) ? 18263237961344711339 : 8)) : 3030776070688418425));
                }
            }
        }
    }
    #pragma endscop
}
