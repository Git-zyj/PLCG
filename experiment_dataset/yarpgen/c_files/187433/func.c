/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187433
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
    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_1 [i_2]), (var_6)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)8))));
                                var_18 *= var_4;
                            }
                        } 
                    } 
                    arr_15 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) arr_5 [i_0] [(unsigned char)14] [i_1] [i_2])) - (((/* implicit */int) (unsigned char)231)))) : (((/* implicit */int) var_0)))) | (((/* implicit */int) var_7))));
                    arr_16 [i_0] = (unsigned char)47;
                }
            } 
        } 
    } 
}
