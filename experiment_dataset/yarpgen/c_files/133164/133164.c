/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((max((var_8 << var_4), 127)), (((!(!var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_13 = (arr_3 [i_1]);

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_14 &= (((((arr_2 [i_0 - 2] [i_0 + 2]) ? 0 : (arr_2 [i_0 + 1] [i_0 - 2])))) ? (!57160) : ((58616 ? (arr_2 [i_0 + 1] [i_0 + 1]) : (arr_2 [i_0 - 1] [i_0 - 3]))));
                    var_15 = ((+(((arr_6 [i_0 - 2] [i_0 - 3] [9]) << (57160 - 57149)))));
                    var_16 = (max(var_16, (arr_1 [2] [i_1])));
                    var_17 = (max((min(var_8, (min(1, (arr_3 [i_0]))))), 8376));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_12 [i_0] = (max((max(17280240164386303168, 8395)), (((-(arr_6 [i_0 + 1] [i_0 - 3] [i_0]))))));
                    var_18 = (arr_1 [i_0] [i_0]);
                    var_19 &= 1166503909323248462;
                }
                arr_13 [i_0] [1] &= ((((14434423098544834364 << (min(0, (arr_10 [14] [i_0]))))) << ((((((((arr_0 [8] [16]) > 1))) << ((((var_7 ? (arr_3 [i_0]) : (arr_6 [i_0] [i_1] [5]))) - 836028622)))) - 536870908))));
            }
        }
    }
    #pragma endscop
}
