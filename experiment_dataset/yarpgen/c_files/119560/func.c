/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119560
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) ((unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (_Bool)1))))));
                var_14 = ((/* implicit */unsigned int) var_0);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)96)) <= (((/* implicit */int) (short)16977)))))));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) 2325519233U))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((max((((unsigned int) var_8)), (((/* implicit */unsigned int) var_7)))), (((((/* implicit */unsigned int) ((/* implicit */int) ((3253773170U) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) & (var_10)))));
    var_18 *= ((/* implicit */short) ((2325519242U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)535)))));
    var_19 |= ((/* implicit */unsigned short) (_Bool)1);
    var_20 = ((/* implicit */long long int) var_12);
}
