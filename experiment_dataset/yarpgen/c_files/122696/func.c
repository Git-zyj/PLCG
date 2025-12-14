/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122696
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (short)15)) ? (((/* implicit */unsigned long long int) 1627250223)) : (5648493312744496631ULL))) : (301992069790768994ULL)));
    var_17 = ((/* implicit */long long int) ((unsigned long long int) 18144752003918782638ULL));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) 417562703U);
                                arr_15 [i_4] [i_3] [10ULL] [i_1] [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) 18144752003918782606ULL))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [3ULL] [i_1] [3ULL] [i_3] [i_4] [i_4])) && (((/* implicit */_Bool) 9223372036854775807LL))))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) arr_5 [i_0] [i_1]);
                    arr_17 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 140737488355328LL))))) >= (((/* implicit */int) ((unsigned char) (short)-32761)))))), (max((arr_3 [(_Bool)1]), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) != (0ULL))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) min((var_3), (var_12)))) > (((/* implicit */int) var_3))))), ((-((~(((/* implicit */int) (signed char)-47))))))));
}
