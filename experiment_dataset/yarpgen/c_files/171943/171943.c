/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_15 = (min(var_15, ((((((-7 ? var_13 : (arr_2 [i_2])))) ? -11 : var_6)))));
                    arr_11 [i_0] [i_2] [i_1] [i_0] = var_4;
                    var_16 = (max(var_16, 32266));
                }
                var_17 = max(var_3, (arr_10 [i_0] [i_0] [i_1]));
                var_18 = ((((min(32766, 65535))) ? (((~8191) ^ ((min((arr_1 [4]), var_10))))) : (max(((max(63892, 128))), ((var_8 ? -127 : 24946))))));
                var_19 += var_8;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            {
                var_20 = (min(var_20, var_13));
                var_21 = (((max((!65528), 3584)) & ((max(65512, 65528)))));
                var_22 = max(43696, 32767);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            {
                var_23 = ((var_1 ? (var_10 ^ 61763) : ((var_9 ? var_7 : (arr_19 [i_6 - 2] [i_6 - 3])))));
                var_24 = arr_18 [i_5];
                var_25 = -22081;
            }
        }
    }
    var_26 = (max((max(32744, var_4)), 56206));
    var_27 &= var_12;
    #pragma endscop
}
