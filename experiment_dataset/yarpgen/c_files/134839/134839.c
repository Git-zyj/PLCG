/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((min((max((min((arr_10 [i_0] [i_3] [i_4]), var_7)), (arr_1 [i_3]))), ((min((max(61995, 1954398462)), -48))))))));
                                var_16 = (min(var_16, ((min(((min((((arr_5 [8] [i_4]) & 9185487155410921350)), ((min(1, 2)))))), (((arr_11 [i_3]) + 13320240973750374929)))))));
                                var_17 = (arr_12 [1]);
                                var_18 += (min((arr_6 [i_2]), 13473897435615571588));
                            }
                        }
                    }
                }
                var_19 = (min(var_19, (((((-((min(-20806, 16510))))) > (max(2114500341, 160)))))));
                var_20 &= (min((((-3759385279 ? ((15836 ? -2147483647 : 0)) : var_3))), (((min(370245406, 1)) & (~var_2)))));
            }
        }
    }
    var_21 = (max((min(((max(2147483628, 2147483646))), (4294967285 / 174))), (~192)));
    #pragma endscop
}
