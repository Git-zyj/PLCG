/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = ((((((!1879048192) >= ((min(var_2, var_5)))))) < ((~(528482304 <= 6)))));
                arr_4 [i_1] = (((((var_6 ? var_1 : -6))) | ((-6 ? 2399693772 : var_2))));
                arr_5 [i_0] [i_1] [14] = ((((43310 ^ ((var_9 ? 87 : -6))))) ? ((-0 ? var_8 : var_7)) : (((min(var_8, -6)))));
                var_14 = (max(var_14, -900299691));
                var_15 = (min(((((((var_5 ? 35184372088704 : 26266))) && ((min(46041, var_1)))))), (min(-900299691, -6))));
            }
        }
    }
    var_16 = (((((((var_0 ? 1905885417 : var_6))) ? (min(-530077480, 819169284)) : var_9)) | 35345));
    #pragma endscop
}
