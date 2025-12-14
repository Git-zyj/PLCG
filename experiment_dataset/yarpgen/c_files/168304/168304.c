/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_16 ? 5650753491874613887 : 122));
    var_21 = (var_7 / var_0);
    var_22 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_23 = (max(var_23, ((max(((8438236805291547965 ? (!11177911717046247853) : ((12795990581834937729 ? 5650753491874613902 : 12795990581834937760)))), ((min((((arr_4 [i_0] [i_1] [i_0]) ? var_13 : 32744)), (12795990581834937728 || 5650753491874613898)))))))));
                arr_5 [i_0] [i_1] = ((min((arr_0 [i_1 - 3] [i_1]), (arr_2 [i_1 - 3] [i_1]))) != (arr_3 [i_1 - 2] [i_1]));
                arr_6 [i_1] [i_1] [i_1] = ((((var_1 ? var_8 : (arr_2 [i_0] [i_1])))) ? (min((arr_2 [i_0] [i_1]), 12795990581834937729)) : (arr_2 [i_1] [i_1]));
                arr_7 [i_1] [i_1] [i_1] = (arr_1 [i_1 - 3]);
            }
        }
    }
    var_24 &= (max(var_1, ((min(11177911717046247853, var_7)))));
    #pragma endscop
}
