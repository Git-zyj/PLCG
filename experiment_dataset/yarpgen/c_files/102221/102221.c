/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((65535 << (23081 - 23077)));
    var_19 = (min(var_19, var_5));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (min((-3288669935892460349 % -2315), ((max(37570, 17776)))));
                var_21 = ((1610026970258402527 ? 2147483648 : -112));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_22 = (((((-1 <= 1) >> ((((max(var_8, (arr_7 [i_0] [i_0] [15] [i_2])))) - 84))))) ? 1 : ((((((arr_8 [i_0] [i_0] [i_0]) ? 1 : (arr_0 [15])))) ? 13871 : (27970 ^ var_5))));
                    var_23 = arr_8 [i_0] [i_0] [i_2];
                }
            }
        }
    }
    #pragma endscop
}
