/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172810
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
    var_13 = var_5;
    var_14 = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)3)))) >= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) : (var_10)))))) << (((var_12) - (1500253742))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_0]) << (((arr_5 [i_0]) - (263360772)))))) ? (((arr_5 [i_0]) & (arr_5 [i_2]))) : (((/* implicit */int) ((signed char) (unsigned short)12139)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) -1706838237))))), (((229376) | (((/* implicit */int) arr_3 [2U] [i_1]))))))) - (-7726714089890115381LL)));
                                arr_14 [(short)9] [i_4] [i_2] [i_3] [2U] [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-95)) : (-229380)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (unsigned short)56739);
}
