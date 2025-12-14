/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127448
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
    var_17 = ((/* implicit */signed char) 4294967295U);
    var_18 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (unsigned short)49930);
                var_20 = ((/* implicit */unsigned char) (-(arr_1 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) max((17661331131679358348ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_0] [i_0])) > (((/* implicit */int) (_Bool)1))))), (((unsigned char) (_Bool)1)))))));
                            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)59622);
                            arr_14 [i_2] [i_0] [(short)12] [i_3] [(short)12] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = (unsigned short)59622;
}
