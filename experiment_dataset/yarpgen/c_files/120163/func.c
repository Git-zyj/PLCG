/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120163
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
    var_13 = ((/* implicit */_Bool) 2176179299U);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) 1U);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_14 |= ((/* implicit */unsigned char) (short)16376);
                    var_15 = ((/* implicit */unsigned int) min((var_15), (var_1)));
                }
                for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    var_16 *= (unsigned char)190;
                    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) (unsigned char)125)) : (507028731)))) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) max(((signed char)(-127 - 1)), ((signed char)-46))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 1; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) (unsigned char)141)))) - (((/* implicit */int) ((unsigned char) min(((signed char)127), ((signed char)-85)))))));
                                arr_19 [i_0] [i_1 + 1] [i_1 + 1] [i_4] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)127)), (2147483647)));
                                var_19 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)40))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) (_Bool)1);
                }
            }
        } 
    } 
    var_21 ^= ((/* implicit */_Bool) ((int) ((((/* implicit */int) (unsigned char)0)) >= (215009312))));
}
