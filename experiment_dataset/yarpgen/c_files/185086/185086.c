/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((var_13 >= var_12), ((max(15, -32452)))));
    var_20 = ((((-32422 * -32452) * var_8)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = 18446744073709551607;
                var_22 = (((((((8 == (arr_1 [i_0])))) | ((((arr_1 [i_0]) == (arr_0 [i_0] [i_0])))))) == (min((arr_0 [i_0] [i_0]), (((arr_0 [1] [i_0]) ^ -64))))));
                var_23 = (max(var_23, ((min(((min(85, 0))), (max((arr_4 [i_0 + 3] [i_0 + 3] [i_0 - 1]), (arr_4 [i_0 + 3] [i_0 + 3] [i_0 - 1]))))))));
            }
        }
    }
    #pragma endscop
}
