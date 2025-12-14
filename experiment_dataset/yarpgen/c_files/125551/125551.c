/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_13 = (max(var_13, (((var_2 ^ var_10) / var_4))));
                    arr_8 [i_0] [2] [i_1] [i_0] |= var_2;
                }
                var_14 -= (min((((arr_1 [i_0]) ? (~-1805790762) : 3588681337)), ((((var_8 / 65535) && ((var_7 && (arr_1 [i_0]))))))));
                var_15 += arr_2 [i_0] [i_0];
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_16 ^= 14092;
                            var_17 |= (((~2093) || (arr_9 [i_1] [i_3] [i_4])));
                            var_18 = (min(((((min(var_7, var_5))) ? (arr_1 [i_4 - 2]) : (min((arr_10 [i_4 + 2] [5] [i_3] [i_3]), (arr_5 [i_1] [i_3]))))), ((min(((~(arr_9 [i_0] [14] [i_3]))), (-14093 == 27493))))));
                            var_19 ^= ((~(arr_12 [2] [i_1] [i_3] [11] [i_4 - 3] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_20 -= var_9;
    var_21 = (((((1640919723 ? -14092 : 1640919723))) == 2147483647));
    #pragma endscop
}
