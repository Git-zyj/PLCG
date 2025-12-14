/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100683
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
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_12 [(unsigned short)8] [1U] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned short)55056)), (229631045498620322LL))), ((+(arr_5 [i_1] [i_1] [i_0]))))))));
                                var_19 = ((/* implicit */unsigned short) (short)-13052);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) arr_3 [(unsigned short)13] [i_1] [i_2 + 3]);
                }
            } 
        } 
    } 
}
