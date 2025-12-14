/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (min((min((~-5786750503435333552), 16262760868554867087)), var_1));
                var_12 = (((max((-5786750503435333552 || var_5), 756024554)) | 0));
                arr_7 [i_0] = (((((48 ? 1 : 0))) > (min((min(2689996543, var_5)), var_8))));
            }
        }
    }
    var_13 = (((min(var_1, (!1561004314))) || (((var_3 ? ((var_10 ? var_4 : 1)) : var_2)))));
    var_14 = 0;
    #pragma endscop
}
