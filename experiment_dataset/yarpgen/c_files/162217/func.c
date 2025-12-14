/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162217
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
    var_10 = ((/* implicit */short) var_0);
    var_11 = ((/* implicit */unsigned char) var_2);
    var_12 = ((/* implicit */_Bool) var_4);
    var_13 ^= ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] = ((/* implicit */short) (unsigned short)24576);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_14 ^= ((/* implicit */long long int) (unsigned short)40964);
                                arr_13 [(unsigned short)5] [i_0] [i_0] [i_3] [i_4 - 1] = (unsigned short)24557;
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (unsigned short)43571))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] = ((/* implicit */short) (unsigned short)24557);
                }
            } 
        } 
    } 
}
