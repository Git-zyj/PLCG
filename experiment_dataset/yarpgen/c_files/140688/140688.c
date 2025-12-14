/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 = (65514 ^ -4);

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [11] [i_0] [0] = 393703499813588731;
            var_13 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? -9074481951858366860 : (arr_1 [i_0])));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_14 = -9074481951858366860;
                arr_8 [i_0] [4] [5] [6] = (~1138278435);
                arr_9 [i_0] [2] [10] = ((var_8 ? 23007 : ((-8400 ? (arr_3 [7]) : -1138278463))));
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_15 = (((((-(min(1138278424, 65535))))) + (max(6236071320022932246, 19582))));
                var_16 = (((((arr_7 [i_0 - 1] [i_0 + 2]) ? ((((arr_6 [11] [i_0]) - (arr_3 [7])))) : (arr_7 [i_0 + 1] [i_0 + 2])))) ? (!var_2) : 0);
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_17 = (min(-1, 65526));
                            var_18 = (((arr_19 [i_0 + 2] [i_0]) ? (((~(((1138278463 != (arr_6 [9] [i_0]))))))) : (((arr_20 [i_4 - 2] [6] [5] [i_0] [i_4 + 2]) ? (arr_20 [i_4 + 1] [12] [10] [i_0] [i_4 + 2]) : (arr_20 [i_4 + 4] [4] [6] [i_0] [i_4 + 3])))));
                            var_19 -= (~9074481951858366848);
                            var_20 -= var_0;
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((((((61704 ? var_9 : 1138278435))) ? ((var_7 ? 1770577706 : 1138278435)) : var_5))) || -9074481951858366860));
    #pragma endscop
}
