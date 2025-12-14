/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (1059134769 | -46);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = var_10;
                var_16 = ((var_12 && (arr_4 [i_0 + 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_17 = ((~(18446744073709551600 < 15872)));
                    arr_13 [i_3] = var_2;
                    var_18 = var_8;

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_16 [i_2] [i_3] [i_2] [i_2] = (max((~7895620153668542077), (arr_4 [i_3])));
                        arr_17 [i_5] [i_3] [i_4] [i_3] [i_2] = (10551123920041009551 + 10551123920041009571);
                    }
                }
                var_19 = var_4;
                var_20 = (min(var_20, 16320));
            }
        }
    }
    #pragma endscop
}
