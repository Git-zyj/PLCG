/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 || ((max((((1 << (995041729 - 995041711)))), (995041729 + var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_0] [i_0] = 45;
                            arr_10 [i_3] [i_3] &= var_6;
                            arr_11 [i_0] [i_1 - 2] [i_3] [i_3] |= var_4;
                            arr_12 [i_0] [i_1] = (arr_5 [i_1]);
                        }
                    }
                }
                arr_13 [i_0] [6] &= (1 ? 160 : 3406);
                arr_14 [i_1] [i_1] [i_1] = var_1;
            }
        }
    }
    var_11 = -1670497316033510021;
    var_12 = var_2;
    var_13 &= (~210);
    #pragma endscop
}
