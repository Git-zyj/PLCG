/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124302
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_13)))) ? (((((/* implicit */_Bool) ((short) 5377846913626255167ULL))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) (short)-14260)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_0] [(signed char)18])))))));
                                arr_12 [i_0] = var_4;
                                arr_13 [2LL] [i_3 - 1] [i_3 + 1] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_4] [i_4 + 3] [i_4 + 3] [i_4 - 2] [i_4 + 1]), (arr_8 [i_4] [i_4] [i_4 + 4] [i_4 - 1] [(unsigned short)18])))) ? (((/* implicit */long long int) ((int) arr_8 [(unsigned char)18] [i_4 - 1] [i_4 + 1] [i_4] [i_4]))) : (((((/* implicit */long long int) arr_8 [i_4 + 1] [i_4] [i_4 + 3] [i_4] [i_4])) * (0LL)))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-31903)))))))) : (((/* implicit */int) arr_7 [i_4 + 1] [i_4 - 2] [i_4 + 2] [i_4] [i_4 + 1] [i_4 + 3]))));
                            }
                        } 
                    } 
                    var_17 = ((unsigned long long int) var_14);
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */unsigned long long int) var_9);
}
