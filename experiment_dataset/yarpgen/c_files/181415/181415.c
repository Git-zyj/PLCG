/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((((arr_2 [i_0] [i_1] [i_1]) ? (max(526200458, 567764184)) : 3727203111)) + (((-(arr_1 [i_0])))));
                arr_5 [i_0] [i_0] [i_1] = -990395890;
                arr_6 [i_0] = (((var_4 ? -3619372072459421876 : (!var_7))));
                arr_7 [i_0] [i_1] [i_0] = ((+(((255 || 9218868437227405312) ? (((var_14 ? var_12 : (arr_3 [i_0])))) : ((12062304896893857840 << (-1 + 52)))))));
            }
        }
    }
    var_20 -= (((((((var_7 >> (var_1 + 21233)))) ? 9218868437227405312 : var_6)) ^ var_11));
    #pragma endscop
}
