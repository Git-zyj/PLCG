/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~((max(var_3, 65534))))) * ((17 >> (4294967290 - 4294967277))));
    var_11 = 65518;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((((((576460752302374912 || 65530) >= (~var_7)))) * 22));
                arr_7 [14] [14] = (((~-83) ? -var_8 : 65519));
            }
        }
    }
    var_12 = (min(var_12, var_2));
    #pragma endscop
}
