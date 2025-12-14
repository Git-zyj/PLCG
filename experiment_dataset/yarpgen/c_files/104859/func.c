/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104859
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
    var_12 = ((/* implicit */signed char) var_9);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_2)) / (((5609359543309773000ULL) << (((12837384530399778616ULL) - (12837384530399778607ULL)))))));
                    var_14 -= arr_3 [i_0] [i_0] [i_0];
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) min((((unsigned int) ((arr_4 [i_2] [i_1]) < (((/* implicit */int) arr_1 [i_0] [i_1]))))), (((/* implicit */unsigned int) arr_2 [i_0]))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (max((((unsigned long long int) arr_3 [i_0] [i_0] [i_3])), (((/* implicit */unsigned long long int) ((short) (_Bool)1)))))));
            var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5609359543309772995ULL)) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) (short)5101))));
            arr_12 [i_0] [i_3] |= ((/* implicit */short) arr_0 [i_0]);
        }
    }
    for (unsigned char i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((arr_15 [i_4]), (arr_15 [i_4 + 2]))))));
        var_18 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_15 [i_4]))))) ? (max((var_0), (((/* implicit */long long int) arr_15 [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_4]))))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)25)), (arr_15 [i_4]))))));
    }
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        var_19 = ((/* implicit */int) arr_14 [i_5]);
        arr_20 [i_5] = arr_13 [i_5] [i_5];
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 23; i_7 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) arr_18 [i_5] [i_6]);
                    arr_26 [i_7] [i_6] [i_7] = ((/* implicit */int) arr_22 [i_7]);
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_30 [i_5] [i_7] [i_5] [i_7 - 1] = max((((/* implicit */int) arr_19 [i_5])), (((((/* implicit */int) min((arr_22 [i_6]), (var_11)))) - (arr_29 [i_5] [i_6] [i_7] [i_7]))));
                        var_21 = arr_19 [i_6];
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_22 = ((/* implicit */int) arr_23 [i_5] [i_5] [i_7]);
                        arr_33 [i_7] [i_6] = ((/* implicit */_Bool) ((int) arr_32 [i_5] [i_7] [i_7] [i_9] [i_6]));
                        arr_34 [i_7] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (min((12837384530399778626ULL), (max((16642998272ULL), (((/* implicit */unsigned long long int) -2096023118)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_7])))));
                        var_23 = ((/* implicit */signed char) var_2);
                    }
                }
            } 
        } 
        arr_35 [i_5] [i_5] = ((/* implicit */signed char) var_2);
        arr_36 [i_5] = ((/* implicit */int) ((max((arr_29 [i_5] [i_5] [i_5] [i_5]), (arr_29 [i_5] [i_5] [i_5] [i_5]))) != (((arr_29 [i_5] [i_5] [i_5] [i_5]) / (arr_29 [i_5] [i_5] [i_5] [i_5])))));
    }
    for (short i_10 = 0; i_10 < 17; i_10 += 2) 
    {
        arr_39 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_10])) ? (max((((((/* implicit */_Bool) arr_7 [i_10] [i_10])) ? (var_3) : (((/* implicit */unsigned long long int) arr_5 [i_10])))), (((/* implicit */unsigned long long int) arr_23 [i_10] [i_10] [i_10])))) : (((/* implicit */unsigned long long int) var_0))));
        arr_40 [i_10] [i_10] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_10)), (((unsigned short) arr_15 [i_10]))));
        var_24 = ((/* implicit */unsigned long long int) arr_37 [i_10] [i_10]);
        var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_10]))) : (((unsigned long long int) var_6))));
    }
}
