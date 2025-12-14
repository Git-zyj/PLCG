/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (min(((-1176693134332240978 ? 723193049 : 3823723033)), (2147483648 - 3571774247)));
    var_13 = ((((!(3571774246 && 57266))) && (2731009072 || -3196)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 ^= (((3823723033 && 75) ? var_10 : ((3606093502 ? -2328929111146593264 : 247910873))));
        arr_2 [1] [i_0] = max((2554055885 && 57290), ((3606093476 ? 4294967283 : 53)));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_1] = (max((((15494 << (12798 - 12785)))), ((~(2328929111146593263 ^ 0)))));
                        var_15 = 12;
                    }
                }
            }
        }
    }
    #pragma endscop
}
