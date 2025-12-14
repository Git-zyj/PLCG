/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104560
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
    var_17 = var_15;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [(short)21] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (min((arr_7 [i_3] [(unsigned short)9] [(_Bool)1] [15]), (((/* implicit */short) (_Bool)1)))))))));
                            arr_10 [i_0] [15LL] [15LL] [(short)6] [i_0] [i_0] = ((/* implicit */long long int) max((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (short)-29092)))), (max((((/* implicit */int) var_9)), (arr_6 [i_2] [(signed char)6] [i_2] [i_2])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
