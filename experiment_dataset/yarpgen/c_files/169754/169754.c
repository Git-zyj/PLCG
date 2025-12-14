/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min((arr_2 [i_0] [i_1] [i_1]), 1014685958));
                arr_7 [6] [i_1] &= ((1014685959 ? ((((min(5949309329572099839, (arr_0 [i_0])))) ? 9015288554830128699 : 5906829290684843402)) : ((((arr_4 [i_0] [i_0]) ? (arr_4 [i_1] [i_0]) : (arr_4 [i_1] [i_0]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_11 [i_1] [i_1] = ((12539914783024708214 ? 174 : 0));
                    arr_12 [i_0] [i_1] [i_1] [i_2] = 48759;
                }
                arr_13 [i_1] = (((((((((arr_1 [i_0] [i_0]) ? 9015288554830128699 : 3046274061))) && (arr_8 [i_1] [i_1] [i_1])))) / ((max((arr_5 [i_1] [i_0]), (arr_5 [i_0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
