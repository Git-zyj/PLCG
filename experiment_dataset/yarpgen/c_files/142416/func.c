/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142416
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
    for (signed char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (short)26230)))), ((((-(((/* implicit */int) (signed char)104)))) * ((-(((/* implicit */int) (unsigned char)127)))))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 9; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (((!(((/* implicit */_Bool) 4294967295U)))) && (((/* implicit */_Bool) max(((short)26230), ((short)26230)))))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */int) (short)26230)) << ((((+(((var_9) << (((var_13) - (3260184572U))))))) - (4741891626529829161LL)))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+(((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)-80)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-26231)) && (((/* implicit */_Bool) (short)26230))));
}
