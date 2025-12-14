/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (3221225472 >= var_0);

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0 - 2] = 0;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (!1073741823);
                    var_16 = (min(var_16, ((((3221225471 <= 1073741824) + 1145356441)))));
                }
            }
        }
        arr_8 [i_0] [i_0] = (77 * 451449374469374888);
        arr_9 [i_0 - 1] = 1;
        arr_10 [i_0] = (-20031 / 4676053342533860289);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_17 = (18446744073709551598 % 32767);
        var_18 = (--3221225473);
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        var_19 = 2484026058089688460;
        arr_15 [i_4] = (((((11202 >> (19561 - 19547)))) + 1073741822));
    }
    #pragma endscop
}
