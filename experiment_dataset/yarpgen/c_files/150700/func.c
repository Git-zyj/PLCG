/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150700
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
    var_18 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)25))))) > (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (((/* implicit */int) (signed char)103)) : (-23914696)))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_2])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1]))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-104)) / (((/* implicit */int) (signed char)-117))))))) >> (((max((arr_1 [i_2 + 1]), (arr_1 [i_2 + 1]))) - (8327446500119142020LL)))));
                            var_20 = arr_3 [i_3] [i_3];
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -23914696)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (signed char)15))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) 3747167611U)) || (((/* implicit */_Bool) arr_1 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4))))) : (((/* implicit */int) (short)19931)))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0 + 1])), ((+(((/* implicit */int) (short)-5300))))))) ? ((-(arr_9 [i_1]))) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))));
                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) 3226831422U))));
            }
        } 
    } 
}
