/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135957
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) (+(min((7596820482118016320ULL), (((/* implicit */unsigned long long int) (unsigned short)54279))))));
                    var_21 = ((/* implicit */unsigned int) (unsigned short)20779);
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned short) (unsigned short)11147)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                arr_15 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -992049835)))))) : ((((_Bool)0) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_4] [i_4])))))))) ? (((max((var_0), (((/* implicit */unsigned long long int) (short)-27126)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_4]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1877391254U)), (9223372036854775807LL))))));
                arr_16 [i_4] [5LL] [i_3] |= ((/* implicit */_Bool) ((int) ((9223372036854775806LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))))));
                var_23 = ((/* implicit */short) ((unsigned int) var_5));
            }
        } 
    } 
}
