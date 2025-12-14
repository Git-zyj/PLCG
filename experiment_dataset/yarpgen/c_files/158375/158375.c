/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = (~-72);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((min(var_13, (arr_6 [i_0] [i_1]))))))));
                arr_8 [i_0] = ((4294967278 >> (3359 - 3340)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_21 ^= ((-((min((max(var_11, (arr_0 [i_2]))), var_17)))));
                    var_22 = (min(var_22, ((max((min((arr_7 [i_2]), (arr_10 [i_1]))), ((((arr_10 [i_2]) >= ((min((arr_9 [i_0] [i_2] [2] [i_2]), (arr_4 [i_0] [i_2]))))))))))));
                    var_23 -= ((-((~(arr_4 [i_1] [i_1])))));
                }
                arr_11 [i_0] [i_1] = (min(var_6, ((((arr_4 [i_0] [i_0]) == (arr_4 [i_0] [i_0]))))));
            }
        }
    }
    var_24 = ((16915190600771214200 ? 7680 : 2190046019883375904));
    #pragma endscop
}
