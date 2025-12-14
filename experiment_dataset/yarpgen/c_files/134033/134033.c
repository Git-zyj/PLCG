/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (min((min(((max(4095, (arr_5 [i_1] [i_0] [3] [i_0])))), (min(var_2, (arr_4 [i_1]))))), (max(((max(var_5, (arr_2 [i_1] [i_0])))), (min(0, 10767241692551420965))))));
                    var_14 ^= (max(((max((min(var_5, var_12)), ((min(1, 0)))))), (min((min((arr_0 [i_0]), var_3)), ((min(var_7, var_1)))))));
                }
            }
        }
    }
    var_15 = (min((min((max(6241103452563376176, var_0)), ((min(-6447, 2379690402))))), (min(((min(-12, -12))), (min(var_6, 1915276894))))));
    var_16 = (min(((max((min(var_10, var_11)), ((max(1, var_3)))))), (min((min(var_12, var_0)), (max(var_11, var_8))))));
    var_17 = (max(var_17, ((min((max((max(7555749142647403666, var_7)), ((min(-182719426, 36966))))), ((max((min(-12, var_6)), ((min(var_2, var_4)))))))))));
    #pragma endscop
}
