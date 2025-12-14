/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(1012745605, var_1));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [1] [i_0 - 1] = (3487036694 < -1831777752);
        arr_3 [i_0 - 1] [i_0 - 1] = ((-(min(-351845186145149338, (arr_1 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((var_9 + (max((min(3282221691, -10192)), -16383))));
        arr_8 [i_1] = ((((-var_14 ? (min(351845186145149343, (arr_1 [i_1]))) : (18094898887564402282 + 18094898887564402262))) == var_0));
        arr_9 [i_1] = var_9;
    }
    var_20 = (max(3282221672, (var_2 / -18094898887564402248)));
    #pragma endscop
}
