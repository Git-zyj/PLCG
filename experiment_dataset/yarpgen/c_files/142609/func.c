/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142609
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6914039130553461830ULL)) ? (16777208U) : (16777208U)));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) var_7);
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((int) 15125717641508949687ULL)));
            }
        } 
    } 
    var_11 = -4659361153404364909LL;
}
