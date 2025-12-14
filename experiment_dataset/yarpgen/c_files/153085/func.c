/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153085
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_7))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_18 = max((((unsigned char) arr_1 [i_3 - 4])), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-6)) : (arr_3 [i_0] [i_0] [i_0]))))))));
                            arr_11 [i_2] [i_1] [(short)12] [i_3] |= ((/* implicit */long long int) ((unsigned short) arr_8 [i_0] [8LL] [i_2]));
                            var_19 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4] [i_6])) || (((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4])))))));
                    var_22 = ((/* implicit */unsigned char) min((3877238480U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21038)) && (((/* implicit */_Bool) (unsigned char)78)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-19)) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_3)))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)127))))))) : (((((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (1087382577483447596LL))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)166))))))))));
}
