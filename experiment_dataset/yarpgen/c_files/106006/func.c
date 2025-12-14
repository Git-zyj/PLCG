/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106006
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
    var_17 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_2] [i_1] [i_1] = var_7;
                    arr_8 [11U] [i_1] [i_0] = (i_1 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_5 [i_1] [i_1 + 3] [i_1 + 2] [i_1])))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) << (((arr_5 [i_1] [i_1] [i_1] [i_1]) - (1467645620U))))) + (((/* implicit */int) (signed char)-87)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_5 [i_1] [i_1 + 3] [i_1 + 2] [i_1])))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) << (((((arr_5 [i_1] [i_1] [i_1] [i_1]) - (1467645620U))) - (1968574764U))))) + (((/* implicit */int) (signed char)-87))))))));
                    var_18 = ((/* implicit */signed char) min((var_18), ((signed char)71)));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) min((arr_4 [(signed char)12] [i_0] [i_0]), (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 1839025033U))))))) + ((-(((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((+(((/* implicit */int) ((((/* implicit */int) arr_10 [2U] [i_4])) < (((/* implicit */int) arr_9 [i_3] [(signed char)6]))))))) >> (((/* implicit */int) arr_1 [i_3])))))));
                var_22 = ((/* implicit */signed char) 698424712U);
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((((((/* implicit */_Bool) 4294967287U)) ? (((/* implicit */unsigned long long int) 2455942256U)) : (var_0))) << (((((var_11) ? (1839025066U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))))) - (4294967155U))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)31767)) : (((/* implicit */int) var_7))))))))))));
}
