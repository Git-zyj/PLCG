/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!1270002688916844921);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = max(((((-32767 - 1) ? -75 : 0))), (((!(((44601 ? -1093354145 : (arr_3 [i_1]))))))));
                arr_6 [5] [i_1] [14] = (arr_3 [i_0]);
                arr_7 [i_1] [i_0] = (arr_3 [i_1]);
                arr_8 [i_0] [i_1 - 2] = (arr_0 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_15 = -1261240963;
                    arr_19 [i_2 - 2] [3] [3] = (min((arr_12 [i_4] [i_3] [i_2 - 3]), (arr_11 [i_4] [i_2])));
                }
            }
        }
    }
    var_16 = 15241102382476375443;
    #pragma endscop
}
