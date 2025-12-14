/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11345
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
    var_13 = (-((+(-235847117))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_0] = ((/* implicit */int) max((((((var_3) < (262080))) ? (((/* implicit */long long int) (((_Bool)1) ? (1233567779U) : (((/* implicit */unsigned int) -756186012))))) : (((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) >> (((1796833733) - (1796833730))))))), (((/* implicit */long long int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_14 *= max((((7263557144846303422LL) / (((long long int) -7263557144846303426LL)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (arr_6 [i_0] [i_0] [i_0 + 1])))));
                                var_15 = ((/* implicit */long long int) min((var_15), (7263557144846303425LL)));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))) ? (min((-16), (((/* implicit */int) (signed char)81)))) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((-16) <= (1600379239))))))) : (2328747668U)));
                }
            } 
        } 
    } 
}
