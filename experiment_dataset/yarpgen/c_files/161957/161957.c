/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_18 = (min(var_18, 17150));
                    arr_7 [i_2] [i_1] [i_2] [0] = (arr_5 [i_0] [i_0] [i_2] [i_1]);
                }
                var_19 = ((!((((arr_5 [i_1 - 3] [i_0] [9] [i_0]) ^ (arr_3 [i_1] [i_1]))))));
                arr_8 [i_0] [i_0] |= ((-(((arr_1 [i_1]) ? -3420056636245709161 : (arr_5 [i_0] [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_20 = ((((((~(5613826766175855811 || var_7))) + 2147483647)) << ((((1 ? 4088651609967025423 : 4294967295)) - 4088651609967025423))));
    var_21 = (max((var_5 < var_2), var_12));
    var_22 = (((((var_17 ? ((var_0 << (var_4 - 16536575880218247616))) : (170 <= var_9)))) ? var_1 : (var_6 != var_10)));
    #pragma endscop
}
