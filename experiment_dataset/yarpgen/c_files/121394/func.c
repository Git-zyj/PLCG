/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121394
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)19))))), (((arr_1 [i_1]) ? (((/* implicit */int) max(((unsigned short)6851), (((/* implicit */unsigned short) var_7))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_2))))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((signed char) ((signed char) 2740491593899698647LL))))));
                                var_14 ^= ((/* implicit */short) min((((/* implicit */int) ((unsigned char) var_9))), ((~(((/* implicit */int) arr_11 [i_0] [(_Bool)1] [i_2] [i_3] [i_4]))))));
                                arr_13 [i_0] [i_2] [i_4] = ((/* implicit */unsigned char) ((min((((8388607LL) - (((/* implicit */long long int) ((/* implicit */int) (short)41))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)113)) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) - (82)))))))) != (((/* implicit */long long int) (~(arr_7 [i_4] [i_3] [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (min((var_2), (((/* implicit */unsigned short) var_7)))))))));
}
