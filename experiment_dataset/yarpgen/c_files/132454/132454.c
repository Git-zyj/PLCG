/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((30845 % 63059) ? (min((765008141 + 16), ((0 ? 8589869056 : 15)))) : ((((((34673 ? 15860 : -13)) < ((max(26189, 10477)))))))));
                var_14 = ((((min(((61501 ? 44396 : 41124)), (24412 | 44298)))) ? (min(3529959155, (41140 / 102))) : (max(((65528 ? 407308133 : 15557)), ((min(34674, 59178)))))));
            }
        }
    }
    var_15 = (max(63170, -7));
    #pragma endscop
}
