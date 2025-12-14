/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125788
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
    var_10 ^= ((/* implicit */signed char) (~(var_1)));
    var_11 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) max(((~(63U))), (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_0)))))))), (max((var_1), (((/* implicit */long long int) min((var_9), (((/* implicit */unsigned int) (unsigned short)65514)))))))));
    var_12 = ((/* implicit */signed char) max((var_5), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1333761971150397778LL)) ? (-1333761971150397767LL) : (((/* implicit */long long int) var_3))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(var_5)))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [(unsigned short)6] [i_0] [i_0] [i_0] [i_0] [(_Bool)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_0), (((/* implicit */signed char) arr_14 [i_4 - 3] [i_4 + 2] [21LL] [i_4 + 2] [i_4 - 1]))))) && (arr_14 [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 3])));
                                var_13 = ((/* implicit */int) (+(((long long int) var_1))));
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) min(((~(-1333761971150397757LL))), (((var_1) & (-1333761971150397764LL))))))));
                                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+((+(-1333761971150397777LL))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
