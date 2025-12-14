/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_12 = (min(((min(113, ((31809 ? -35 : -1023185705))))), (min(248, -7531831302557210010))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (min(((0 ? -6892778774646160446 : (arr_3 [i_0] [i_0 - 1]))), (((-(arr_3 [i_0] [i_0]))))));
                                var_14 = (((arr_10 [i_0 - 1] [i_0 - 4]) != (min((arr_4 [i_0] [i_0 - 1]), (arr_0 [i_0] [i_0 + 1])))));
                                var_15 = (((arr_4 [i_0] [i_3]) ? (((arr_2 [i_0] [i_0]) ? 1080863910568919040 : 0)) : 65535));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (((8190 ? 8190 : 5727)));
    #pragma endscop
}
