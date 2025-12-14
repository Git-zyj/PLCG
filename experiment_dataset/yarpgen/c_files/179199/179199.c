/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2 - 1] [i_0] = -2027302773;
                    arr_10 [i_0] [i_0] [i_2] = (max((((11803173665243513839 ? (65 ^ -65) : ((65 ? (arr_1 [i_0] [i_0]) : (arr_4 [i_1] [i_1])))))), ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_0))) ? ((52101 ? -4386501633418587396 : 9229917924088615943)) : var_3))));
                }
            }
        }
    }
    var_10 = max(1, (max(((340687555 ? 9229917924088615946 : -90)), (min(11803173665243513849, 2146435072)))));
    var_11 = (~-2027302785);
    #pragma endscop
}
