/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183281
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
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) ? (var_14) : (0))))))) / ((-(((/* implicit */int) min((var_2), (((/* implicit */short) (signed char)64)))))))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_8))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)889))) & (41923040U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)36503)))))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29032))))))));
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (((+(((/* implicit */int) var_13)))) == (((382075132) / (((/* implicit */int) var_13))))))) == (((/* implicit */int) (!(((((/* implicit */_Bool) -1335364857)) || (((/* implicit */_Bool) 1023)))))))));
                                var_18 = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    var_19 &= ((/* implicit */signed char) var_2);
                }
            } 
        } 
    } 
}
