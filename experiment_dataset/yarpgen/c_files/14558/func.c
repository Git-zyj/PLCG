/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14558
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_0] [(signed char)15] = ((/* implicit */signed char) ((min((((2809052795U) << (((var_1) - (6364508903981203120LL))))), (((/* implicit */unsigned int) min((arr_11 [(unsigned short)15] [i_1] [i_1] [i_3]), (((/* implicit */unsigned char) var_2))))))) - (arr_7 [i_0] [i_0] [i_0] [i_0])));
                                arr_15 [7U] [i_4] [i_2] [i_0] [i_4] [i_2] [i_4] = ((/* implicit */unsigned int) ((short) arr_4 [i_0]));
                                var_17 = ((/* implicit */short) (((-((((_Bool)0) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) (_Bool)1)))))) / ((+(((/* implicit */int) (short)19796))))));
                                arr_16 [i_0] [i_3] [(short)18] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_4])) ? (var_14) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) : (arr_7 [i_0] [(_Bool)1] [i_0] [i_4]))), (((/* implicit */unsigned int) var_9))))));
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) min((arr_8 [i_0] [i_0]), (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 ^= ((/* implicit */signed char) -1);
    var_19 = ((/* implicit */short) min((((/* implicit */int) var_4)), (((((/* implicit */int) var_4)) * ((+(((/* implicit */int) var_7))))))));
    var_20 = ((/* implicit */short) var_2);
    var_21 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) << (((((((((/* implicit */int) var_8)) << (((var_6) - (936114256))))) << (((min((var_16), (((/* implicit */int) var_3)))) + (1110825509))))) - (38769)))));
}
