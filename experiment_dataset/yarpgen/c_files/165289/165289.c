/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((((2353180745204198251 ? var_8 : var_0)))) ? (((var_4 - var_4) ? var_9 : ((var_7 ? var_2 : -1537560938)))) : (((16093563328505353371 % -89) ? ((var_3 ? var_6 : var_8)) : (var_5 <= var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = ((((((arr_5 [i_0] [i_1] [i_2]) ? (arr_3 [i_2]) : ((2353180745204198247 ? var_0 : 1926200335))))) ? (((((arr_4 [i_0] [19] [i_0]) & var_7)))) : (((((arr_0 [i_2] [i_1]) ? var_0 : 2353180745204198251)) % (-125 & 7421)))));
                    arr_8 [i_0] [i_1] [i_0] [i_2] &= (((((var_3 ? 2353180745204198251 : var_6)) < (((((arr_0 [i_0] [i_0]) < (arr_7 [i_2] [i_0] [i_1] [i_0]))))))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (((((var_1 ? ((18446744073709551597 - (arr_2 [i_0]))) : ((((1 == (arr_2 [i_1])))))))) ? (0 != -1) : (((1991649917 + 255) ? 1 : ((124 ? (arr_1 [0]) : (arr_4 [i_2] [i_1] [i_0])))))));
                }
            }
        }
    }
    var_12 = ((((var_1 ? (var_3 + var_4) : (var_8 & var_7))) > ((var_9 ? (((var_4 ? var_1 : var_4))) : ((1190589095233064167 ? var_7 : var_6))))));
    var_13 = (var_6 | 0);
    var_14 = var_1;
    #pragma endscop
}
