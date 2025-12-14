/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109023
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? ((((+(((/* implicit */int) var_12)))) * (((/* implicit */int) ((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) (signed char)93))))) && (((/* implicit */_Bool) min(((unsigned short)32569), (((/* implicit */unsigned short) var_12))))))))));
                                var_16 |= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))) * (0U)));
                                var_17 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-3989)) || (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))) & (((((/* implicit */_Bool) var_9)) ? (var_1) : (var_4))))))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((unsigned short) var_8));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) var_12)) ^ (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-26698)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_0)))))))))));
}
