/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160799
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 2369116358U)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) : (-280455336)))));
                var_14 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) || (((/* implicit */_Bool) arr_1 [i_1 - 1]))))), (1236400617U)));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] [19LL] [i_2] [19LL] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((var_6) + (((/* implicit */long long int) ((/* implicit */int) (signed char)6))))) <= (((/* implicit */long long int) max((((/* implicit */int) var_0)), (arr_1 [i_4]))))))), ((-(((/* implicit */int) (short)-11897))))));
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                                arr_14 [(_Bool)1] [(_Bool)1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) min(((~(-132976214400183345LL))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) var_0)))), (((/* implicit */int) (signed char)63)))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((~(arr_8 [i_1] [i_1] [i_1 - 1] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_7 + 1] [i_7 - 4] [i_7 - 1])) ? ((+(arr_6 [i_5] [i_5] [i_5]))) : (arr_22 [i_5])))) ? (((((/* implicit */int) ((unsigned char) var_4))) << ((((-(var_6))) - (430575121498256671LL))))) : (((((((((/* implicit */_Bool) var_3)) ? (-280455321) : (((/* implicit */int) arr_20 [i_6] [i_6])))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_17 [i_7 + 1])) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (signed char)-16)))) + (33))) - (17)))))));
                    arr_23 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7 - 4])) ? (arr_3 [i_7 - 4]) : (arr_3 [i_7 - 1])))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [i_5])) ? (146191352U) : (arr_18 [i_5]))) - (((/* implicit */unsigned int) -997992575))))) : (((((/* implicit */long long int) -424369333)) + ((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) arr_1 [i_7]))))))));
                    var_17 ^= ((/* implicit */unsigned int) arr_17 [i_5]);
                    arr_24 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */int) (+(((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_2))) ? (6910630007761455950ULL) : (((/* implicit */unsigned long long int) arr_3 [i_5]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (short i_9 = 3; i_9 < 9; i_9 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (unsigned char)194)) * (((/* implicit */int) ((unsigned char) (_Bool)0))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 11618278615347943247ULL)) ? (10338747525534050295ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43585)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        arr_34 [2U] &= ((/* implicit */long long int) ((arr_6 [i_10] [i_10] [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        arr_35 [(short)22] [(short)22] &= ((/* implicit */unsigned int) (!(arr_31 [i_10] [i_10])));
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_20 *= ((/* implicit */short) ((-175408064) & (((/* implicit */int) arr_36 [i_11] [i_11]))));
        /* LoopSeq 3 */
        for (unsigned short i_12 = 1; i_12 < 20; i_12 += 3) 
        {
            arr_41 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_11] [i_11] [i_11]))))) ? (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) -997992593))));
            var_21 = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_1))))));
        }
        for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            arr_44 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_9);
            arr_45 [18ULL] [i_11] = ((/* implicit */int) 823135439U);
            var_22 = ((/* implicit */short) ((arr_0 [i_11] [i_11]) + (((/* implicit */long long int) (-(arr_33 [i_13]))))));
        }
        for (unsigned short i_14 = 2; i_14 < 21; i_14 += 2) 
        {
            arr_48 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_14 + 1] [i_14 + 1] [i_14 + 2])) ? (arr_10 [i_11] [i_11] [i_11] [i_14] [i_14] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_11])) || (((/* implicit */_Bool) 6828465458361608364ULL))))))));
            arr_49 [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_31 [i_14] [i_14 + 2]))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (10338747525534050287ULL) : (((/* implicit */unsigned long long int) (-(4074121800U)))))))));
            var_24 += ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_11] [i_14 + 2] [i_14 - 1])) || (((/* implicit */_Bool) arr_7 [i_11] [i_11] [i_14 + 1]))));
        }
        arr_50 [i_11] [i_11] = ((arr_9 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) & (arr_9 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]));
        arr_51 [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_11]))))) - (8762432889952219315LL)))));
        arr_52 [i_11] [i_11] = (((_Bool)1) ? (((/* implicit */int) (unsigned short)31314)) : (((/* implicit */int) arr_47 [i_11])));
    }
    var_25 -= ((/* implicit */long long int) var_10);
    var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)44122)))))))) >= (var_2)));
}
