/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141189
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
    var_12 -= ((((/* implicit */unsigned long long int) ((long long int) var_11))) | (var_4));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / ((+(1253525442268554971ULL)))));
                    var_15 = ((/* implicit */long long int) max(((-(var_4))), (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_10 [i_0] = max((((((/* implicit */_Bool) (+(2032908331)))) ? (((7316700215989708287ULL) + (((/* implicit */unsigned long long int) 2032908331)))) : (var_1))), (var_4));
                                var_16 -= ((/* implicit */unsigned long long int) ((arr_5 [i_3]) < (((/* implicit */unsigned long long int) 2093239892247453601LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
