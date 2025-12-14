/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11583
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
    var_17 = ((/* implicit */unsigned short) (_Bool)0);
    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) var_15));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [12LL] &= ((/* implicit */long long int) arr_0 [(short)10]);
                var_19 = ((/* implicit */unsigned int) min((1484123942815078496ULL), (((/* implicit */unsigned long long int) ((long long int) arr_2 [i_0])))));
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_12 [i_2] [i_2] [i_1 + 1] [i_2] &= (~(((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_1] [i_1 - 2] [i_2] [i_3 + 2])));
                            arr_13 [i_0] = ((/* implicit */unsigned short) 16962620130894473119ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
