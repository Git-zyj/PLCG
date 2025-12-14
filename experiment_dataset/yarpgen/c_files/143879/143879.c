/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_6 / (4294967295 % -2))) * ((((var_10 >= (max(2097151, 63527))))))));
    var_20 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] = (max(0, 87));
                    arr_10 [i_2] [11] = (max((arr_1 [i_2 + 1]), (arr_4 [i_1 - 2] [i_2 - 2] [i_2 - 1])));
                }
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    var_21 = (min(var_21, 200));
                    var_22 = (max(var_22, var_2));
                    var_23 -= ((-(((arr_5 [i_3 + 1] [i_3 - 1] [i_1 - 3]) ? (arr_5 [i_3 + 2] [i_3 - 1] [i_1 - 1]) : (arr_5 [i_3 - 1] [i_3 + 1] [i_1 - 3])))));
                }
                var_24 = (max(var_24, ((max((arr_11 [i_0] [i_0] [i_0]), (((min(var_6, 240)))))))));
            }
        }
    }
    var_25 -= ((max(2008, -1153)));
    #pragma endscop
}
