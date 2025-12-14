/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132835
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [7LL] = arr_7 [i_0] [i_1] [i_0] [i_0];
                    arr_10 [20] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((2187999242U), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)17)), (-387303065))))))) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_3)), (-387303065)))), (min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2])), (arr_6 [i_0] [i_0] [i_2]))))) : (min((max((((/* implicit */unsigned long long int) var_8)), (arr_6 [i_2] [(unsigned short)8] [i_2]))), (((/* implicit */unsigned long long int) arr_2 [i_0 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                {
                    arr_18 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_13 [i_3])), (arr_6 [i_3] [i_4] [i_5]))), (((/* implicit */unsigned long long int) min(((unsigned short)28925), ((unsigned short)54388))))));
                    arr_19 [i_5] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-31325)), (12U)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 19; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            {
                var_15 = ((/* implicit */int) var_6);
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_20 [i_6 - 1]))));
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min(((unsigned short)11147), ((unsigned short)54388))))));
                /* LoopSeq 2 */
                for (long long int i_8 = 2; i_8 < 19; i_8 += 4) 
                {
                    var_18 += ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned long long int) arr_4 [i_6] [i_6 + 1] [i_6 - 1])), (min((arr_22 [i_8] [i_7] [i_6]), (((/* implicit */unsigned long long int) 3289766000U)))))));
                    arr_26 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((unsigned short) var_11)), (var_13)))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_6])), (max((var_5), (var_0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6 - 1] [i_6 + 1])) ? (((/* implicit */int) arr_25 [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) arr_25 [i_6 + 1] [i_6 - 1])))))));
                    arr_27 [i_8] [i_7] [i_7] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_3 [i_7])), (var_5)));
                }
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    arr_31 [i_6] [i_6] [(short)1] [i_9] = ((/* implicit */unsigned char) ((unsigned short) max((max((var_4), (((/* implicit */int) arr_8 [i_6] [i_7] [i_9])))), (((/* implicit */int) var_7)))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((min((((unsigned int) var_7)), (((/* implicit */unsigned int) arr_7 [i_9] [i_6 + 1] [i_6] [i_6])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_6] [i_6 + 1] [i_6 - 1] [i_6])) ? (((/* implicit */int) arr_7 [i_6] [i_6 - 1] [i_6 + 1] [i_9])) : (((/* implicit */int) (unsigned char)101))))))))));
                    var_20 = ((/* implicit */unsigned short) arr_20 [i_6 - 1]);
                    arr_32 [i_9] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_28 [i_7] [i_6 - 1] [i_6 + 1] [i_6])), (min((23795754712657957LL), (((/* implicit */long long int) arr_28 [i_7] [i_6 + 1] [i_6 + 1] [i_6]))))));
                    arr_33 [i_9] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_0 [i_6 + 1] [i_6 - 1])), (var_13)))), (min((var_6), (((/* implicit */long long int) arr_7 [i_7] [i_6 - 1] [i_6] [i_6 + 1]))))));
                }
                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_25 [i_6 - 1] [i_6 + 1])), (min((arr_20 [i_6]), (((/* implicit */unsigned int) var_4))))))), (max((((/* implicit */long long int) arr_2 [i_6])), (min((2LL), (((/* implicit */long long int) (signed char)-25))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (var_0)));
}
