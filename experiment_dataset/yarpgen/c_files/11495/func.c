/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11495
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
    var_17 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) min(((short)-22434), (((/* implicit */short) var_3))))), (((((/* implicit */_Bool) 1606167273U)) ? (((/* implicit */unsigned int) 1103579417)) : (2824053691U))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((unsigned short) ((var_5) ? (arr_0 [i_0] [i_1 - 2]) : (((/* implicit */long long int) (+(((/* implicit */int) (short)22434))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) 3660540836U);
                                var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 3660540836U)) && (((/* implicit */_Bool) 1103579417))))), (((long long int) (!(((/* implicit */_Bool) -6250321745486056637LL)))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 2] [i_2 - 1] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1 + 2] [i_2 - 1] [i_3]))) : (634426472U)))) ? (max((634426472U), (((/* implicit */unsigned int) arr_7 [i_0] [i_1 + 1] [i_2 - 1] [i_3])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 16276335162121004820ULL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
