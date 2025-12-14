/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(~var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = (((((max(5058, 460226436586735900))) ? 8330249599504362275 : (!3))));
                    var_15 = ((((min((arr_1 [i_0]), (arr_3 [i_1])))) ? (((!(17986517637122815739 - 460226436586735887)))) : (arr_1 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}
