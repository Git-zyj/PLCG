/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= -15742;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = ((((9336869162698217161 ? (arr_6 [i_0] [i_1] [i_0] [i_2]) : -15750))) ? (((arr_3 [i_0]) ? (arr_8 [i_0] [i_0] [i_2] [i_0]) : 32752)) : (arr_8 [i_2] [i_2] [i_2] [i_0]));
                    arr_9 [i_2] [i_1] = max((((-15732 ? 7 : -8))), 15296);
                }
            }
        }
    }
    var_20 = ((-89 * (max((-2147483647 - 1), 5277751063839816105))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] = ((-(((7563375075969413817 ? 58266 : -112)))));
                    arr_19 [i_5 - 1] [i_4] = ((+(min((arr_13 [i_5 - 2] [i_4]), (((30505 ? -89 : 109)))))));
                    var_21 = (max((arr_14 [i_3] [i_5 - 2]), (((((max(-31366, 16509781060350156969))) ? ((min(88, 15734))) : 15)))));
                }
            }
        }
    }
    var_22 = (((((max(15742, -81)) % -93))));
    #pragma endscop
}
