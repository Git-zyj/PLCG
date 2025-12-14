/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184998
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) arr_4 [i_0] [i_1]);
                                var_17 = ((/* implicit */signed char) -3158972851213866994LL);
                                var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)16971)) >> (((((14256790575298688357ULL) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))) - (4189953498410863241ULL)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 3])) ^ (((/* implicit */int) arr_4 [i_2 + 1] [i_2 - 2]))))));
                    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)32767))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((signed char) 18077867940587738918ULL));
}
