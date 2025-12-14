/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167131
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
    var_17 = ((/* implicit */short) ((signed char) (_Bool)0));
    var_18 = ((long long int) max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_0] [i_0] = ((/* implicit */long long int) 1305948661);
                            arr_11 [i_0] [i_1 - 1] [i_0] [i_3] = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1 + 1] [i_3])) ? (1512289232U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28045))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
