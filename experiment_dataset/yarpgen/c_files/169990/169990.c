/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (arr_3 [i_0] [i_1] [8]);
                var_18 |= (min((((arr_3 [i_1] [i_1] [i_0]) >> (arr_3 [i_0] [i_1] [i_0]))), ((((max(var_15, var_8)) < (-127 - 1))))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = (max(-29105, (((((9765112271454833596 ? 1 : (arr_1 [1])))) ? (max((arr_6 [i_2] [14] [i_0] [i_0]), var_7)) : (~20)))));
                    arr_8 [i_0] [i_0] [i_0] = (((min(64, -73))));
                }
            }
        }
    }
    var_19 = (((-(var_3 * 16845181122912155145))));
    #pragma endscop
}
