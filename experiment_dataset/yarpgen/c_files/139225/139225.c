/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        var_12 = (max(var_12, ((max((1 > -811468705), (-811468705 != -811468688))))));
        arr_3 [i_0] = (min(-4, 811468687));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            {
                arr_8 [i_1] = (arr_7 [i_1] [i_2] [i_2]);

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_13 = (max(1, 181260619));
                    var_14 = (min((((((((arr_7 [i_1] [i_2] [i_3]) > -671930517))) + (arr_7 [i_1] [i_2] [i_3])))), ((max(var_2, var_10)))));
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_15 = 2067369749;
                        arr_17 [i_5] [i_5] [i_5] [0] [i_5] [i_5] = (((1 > 322766363) ? ((max(1, (arr_5 [i_4])))) : 524287));
                    }
                    var_16 = ((arr_13 [i_1] [i_2] [i_1] [i_2]) & (((-811468682 + 2147483647) >> (min(227, 17)))));
                    arr_18 [i_1] [i_1] [i_2] [i_4] = 187;
                }
                arr_19 [i_2] [i_1] = (arr_14 [i_1] [i_1] [i_1]);
                var_17 = (min(2067369748, (6 != -2067369761)));
                arr_20 [17] = arr_9 [i_1] [i_2] [i_2] [i_2];
            }
        }
    }
    var_18 = 0;
    var_19 = -1755004269;
    var_20 = (-2067369765 && 2067369739);
    #pragma endscop
}
