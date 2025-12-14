/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((((~433704795) << (var_4 - 7998599093566329625))) >> (var_0 - 56))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((~((min(-38, 82)))));
                var_13 = (max(var_13, (((((max((var_2 >= 1), (((arr_0 [i_1]) == var_6))))) | (arr_4 [i_0] [i_0]))))));
                arr_5 [i_1] |= (min(((max(3861262501, -1))), 16777215));
            }
        }
    }
    #pragma endscop
}
