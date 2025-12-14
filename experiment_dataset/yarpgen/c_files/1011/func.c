/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1011
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 2577796948050535203ULL))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) min(((-(5998006152671961966ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0])))))));
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_10 [i_1] [i_1] [i_1 + 1] [5ULL] [i_1]))));
                                var_17 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) % (-6276511577172034214LL)));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */int) (-(((2041360975U) | (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)45327)) | (((/* implicit */int) arr_0 [i_1 + 1] [i_0])))))))));
                var_19 ^= (+(-7414035088455598748LL));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_14);
}
