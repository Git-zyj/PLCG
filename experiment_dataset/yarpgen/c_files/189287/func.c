/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189287
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
    var_13 = ((/* implicit */signed char) -2082517817969299331LL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) var_3);
                                arr_14 [i_2] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((max((max((2082517817969299331LL), (var_9))), (((/* implicit */long long int) ((unsigned int) 527154145U))))), (((/* implicit */long long int) ((int) (+(var_2)))))));
                                var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_13 [i_4 - 1] [i_1] [i_1 + 1] [i_3] [i_1] [(unsigned short)12] [i_3]), (arr_13 [i_4 + 2] [(unsigned char)16] [i_1 - 1] [i_1] [i_4 + 3] [i_4] [i_0]))))));
                            }
                        } 
                    } 
                } 
                arr_15 [(signed char)2] = -2082517817969299331LL;
            }
        } 
    } 
}
