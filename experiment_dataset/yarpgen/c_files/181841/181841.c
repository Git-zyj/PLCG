/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (!3584);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min((arr_0 [i_1 - 1]), ((14607811119401420898 ? 20742 : (arr_0 [i_1 + 1])))));
                var_16 |= min((((arr_3 [i_0 - 1]) ? 242 : 247)), ((13 ? (arr_0 [i_0]) : 1)));
                arr_5 [i_1] [i_0] [i_0 - 1] = (((((-2390238664603080422 > -105073020) ? (((var_14 + 2147483647) >> (242 - 230))) : 42812)) > ((((max(-126, 36))) ? ((-(arr_2 [i_0] [i_1]))) : (arr_2 [i_1 + 1] [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
