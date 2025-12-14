/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((arr_0 [i_1]) | (arr_0 [i_0]))) > (arr_2 [i_0] [i_0] [i_0])));
                var_13 = min(-2147483637, (arr_0 [i_0]));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (((((1837677182 ? -1837677191 : -1163296134))) <= var_6));
                    arr_8 [i_1] = 1251137626;
                    var_14 = (1361596356 / -2147483633);
                    var_15 = -var_2;
                }
            }
        }
    }
    var_16 = var_7;
    var_17 = (min(var_17, -1590109476));
    var_18 = ((!((((((var_2 ? -1837677182 : 2046141328))) ? (max(var_7, -2147483637)) : (max(var_5, var_2)))))));
    var_19 = var_4;
    #pragma endscop
}
