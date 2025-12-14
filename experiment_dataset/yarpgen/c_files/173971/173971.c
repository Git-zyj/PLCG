/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [1] [i_1] [i_2] &= (max(1, ((-(arr_4 [i_0] [i_1] [i_2] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = (arr_1 [i_0]);
                                var_13 = 30297;
                                arr_12 [i_0] [i_0] [i_0] [8] [6] = (((((2185945858 || (!2185945848)))) << (((max(((0 ? 2109021460 : var_5)), (arr_2 [i_0] [i_0] [i_0]))) - 42860))));
                                var_14 = ((1444860525 ? (((((arr_8 [i_0] [i_0] [i_2] [i_1]) != 61919)))) : ((30297 ? 627622624 : 2185945848))));
                            }
                        }
                    }
                    var_15 = (((((var_9 ? (((arr_9 [i_1] [i_0]) ? (arr_4 [i_0] [i_0] [i_1] [i_2]) : 30297)) : ((2185945839 ? 2691102582153355549 : var_9))))) ? ((0 ? 7394908876823553492 : -65)) : (arr_3 [i_0])));
                    var_16 = (~((((var_5 ? var_7 : 1)) >> (((var_0 >> 1) - 15546)))));
                }
            }
        }
    }
    var_17 -= (~var_5);
    #pragma endscop
}
