/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((3913575009 ? var_1 : 1))) ? ((-(1964530998 <= 1))) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_9 [1] [8] [i_0] [i_0] = ((((max((-32767 - 1), 16384))) ? -var_13 : 4294967295));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] = (((((2147483647 << (2008340404 - 2008340404)))) ? -38666 : (arr_11 [8] [i_1] [8] [i_1])));
                                var_17 = ((554153860399104 ? (((((4294967295 ? var_4 : 255))) ? var_15 : 62554)) : ((((30727 > var_15) ? 2743923445 : -0)))));
                                arr_16 [4] = 109;
                                arr_17 [3] [i_1] [i_1] = (arr_10 [i_0] [i_0] [7] [i_0]);
                            }
                        }
                    }
                }
                arr_18 [1] [1] = ((4294967264 ? ((484757880 ? (((arr_12 [i_0] [6] [i_1] [i_1] [i_1]) ? 18446189919849152511 : 60)) : 1)) : ((max(((var_8 << (244 - 235))), ((-(arr_8 [i_0] [5] [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
