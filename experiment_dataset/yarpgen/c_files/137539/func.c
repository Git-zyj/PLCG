/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137539
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
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) 18446744073709551609ULL));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((arr_0 [2ULL] [i_0]) | (arr_1 [i_0]))) == (((/* implicit */long long int) var_17))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        arr_5 [i_0 + 1] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        arr_6 [i_0] = (+(arr_0 [i_0] [i_0]));
    }
    for (long long int i_1 = 4; i_1 < 21; i_1 += 3) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1 - 2])) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) min((arr_9 [i_1 + 1]), (arr_9 [i_1 - 4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 3558676123U)))))));
        arr_11 [i_1 - 2] [i_1] |= ((/* implicit */unsigned short) 3828148462U);
        arr_12 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_7 [i_1 - 4]) : (arr_7 [i_1 + 1])))));
    }
    for (long long int i_2 = 2; i_2 < 9; i_2 += 3) /* same iter space */
    {
        arr_17 [i_2] = ((/* implicit */int) ((long long int) ((unsigned short) (!(((/* implicit */_Bool) 2434860797004005332LL))))));
        arr_18 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) > (506265382U)));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            arr_22 [i_2] = ((/* implicit */long long int) var_6);
            arr_23 [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_1 [i_2]) / (7036281392915223574LL))), (arr_0 [i_2 - 1] [i_2 + 1])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (var_4)));
        }
        arr_24 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (arr_1 [i_2])))) ? (2434860797004005332LL) : (2434860797004005332LL)))) ? (var_13) : (((/* implicit */long long int) (~(-1594265773))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    arr_29 [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) arr_21 [i_2 + 1] [i_2])) - (arr_14 [i_2]))), (max((arr_20 [i_2]), (((/* implicit */long long int) arr_19 [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 7; i_6 += 2) 
                    {
                        for (int i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            {
                                arr_37 [i_2 + 1] [i_4] [i_5] [6U] [i_5] = ((/* implicit */int) ((min((0LL), (((/* implicit */long long int) arr_8 [i_2 + 1])))) <= (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) 466818834U)) ? (((/* implicit */long long int) 3570637391U)) : (var_4))) : (((/* implicit */long long int) 16777152U))))));
                                arr_38 [i_2] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */int) var_7);
                                arr_39 [i_2] [i_2] [i_2] [i_6] [i_7] [i_2] = ((/* implicit */unsigned short) (!(((min((arr_32 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_35 [0LL] [i_4] [i_5] [i_4] [i_7])))) >= (10451127386293156478ULL)))));
                                arr_40 [6LL] [6LL] [i_5] [(unsigned short)8] [6LL] [i_2] = ((/* implicit */unsigned long long int) arr_26 [i_2] [i_4] [2LL]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_8 = 2; i_8 < 9; i_8 += 3) /* same iter space */
    {
        arr_45 [i_8] = var_1;
        arr_46 [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1184908940)) ? ((~(arr_34 [i_8] [i_8]))) : (((/* implicit */long long int) ((unsigned int) 18U)))))) >= (min((((((/* implicit */_Bool) var_17)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64512))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_8] [i_8] [9LL] [i_8] [i_8])) ? (arr_41 [i_8] [i_8]) : (1182282007620678140LL))))))));
    }
}
