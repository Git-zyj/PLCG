/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_10 ? var_6 : var_5))) ? (min(16142869736204518267, 63219)) : (357 ^ -94))) ^ ((min(var_5, var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((~(min((-94 ^ 8732007983515352016), var_1))));
                var_17 |= (max(((-((101 ? 57139 : var_2)))), (min(var_4, var_8))));
                arr_6 [i_0] [i_1] [i_1] = ((((max(var_7, (!32)))) ? ((min(var_6, 246))) : (((-1 + var_9) - (min(1, 6880169454322709942))))));
                var_18 = (max(var_18, (((((((23 != var_12) ? (max(var_2, var_15)) : (max(57129, var_8))))) ? (((((min(1946188414, 4611615649683210240))) ? (min(var_0, var_0)) : 9))) : (min(var_14, var_4)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_3 + 1] = (((((-(-33 / 62430)))) && (((var_8 ? 0 : 32)))));
                            var_19 = ((~(max(47543, var_6))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (max(var_7, ((((min(2082574949, var_13))) ? (max(var_2, var_13)) : (((max(var_13, 17984))))))));
    #pragma endscop
}
