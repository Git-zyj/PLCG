/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_10 = (3377887171 ? 1631952085 : 1674773869);
        arr_3 [i_0] = (1674773877 * 13);
        var_11 = ((1896525643 ? 11 : 3574202566));
        arr_4 [i_0 - 2] = ((-775907410 | 127) ? 778205520 : 2147483648);
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_7 [9] [i_1] = ((((((((37 ? 32767 : 0))) ? ((2336387516 ? 7366033661329189104 : 1064174795)) : -91801396))) ? ((((3230792507 - 13) ? 778205533 : ((3516761781 ? 2650970223 : 1607882808))))) : 6174996453057481020));
        arr_8 [i_1] = ((((!(0 == 778205521)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 6;i_3 += 1)
            {
                {
                    arr_14 [i_1] [6] [i_1] &= ((11080710412380362511 >= ((0 ? (min(13232387056526141501, -827372749)) : 775907406))));
                    arr_15 [i_2] = (max((((~(827372769 <= -827372749)))), (((~-827372755) % 1969362239))));
                }
            }
        }
    }
    var_12 = (((((194278560 ? (max(56988595, 2047)) : (max(1741287567, 4294967287))))) && var_2));
    #pragma endscop
}
