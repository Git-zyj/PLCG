/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100515
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))) : (-8297439453186544134LL)))) ? (((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                arr_5 [(unsigned short)14] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])), (((arr_1 [i_0]) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 865129231)) : (arr_0 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_6);
    var_14 = ((/* implicit */unsigned short) ((var_8) ? (min((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (_Bool)1))))), (min((var_12), (var_12))))) : (max((var_12), (((/* implicit */int) var_7))))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                {
                    arr_13 [i_2] [5U] [i_2] = var_10;
                    arr_14 [i_4] = ((/* implicit */signed char) var_2);
                    arr_15 [i_2] [i_3] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_2])) ? (((/* implicit */long long int) -48406512)) : (arr_11 [i_4] [i_3] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2397643767767818323LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_2] [i_3] [0U]))))) ? (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39099))) : (-3856340926297649382LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_4] [i_2] [i_2]), (arr_9 [i_2] [(unsigned char)5] [i_4])))))))) : (max((((((/* implicit */_Bool) arr_7 [i_4])) ? (var_2) : (arr_7 [4U]))), (((/* implicit */unsigned long long int) -25418839391851113LL)))));
                    var_15 = ((/* implicit */signed char) ((arr_10 [i_4] [i_2]) ? (((/* implicit */unsigned long long int) ((arr_10 [i_3] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116))) : (1395697706U)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (arr_7 [i_3])))));
                    arr_16 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3856340926297649383LL)) ? (16251806303879242722ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (min((((/* implicit */unsigned int) var_8)), (1395697710U)))))) ? (((arr_10 [i_2] [i_4]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_8 [i_2] [i_4]))));
                }
            } 
        } 
    } 
}
