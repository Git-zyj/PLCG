/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128965
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (+(((((_Bool) var_5)) ? (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) (unsigned short)11107))))) : (max((10171129991072196988ULL), (8275614082637354634ULL))))))))));
    var_12 = ((/* implicit */int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) / (3279357457U))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56029)))))) > (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27445))) - (var_3))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((((((-287832054) / (((/* implicit */int) (unsigned char)241)))) + (2147483647))) >> (((arr_6 [(unsigned short)8] [i_1] [i_2] [i_2]) - (2271514968U)))))));
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((/* implicit */int) var_8)) > (-1055313268))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_0]))))))))));
                            }
                        } 
                    } 
                    var_15 = ((((/* implicit */_Bool) ((2147483644) >> (0U)))) ? (-1055313268) : (147187823));
                    var_16 = ((/* implicit */_Bool) min((var_16), ((_Bool)1)));
                }
            } 
        } 
    } 
}
