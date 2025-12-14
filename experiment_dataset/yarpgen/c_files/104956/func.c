/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104956
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_10 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (max((((/* implicit */unsigned int) arr_1 [i_1] [i_3])), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)60083)) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_3] [i_4]))))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_2])) ? (((((/* implicit */int) arr_5 [i_4] [i_4] [i_4])) | (arr_11 [i_3] [i_3]))) : (((/* implicit */int) (signed char)127))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)34418)), (arr_12 [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) 17592051826688LL))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */signed char) (+((~(((unsigned int) (signed char)110))))));
                    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) var_3))))) ? ((~(var_0))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */long long int) var_7);
    var_13 = ((/* implicit */_Bool) max((var_13), (var_3)));
}
