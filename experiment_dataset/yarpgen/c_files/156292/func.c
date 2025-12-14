/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156292
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
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_10 = ((/* implicit */signed char) (+((+(((1123530543) - (((/* implicit */int) var_4))))))));
                            arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [13LL] [i_2] [i_3])) & (arr_2 [i_0 + 2])))) ? ((~(arr_1 [i_0 - 2]))) : (((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_2 + 1] [i_3 - 2]))));
                            var_11 = ((/* implicit */_Bool) arr_5 [i_1 + 1] [i_0] [i_0 + 2] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) var_2);
                                arr_16 [i_0 + 1] [i_4] [i_6] = ((/* implicit */int) max((max((arr_2 [i_0 + 1]), (((/* implicit */long long int) ((_Bool) var_0))))), (((/* implicit */long long int) arr_1 [i_5]))));
                                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0 + 2] [i_1 + 1]), (arr_0 [i_0 - 2] [i_1 + 1])))) ? (arr_3 [i_1] [i_1]) : (var_0)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            for (unsigned short i_9 = 1; i_9 < 21; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 19; i_10 += 2) 
                    {
                        for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (~((+(-481241372212975045LL)))));
                                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_17 [i_9 - 1])) ? (var_9) : (((/* implicit */int) arr_17 [i_9 + 2])))), (((/* implicit */int) min((arr_17 [i_9 + 2]), (arr_17 [i_9 + 1])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 2; i_13 < 21; i_13 += 2) 
                        {
                            {
                                arr_38 [i_9] = ((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (var_7)))) % (((12103776154685432499ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) ^ (((/* implicit */unsigned long long int) max((((long long int) arr_27 [i_9] [i_9] [i_9])), (((/* implicit */long long int) arr_21 [i_7]))))));
                                arr_39 [i_7] [i_7] [i_7] [i_9] [i_7] [i_9] [i_8] = (-((((+(0LL))) / (((/* implicit */long long int) ((((/* implicit */int) (short)8160)) * (((/* implicit */int) (unsigned char)60))))))));
                                var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((int) (unsigned short)28863))) * (min((2688851858U), (((/* implicit */unsigned int) arr_18 [i_8]))))))));
                                arr_40 [i_7] [i_9] [i_7] [i_7] [i_7] = (+((+(((((/* implicit */_Bool) arr_25 [i_13] [i_7] [i_7])) ? (((/* implicit */int) arr_22 [i_8] [i_12])) : (var_9))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 3; i_14 < 19; i_14 += 4) 
                    {
                        for (int i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            {
                                arr_47 [i_15] [i_9] [i_9] [i_9] [i_7] = ((/* implicit */_Bool) arr_18 [i_7]);
                                arr_48 [i_7] [i_9] = ((/* implicit */unsigned char) (+(1756243828)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
                        {
                            {
                                arr_54 [i_9] [i_8] [i_9] [i_16] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((var_1), (-1124992240)))) ? ((+(arr_32 [i_9] [i_8] [i_9] [i_8] [(unsigned char)11] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_42 [i_7] [i_7] [i_7] [i_9] [i_7] [i_7])), (var_6))))))) >> (((((((/* implicit */_Bool) arr_30 [i_7] [i_8] [i_9] [i_16] [i_7])) ? (var_3) : (((((/* implicit */int) var_6)) / (arr_34 [(short)4] [i_16] [i_9] [i_9] [i_8] [i_7]))))) + (443849546)))));
                                var_16 = (i_9 % 2 == 0) ? (min((max((((/* implicit */int) ((arr_29 [i_7] [1] [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(_Bool)1] [i_8])))))), (var_1))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_7] [i_8]))))) ? (((((/* implicit */int) arr_42 [i_7] [i_7] [i_7] [i_9] [4] [i_7])) >> (((arr_53 [i_17] [i_9] [i_8] [i_8] [i_17]) - (9567260199776409291ULL))))) : ((-(((/* implicit */int) var_2)))))))) : (min((max((((/* implicit */int) ((arr_29 [i_7] [1] [i_9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(_Bool)1] [i_8])))))), (var_1))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [i_7] [i_8]))))) ? (((((/* implicit */int) arr_42 [i_7] [i_7] [i_7] [i_9] [4] [i_7])) >> (((((arr_53 [i_17] [i_9] [i_8] [i_8] [i_17]) - (9567260199776409291ULL))) - (15811113740073404068ULL))))) : ((-(((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
