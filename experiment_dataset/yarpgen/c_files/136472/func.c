/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136472
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = var_9;
    var_12 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_13 = 58720256;
                    var_14 = -616782064;
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_1] = -616782064;
                        arr_10 [i_0] [i_1] [2] [i_2] = 616782064;
                        var_15 = -405813619;
                        arr_11 [i_1] = -2147483629;
                    }
                    for (int i_4 = 1; i_4 < 11; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_1] = -1;
                        arr_17 [i_0 - 3] [i_0 - 3] [i_2] [i_1] = -401504079;
                        arr_18 [2] [2] [i_2] [i_1] = 1526528477;
                        arr_19 [i_1] = 616782063;
                        arr_20 [i_0 + 2] [i_1] [i_1] = 1604845842;
                    }
                }
            } 
        } 
    } 
}
