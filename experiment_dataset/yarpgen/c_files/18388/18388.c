/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((max(var_1, (~var_17))) == var_14));
    var_19 = (max(var_19, ((min(var_17, var_10)))));
    var_20 = (max(((((max(3969305479, 3)) <= (var_14 + var_14)))), (min(3072, var_12))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0 + 1] [i_1] = (((max(3, ((var_14 ? var_9 : (arr_2 [i_1]))))) != ((2 ? 29183 : (var_6 & var_9)))));
                arr_7 [i_0 + 1] = 1920;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_21 += (((((-(max(var_1, 0))))) ? 36366 : 5531969681225219215));
                            var_22 = (min(((2 ? -64 : 65532)), (var_7 > var_10)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
