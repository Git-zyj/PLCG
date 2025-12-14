/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 158;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (((((10997 ? -24884 : 36226))) ? 5 : (~1)));
        arr_2 [i_0] [i_0] = ((-16384 ? ((min(1, 58361))) : 15));
        arr_3 [i_0] [i_0] = 22673;
        arr_4 [i_0] [10] = ((!((max(1, -5790754884062764666)))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_9 [i_0] [i_0] [i_0] = (((61 ? 18 : 1023)));
            var_13 = 5585867518384266150;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_13 [i_2] [i_2] = ((-109 && ((((-5 ? 14118 : 171))))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_14 = (max(var_14, 112));
                            var_15 = ((1 ? (((-18 ? 1 : 1))) : (max((!1), 3849464654904252183))));
                            var_16 = (min(((3792 ? -1 : -3012)), -32756));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_17 = 42;
                            arr_31 [i_8] [7] [i_6] [i_2] [i_0] = ((((((-18 <= 19) * ((min(-78, 1)))))) ? 127 : (((max(-5585867518384266155, 32753))))));
                        }
                    }
                }
            }
            arr_32 [i_2] = 30433;
        }
    }
    #pragma endscop
}
