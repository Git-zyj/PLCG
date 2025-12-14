/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1441782840;
    var_11 |= (((((~(max(var_3, 288230375614840832))))) ? 1441782841 : (~7271862475911138998)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [0] = (min((var_4 > 2853184428), var_0));
                arr_6 [i_0] &= 14;
                arr_7 [10] = ((!((!(!255)))));
            }
        }
    }
    var_12 = (!var_7);
    #pragma endscop
}
