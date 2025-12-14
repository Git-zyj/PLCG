/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134742
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) -900392053)) : (arr_0 [i_1 - 2])));
            arr_6 [i_1] [i_1] [i_0] = ((long long int) (-(900392050)));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            for (int i_3 = 3; i_3 < 12; i_3 += 3) 
            {
                {
                    arr_12 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((2188811372278617434LL) + (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [(signed char)11] [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_2] [i_2] [i_2 + 1])) : (arr_3 [i_2 - 1] [i_2] [i_2 + 1])));
                    arr_14 [i_0] [i_0] [i_3] = ((/* implicit */long long int) (~(arr_0 [i_2 - 1])));
                    arr_15 [i_0] [i_2 - 1] [i_2 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_2 - 1] [i_2] [i_3 + 1])) + ((-(((/* implicit */int) var_14))))));
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((var_11) >> (((var_7) + (212100139))))));
    }
    for (short i_4 = 1; i_4 < 19; i_4 += 3) 
    {
        arr_21 [11] = ((/* implicit */signed char) var_2);
        arr_22 [i_4 - 1] [(unsigned short)13] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4 - 1])))))));
        arr_23 [i_4 - 1] = ((/* implicit */unsigned int) (-(((int) 2135308437U))));
        arr_24 [i_4] [i_4 + 1] = ((/* implicit */int) -2188811372278617435LL);
        arr_25 [i_4] = ((/* implicit */unsigned long long int) min((min((arr_18 [i_4] [i_4 + 1]), (arr_18 [i_4] [i_4 - 1]))), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_20 [i_4]))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_28 [i_5] [i_5] = ((/* implicit */signed char) max(((+(((((/* implicit */unsigned long long int) var_6)) & (var_2))))), (((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) var_5))))));
        arr_29 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_26 [i_5] [i_5])))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5]))) : (arr_17 [i_5]))))));
        arr_30 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            for (int i_7 = 3; i_7 < 15; i_7 += 1) 
            {
                {
                    arr_36 [i_7] [i_6] [i_7] [i_5] = ((/* implicit */_Bool) 2159658858U);
                    arr_37 [i_5] [i_6] [i_6] [i_5] = ((/* implicit */signed char) ((unsigned long long int) var_2));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        arr_42 [i_8] = ((/* implicit */signed char) var_12);
        arr_43 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_3))));
        arr_44 [i_8] [17U] = ((/* implicit */unsigned long long int) var_11);
        arr_45 [i_8] [i_8] = ((/* implicit */signed char) ((arr_18 [i_8] [i_8]) & (arr_18 [i_8] [(signed char)18])));
    }
    var_16 = ((/* implicit */unsigned long long int) var_11);
}
