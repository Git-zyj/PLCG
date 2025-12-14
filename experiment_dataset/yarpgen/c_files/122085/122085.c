/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (max((((var_10 && (59750 + 122)))), (((((1 <= (arr_1 [i_0] [i_0])))) * 99))));
                    var_12 = ((!((min(((max(142, 24))), (var_6 - 58))))));
                    var_13 = max((((arr_0 [i_1 + 2] [i_1]) ? 10674023195232857999 : (arr_0 [i_1 + 2] [i_1 - 1]))), (3602159025 || -1627085076));
                    var_14 = (max(((4294967287 << (201 - 179))), (((-(-31315 >= var_6))))));
                }
            }
        }
    }
    var_15 = ((var_6 ? (max(1494716824, var_3)) : ((max((1 / 19), -2530105613256282482)))));
    #pragma endscop
}
