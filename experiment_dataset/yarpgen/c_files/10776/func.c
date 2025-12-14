/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10776
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
    var_17 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-42))));
    var_18 = ((/* implicit */signed char) ((unsigned long long int) var_1));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)41)), (arr_1 [i_0 + 3]))))));
        var_20 = (-(((((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [24ULL]))))))));
        var_21 = min((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))));
        arr_2 [i_0] [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_0 [i_0 + 1])))) < (((((/* implicit */_Bool) arr_0 [(signed char)12])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) == (arr_4 [i_1 + 2]))))) : (((unsigned long long int) arr_3 [i_1]))))) ? (arr_1 [12ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 3]))))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)34)) << (((((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) var_3)), (arr_4 [i_1 + 2]))))) + (102)))));
        arr_5 [i_1 - 1] [i_1 + 3] = ((/* implicit */signed char) ((((((/* implicit */int) var_3)) | (((/* implicit */int) var_5)))) != (((/* implicit */int) max((var_1), (arr_0 [i_1 - 1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_3] = ((/* implicit */signed char) ((unsigned long long int) (((~(arr_9 [i_3]))) << (((((((/* implicit */_Bool) arr_4 [4ULL])) ? (arr_1 [(signed char)6]) : (var_16))) - (11521032381573516258ULL))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) min((9789264483984698049ULL), (((/* implicit */unsigned long long int) (signed char)-1))))) ? (((unsigned long long int) arr_9 [i_1 - 1])) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_1]))))) & (((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46)))))))))));
                                arr_17 [i_1] [i_1] [i_1] [(signed char)10] |= (~(arr_4 [i_1 + 2]));
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_2] [i_3] [i_3 + 1] = (signed char)-9;
                }
            } 
        } 
    }
    for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 3) 
    {
        arr_22 [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_6 + 1] [4ULL]))));
        arr_23 [i_6] = (-(max((arr_7 [i_6 + 1]), (((/* implicit */unsigned long long int) (signed char)116)))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) max((arr_8 [6ULL] [i_6 + 1] [i_6]), (arr_8 [i_6] [i_6 - 1] [i_6 - 1])))) ? (max((arr_12 [i_6] [(signed char)10]), (5631879412192753048ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_6] [i_6 - 3] [i_6])) < (((/* implicit */int) arr_8 [i_6 - 2] [i_6 - 2] [14ULL]))))))))));
    }
}
