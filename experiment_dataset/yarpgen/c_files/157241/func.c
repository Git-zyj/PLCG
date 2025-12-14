/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157241
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
    var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
    var_20 *= ((/* implicit */short) min((((/* implicit */int) ((short) (~(var_3))))), (min((((/* implicit */int) var_2)), (var_14)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) (((~((~(((/* implicit */int) (short)1023)))))) == (((/* implicit */int) (((+(((/* implicit */int) var_1)))) == ((+(((/* implicit */int) arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_21 = ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)70)), ((short)1019)))) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((((/* implicit */_Bool) (short)20229)) ? ((~(((/* implicit */int) (short)6431)))) : (((/* implicit */int) min((arr_1 [i_2 - 1]), (arr_1 [(short)14])))))));
                                var_22 *= ((/* implicit */short) ((((arr_4 [i_1 + 1] [i_3] [i_2 - 1]) | (arr_4 [i_1 + 1] [i_1] [i_2 - 1]))) | (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)22287)) : (((/* implicit */int) var_11)))), (((/* implicit */int) min(((short)-20212), ((short)-30690))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
