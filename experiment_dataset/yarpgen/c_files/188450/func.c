/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188450
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                arr_4 [12ULL] [12ULL] [i_1] &= ((/* implicit */_Bool) (~(7335669891298905078ULL)));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_16 |= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (signed char)-108))))));
                            var_17 ^= ((/* implicit */int) (((~(446617955))) != ((-(((/* implicit */int) (unsigned short)51606))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) - (((/* implicit */int) (short)-16760))));
    var_19 *= ((/* implicit */unsigned char) var_11);
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) var_12));
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) << ((+(((((/* implicit */_Bool) 9669052944437664893ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (3269261630000461694ULL)))))));
}
