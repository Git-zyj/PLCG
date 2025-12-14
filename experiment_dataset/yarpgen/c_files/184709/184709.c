/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(-11993, var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (((((((min(1, 17156))) ? ((118 ? 16895356930123316510 : 69)) : -22))) ? (max(((-17157 ? 3365409381 : -1)), 0)) : (((((((-14532 ? 11972 : -1))) && -30936))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 = 1473965515359499521;
                                arr_14 [4] [4] [i_2] [4] [4] = 3;
                                var_17 = (((~4022349907536838706) ? 942207152 : 220096062));
                                var_18 = (max(14532, 1));
                                var_19 = 942207152;
                            }
                        }
                    }
                    var_20 = (min(((~((524287 ? 584578725 : 19401)))), 9));
                }
            }
        }
    }
    #pragma endscop
}
