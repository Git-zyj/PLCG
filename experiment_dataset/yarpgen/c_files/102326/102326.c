/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max((max(1, var_6)), var_6))) ? (((var_11 | var_15) & (var_4 ^ 6567639003019755871))) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 19;i_2 += 1)
                {
                    var_18 = (max(var_18, (((64 ? (((max(var_0, var_11)) * 16207216233553889723)) : ((((-2147483647 + 2147483647) >> (((arr_4 [i_2 - 3] [i_2] [i_2 - 4]) - 45762))))))))));
                    var_19 += ((((max((arr_4 [i_2 - 1] [i_1] [i_2]), ((~(arr_1 [i_2] [i_0])))))) | (min((~3310766519236241343), ((min(var_10, 5513)))))));
                    var_20 -= var_7;
                    arr_6 [i_0] [i_1] [i_0] = (max(((1 ? 35 : (arr_4 [i_2 - 2] [i_2] [i_2 - 4]))), ((~(arr_4 [i_2 + 1] [i_2] [i_2 - 1])))));
                }
                arr_7 [i_0] [i_1] = ((min(var_3, (arr_5 [i_0]))));
            }
        }
    }
    #pragma endscop
}
