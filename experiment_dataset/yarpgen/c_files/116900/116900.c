/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= (min((min(23, 363602146)), ((min(189, -1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_10 [i_0 - 1] [i_0 - 1] [7] [i_0] [i_0 - 1] = ((~(((!((min(111, 0))))))));
                                arr_11 [5] [1] [7] [7] [i_4] = (max((min(7718011387804714518, 55)), ((max(500828858, 0)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 = (max((max((max(1, 3195527798329088514)), -6)), -2495218775432700685));
                                arr_17 [i_0] [i_1] [i_6] [i_0] [i_6] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 |= var_3;
    var_20 = ((min((min(1696229519806292869, -1740193763)), (!15))) ^ ((max(-110, 4194304))));
    #pragma endscop
}
