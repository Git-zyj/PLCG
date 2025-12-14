/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145728
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19101))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                        var_20 = ((/* implicit */short) max((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))), (max((187550286), (((/* implicit */int) var_11)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1])))))));
                        arr_12 [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1]))));
                        var_21 = -6228440917999461745LL;
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */int) ((_Bool) (!((((_Bool)0) && ((_Bool)1))))));
                        var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-23)) && (((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) 647755620))))));
                        arr_15 [i_0] [i_1 + 1] [i_4 - 1] = ((/* implicit */short) (-(((var_14) << (((arr_1 [i_1 + 1] [i_1 - 1]) - (172368938)))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) max((min((var_9), (((/* implicit */long long int) var_19)))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (var_3) : (((/* implicit */long long int) 2130706432))))));
}
