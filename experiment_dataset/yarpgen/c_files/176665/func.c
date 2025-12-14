/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176665
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
    var_18 = ((/* implicit */signed char) ((var_7) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-8355)) ^ (((/* implicit */int) (short)-8956)))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (short)-1)) <= (((/* implicit */int) var_5))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8955)) ? (((/* implicit */int) (short)8354)) : (((/* implicit */int) (short)-8979))))) && (((/* implicit */_Bool) (~((-(((/* implicit */int) var_6)))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) var_11);
                    arr_8 [i_2] [i_1 + 2] [i_0] = ((/* implicit */short) var_16);
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((((((/* implicit */int) (signed char)-23)) % (((/* implicit */int) (short)-7202)))), (((/* implicit */int) (short)-8979))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) (short)-7225));
                                arr_16 [i_3] [i_1] [i_0] = ((/* implicit */short) (+((((+(((/* implicit */int) (short)8972)))) << (((((((/* implicit */_Bool) (short)32745)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32591))) : (1592967161U))) - (4294934688U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (short)-7208)) * (((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) min(((signed char)-120), ((signed char)34)))) : (((/* implicit */int) (short)16212))))));
}
