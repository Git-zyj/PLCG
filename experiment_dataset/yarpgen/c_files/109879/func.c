/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109879
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((max((((arr_2 [(short)0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) min((arr_0 [i_0]), (arr_0 [i_0])))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) ? (((((/* implicit */_Bool) 41811432844938046ULL)) ? (((/* implicit */int) var_13)) : (arr_0 [i_0]))) : (min((arr_0 [i_0]), (arr_0 [i_0]))))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (unsigned int i_3 = 4; i_3 < 9; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((4194303ULL) % (((/* implicit */unsigned long long int) 3660187394U))))) ? (((long long int) arr_1 [i_1])) : (((/* implicit */long long int) arr_2 [i_1]))))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_7 [i_2] [i_2] [i_2])))), (((var_6) | (524287)))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) >= (4194308ULL))) ? (((unsigned int) arr_7 [i_3 + 1] [i_2] [i_3 + 1])) : (((/* implicit */unsigned int) max((arr_11 [i_1] [i_2] [i_3 - 1]), (((/* implicit */int) arr_5 [i_2] [7U])))))))));
                    arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(36028797018963967LL)))), (min((18404932640864613570ULL), (((/* implicit */unsigned long long int) (unsigned char)62))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 4194336ULL)) ? (18404932640864613570ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)127))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_3] [i_3 + 1] [9U] [i_1])) : (arr_0 [i_3]))))))) : ((+((+(((/* implicit */int) (_Bool)1))))))));
                    arr_14 [3] [i_2] [i_3 - 3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_11), (((/* implicit */unsigned short) arr_9 [i_3 - 4] [i_3 - 4] [i_3 - 4] [i_3 - 3])))))));
                    arr_15 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) var_12))), (((long long int) arr_8 [i_1] [(unsigned char)6]))))) ? (((/* implicit */long long int) ((((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_3 - 2])) + (25281))) - (21))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3 - 2])))))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (arr_6 [i_1])))));
                }
            } 
        } 
        arr_16 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((long long int) max((4194337ULL), (((/* implicit */unsigned long long int) arr_1 [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1])))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_4 = 3; i_4 < 11; i_4 += 4) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_16))));
                            arr_28 [i_5] = (-(((/* implicit */int) (unsigned char)255)));
                            var_19 ^= ((/* implicit */unsigned int) ((18446744073705357311ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4 - 1])) ? (arr_17 [i_4 - 2]) : (arr_0 [i_4 + 2]))))));
                        }
                    } 
                } 
                arr_29 [i_5] [i_5] = ((/* implicit */unsigned char) (((+(((3435725346925463168LL) - (((/* implicit */long long int) ((/* implicit */int) var_13))))))) >> ((((+(((arr_19 [i_4 - 2] [i_4 - 2]) ? (((/* implicit */int) arr_27 [i_5] [i_5] [i_4 + 2] [i_4 - 2])) : (var_6))))) + (24381)))));
                arr_30 [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_0 [i_5])))))))) == (4294967295U)));
                arr_31 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) arr_18 [i_4 + 2]))))) ? (max((((/* implicit */unsigned long long int) arr_25 [i_4] [i_5] [i_5] [i_5])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (4194325ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51487)))));
                /* LoopNest 3 */
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    for (unsigned char i_9 = 4; i_9 < 10; i_9 += 4) 
                    {
                        for (int i_10 = 1; i_10 < 12; i_10 += 1) 
                        {
                            {
                                arr_40 [i_4] [i_5] [5U] [i_9] [i_9] [(_Bool)1] = ((/* implicit */unsigned char) max(((~((~(arr_23 [i_5] [i_10]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_9])) ? (4294967295U) : (arr_25 [i_4] [i_4] [i_5] [i_9])))))))));
                                arr_41 [(unsigned short)13] [i_5] [i_8] [i_9] [i_5] = ((/* implicit */_Bool) (unsigned char)32);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
