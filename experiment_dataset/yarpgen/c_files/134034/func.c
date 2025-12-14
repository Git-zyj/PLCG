/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134034
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned short) (!((((!(arr_4 [i_0] [i_1] [i_2]))) && ((!(((/* implicit */_Bool) arr_1 [i_0]))))))));
                    var_18 = ((/* implicit */unsigned int) var_4);
                    arr_10 [i_0] [i_1] [i_2] = ((var_9) + (((/* implicit */long long int) max((arr_8 [i_0] [i_1] [i_2] [i_2]), (var_13)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                {
                    arr_21 [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(84402404U)))) / (((var_0) / (((/* implicit */long long int) var_5))))))) ? (((arr_11 [i_3]) / (((/* implicit */long long int) 773578331U)))) : (((((/* implicit */_Bool) min((arr_18 [i_4] [i_5] [i_5]), (((/* implicit */unsigned short) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) : (min((var_10), (((/* implicit */long long int) (unsigned short)13920))))))));
                    var_19 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_16) : (((/* implicit */long long int) arr_16 [i_4]))))) ? (((((/* implicit */_Bool) 471858786U)) ? (((/* implicit */unsigned long long int) -1LL)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_19 [i_3] [i_4] [i_5])))));
                    arr_22 [i_5] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) (!(arr_17 [i_4] [i_5] [i_5])))) : (((/* implicit */int) ((short) arr_17 [i_3] [i_4] [i_5])))));
                    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_3])) ? (((var_15) - (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)44))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                }
            } 
        } 
    } 
}
