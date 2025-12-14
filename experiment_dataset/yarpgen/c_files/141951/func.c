/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141951
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
    var_19 -= ((short) var_16);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_2] [i_3] [i_0] |= ((/* implicit */int) (((-((-(((/* implicit */int) arr_9 [(unsigned short)8] [(short)10] [i_3] [i_3])))))) == (((/* implicit */int) (unsigned short)25418))));
                                var_20 = ((/* implicit */unsigned int) min((arr_8 [i_0] [i_1 + 1] [(signed char)16] [i_4] [i_1 - 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_1 + 1] [i_2] [i_1 - 1] [i_3])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)25396)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)40109)))));
                    arr_14 [(unsigned char)7] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) var_15)) / (((((((/* implicit */_Bool) (unsigned short)40130)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_2])))) + (((/* implicit */int) arr_4 [i_0] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
}
