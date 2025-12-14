/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152822
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
    var_20 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (~(2147483647)))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)197))))), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                                var_22 -= ((/* implicit */_Bool) (((((+(3223380363U))) & (((/* implicit */unsigned int) -805381765)))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_5)) ^ (-805381774))))))));
                                arr_13 [i_0] [i_0] [i_1] [i_2 - 2] [i_3] [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) ((805381764) / (-805381765))))), (((unsigned int) ((var_16) >= (((/* implicit */int) var_15)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [(signed char)24] |= ((/* implicit */int) ((((_Bool) arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [(unsigned char)8] [i_1] [i_1 - 1])) || (((/* implicit */_Bool) ((long long int) (signed char)18)))));
                var_23 -= ((/* implicit */unsigned int) arr_1 [i_0]);
            }
        } 
    } 
    var_24 = var_4;
}
