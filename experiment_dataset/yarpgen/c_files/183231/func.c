/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183231
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
    var_19 = ((/* implicit */int) ((((((var_10) ? (11841701886626389060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))))) / (((/* implicit */unsigned long long int) ((var_16) - ((-(var_6))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_3);
                                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), (var_15)))) >= (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (((var_10) ? (arr_2 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3 - 1] [i_0])))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */int) arr_7 [i_2 + 2] [i_1] [i_0]);
                }
            } 
        } 
    } 
}
