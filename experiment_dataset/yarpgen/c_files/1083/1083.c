/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((max((max(1906810928, 1906810921)), (23 + 111))))));
                arr_5 [17] [17] [17] = ((+(((!108) ? 1906810937 : (~-1583376281)))));
                var_14 = (min(var_14, 1906810946));
            }
        }
    }
    var_15 = (((((((9678548883931284751 ? 189 : 222))) ? 119 : ((34 ? -123 : -121)))) ^ (((!((max(-1083680440, 4840188250038167261))))))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 7;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 6;i_3 += 1)
        {
            {
                arr_10 [i_2] = ((11936015784596871036 ? 62 : (min((!-113), (((-2147483647 - 1) ? 2147483647 : 1083680433))))));
                arr_11 [i_2] [i_3] = (((((18446744073709551590 ? 2147483637 : (-2147483647 - 1)))) ? (((-78 ? -125 : 2181992954))) : (min(2388156341, 19))));
                var_16 -= ((!(((-2147483642 ? -33 : -1607129040)))));
            }
        }
    }
    #pragma endscop
}
