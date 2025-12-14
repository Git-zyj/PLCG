/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151553
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) (short)-32760)) ^ (((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */unsigned int) var_5)), (var_4))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_11))))))));
    var_15 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((~((-(6294157291732208883LL))))) : ((-(max((((/* implicit */long long int) var_6)), (var_7))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_16 &= ((/* implicit */long long int) (short)-19355);
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) var_2))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_1 + 1] [(signed char)1])))), ((-(((/* implicit */int) (short)19347))))));
                arr_11 [13] [5LL] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_0] [i_0])) && (((/* implicit */_Bool) arr_7 [i_1 + 2] [i_0] [10])))))));
            }
        } 
    } 
}
