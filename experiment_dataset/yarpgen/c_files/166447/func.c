/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166447
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
    var_17 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */long long int) ((/* implicit */int) var_12))) / (-702746008402761844LL)))))));
    var_18 = var_10;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] = ((((/* implicit */unsigned long long int) (+((-(702746008402761843LL)))))) * (arr_2 [i_0]));
                                arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */long long int) arr_11 [i_0] [i_4] [i_2 - 1] [i_0] [(unsigned short)18] [i_4] [i_2 - 1]);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) var_6);
            }
        } 
    } 
}
