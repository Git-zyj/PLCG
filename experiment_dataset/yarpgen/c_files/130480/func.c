/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130480
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_11 |= min((min((((/* implicit */unsigned short) arr_3 [i_0] [i_1])), ((unsigned short)11217))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0]))))));
                var_12 |= ((/* implicit */signed char) min((var_4), (((/* implicit */unsigned int) min((min((((/* implicit */unsigned short) (unsigned char)0)), (var_7))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)11211)) || (((/* implicit */_Bool) arr_1 [i_1]))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_2))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_14 [i_2] [i_3] [i_4]), (((/* implicit */long long int) (signed char)-119))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_13 [i_2 - 2] [i_2])), ((short)1115))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54319)) / (arr_16 [i_2] [i_2] [i_4] [i_4])))) ? (arr_14 [i_2 - 3] [i_2 - 3] [i_2 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    arr_18 [i_2] [i_2] [i_4] = ((/* implicit */signed char) 532676608LL);
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) min((arr_16 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1]), (((/* implicit */int) arr_8 [i_2]))))) - (min((9223372036854775804LL), (((/* implicit */long long int) var_4))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_13 [i_2 - 1] [i_2]))))) & ((+(arr_11 [i_2] [(short)17] [i_4])))));
                }
            } 
        } 
    } 
}
