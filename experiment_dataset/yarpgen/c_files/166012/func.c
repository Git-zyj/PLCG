/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166012
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (max((((/* implicit */long long int) var_5)), (-7226703660582879121LL)))))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-26)) != (((/* implicit */int) var_7))))) : (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 1]))))));
                arr_8 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_14)), (var_8)))) ? (-4815622633441956253LL) : (((/* implicit */long long int) arr_0 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_13 [i_2] [i_2] = ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2]))) : (-4815622633441956253LL)))));
        arr_14 [i_2] [i_2] = ((/* implicit */signed char) ((long long int) var_12));
        arr_15 [i_2] [i_2] = ((((((/* implicit */int) var_10)) < (((/* implicit */int) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2]))) : (-7226703660582879124LL));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        arr_19 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */int) var_14)) : (arr_18 [i_3] [i_3]))))));
        arr_20 [i_3] = ((/* implicit */unsigned char) ((var_6) ? (arr_18 [i_3] [i_3]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (81967244860241447LL))))));
    }
    /* LoopNest 3 */
    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (unsigned short i_6 = 3; i_6 < 21; i_6 += 2) 
            {
                {
                    arr_27 [i_4] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_25 [i_4 + 2] [i_5] [i_6] [i_4])) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_10 [i_4]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (17750131323245041850ULL)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        arr_31 [i_4] = ((/* implicit */_Bool) ((arr_22 [i_4 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4 + 1]))) : (7183464508518653288LL)));
                        arr_32 [i_4] [i_7] = ((/* implicit */int) (~(((unsigned long long int) var_3))));
                        arr_33 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) arr_23 [i_4]);
                        arr_34 [i_4] [i_6] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) ((((/* implicit */int) var_14)) <= (arr_23 [i_4]))))));
                    }
                }
            } 
        } 
    } 
}
