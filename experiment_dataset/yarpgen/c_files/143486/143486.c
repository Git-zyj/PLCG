/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (((((((~(arr_7 [i_2] [i_0] [i_0] [i_0])))) ? 603534735742690677 : ((max(1, (arr_2 [i_0 - 1] [i_0] [i_0 - 1])))))) != (var_7 & 18446744073709551613)));
                    arr_9 [6] |= (max(((min((arr_1 [i_1] [10]), (arr_0 [12])))), (max((((865 * (arr_2 [i_0 + 1] [12] [i_0 + 1])))), (max((arr_3 [i_0 + 2] [i_2]), var_6))))));
                    arr_10 [i_0] [i_1] [i_1] [14] |= 3;
                    var_14 = (min(var_14, (((max(8129620763035397050, 59))))));
                    var_15 = (8129620763035397034 >= 64695);
                }
            }
        }
    }
    var_16 = ((~(119 <= 64710)));
    #pragma endscop
}
