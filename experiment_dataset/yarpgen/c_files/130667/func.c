/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130667
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
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_2)), (max((max((((/* implicit */unsigned long long int) var_3)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3052244255U)) ? (((/* implicit */unsigned int) var_14)) : (3052244255U))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 6; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_6 [i_0 + 1] = ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)9507)) - (9490)))))));
                var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_1 + 1])), (3052244278U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2566441862U)) ? (1728525433U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 - 1]))))))));
                var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)63))) / (min((((/* implicit */long long int) min(((unsigned char)255), (arr_5 [i_0] [i_0] [i_0])))), (min((((/* implicit */long long int) 2566441862U)), (-8722971858249464017LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            {
                arr_11 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [i_2] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)107)) ? (arr_7 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_3])))))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (((/* implicit */int) arr_10 [i_2] [i_3])) : (((/* implicit */int) arr_10 [i_2] [i_3])))) : (((((/* implicit */int) (short)-16825)) ^ (((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_10 [i_3] [i_3]))))))));
                arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_10 [i_2] [i_3]), (arr_10 [i_2] [i_3])))) & (((/* implicit */int) (unsigned char)0))));
            }
        } 
    } 
}
