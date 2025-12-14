/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((765988553 ? -3785463244838655506 : var_1)) < (arr_4 [i_1] [i_0 + 4])));
                arr_7 [i_0] [i_1] = 218;
                arr_8 [i_0 + 1] [i_0] [i_1] = (((((arr_0 [i_0 + 3] [i_1]) ? (-7362854657449599886 + 15077796865732277697) : 65535)) < 912019275));
            }
        }
    }
    var_18 += var_12;
    var_19 ^= -1000574625;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {
                var_20 = (min(var_20, (arr_12 [i_2 + 1] [i_3 - 2])));
                var_21 ^= 912019292;
            }
        }
    }
    #pragma endscop
}
