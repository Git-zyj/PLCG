/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((1023791706 | ((~(~-1023791706)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = ((!((59992 && (!-1023791691)))));
                    arr_9 [i_0] [i_0] [i_0] = (-729494087 - 125829120);
                }
            }
        }
        var_18 = max((-729494085 * 12), (((!(arr_1 [i_0] [i_0])))));
        var_19 = (((((arr_8 [i_0] [i_0] [i_0]) | -125829121)) > (((!(arr_7 [i_0] [i_0] [i_0 - 1]))))));
        var_20 = 729494083;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_21 = ((((~(arr_10 [i_3])))));
        var_22 = (~4115142748);
    }
    var_23 = (min(6, -12344200894435318293));
    #pragma endscop
}
