/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17821
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) 98007478)) ? (((/* implicit */int) (unsigned short)63015)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) (unsigned short)63025))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [13LL] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2 - 2])) && (((/* implicit */_Bool) arr_4 [i_2 - 2]))))), (((unsigned long long int) arr_4 [i_2 - 4]))));
                    var_16 = ((/* implicit */short) ((((unsigned int) (~(((/* implicit */int) (unsigned short)63027))))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)21)), (min((arr_8 [i_0] [i_1] [i_2 - 4]), (((/* implicit */unsigned short) (short)15))))))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((arr_12 [i_3]) / ((~(arr_1 [i_3]))))) : (((/* implicit */int) ((short) arr_8 [i_3] [i_3] [13LL])))));
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (int i_5 = 3; i_5 < 13; i_5 += 3) 
            {
                for (long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                {
                    {
                        arr_21 [4ULL] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_6 + 2]);
                        arr_22 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_3] [i_4])) ? (max((((/* implicit */long long int) ((var_4) ? (((/* implicit */int) (unsigned short)2519)) : (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_6]))))), (((long long int) arr_5 [i_4] [(short)4] [(short)4])))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_4] [i_5])))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */_Bool) ((min((140737219919872LL), (((/* implicit */long long int) var_12)))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-17107)) <= (((/* implicit */int) (short)15))))))));
}
