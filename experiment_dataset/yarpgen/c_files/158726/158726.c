/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = (max(31221, 5327));
        arr_4 [i_0] = (max((60208 * 5328), 5327));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_20 += (max((60212 >= 60208), ((((60208 ? 5348 : 5348)) + (60220 + 60186)))));
            arr_8 [i_0] = (((60186 && 5336) && (((60176 - ((60187 ? 60186 : 60200)))))));
            var_21 = ((60173 ? (((((min(5348, 5336))) == ((min(5362, 60174)))))) : (((((5329 ? 5350 : 5350))) ? ((60200 ? 5321 : 60186)) : 60200))));
        }
    }
    var_22 = (((((((60196 ? 60199 : 5321))) ? 5336 : 60181)) << ((((((min(5341, 60192))) ^ 5350)) - 58))));
    #pragma endscop
}
