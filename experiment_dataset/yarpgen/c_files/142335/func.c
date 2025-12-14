/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142335
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) var_0);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)34541)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)30984)) >> (((((/* implicit */int) (unsigned short)30984)) - (30979)))))) : (min((((/* implicit */unsigned long long int) -1541993725)), (8663984364166751672ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) <= (arr_6 [i_0] [i_1] [i_1])))) : (((/* implicit */int) min((var_8), (((short) 875898367U)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)7253)) >> (((((long long int) 4160489527U)) - (4160489522LL)))));
                            arr_17 [i_0] [i_1] [i_1] [i_2] [i_3] [(short)10] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 14010090604253562666ULL)) || (((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))))))) > ((+(max((9782759709542799944ULL), (8372224ULL))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 21; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
            {
                {
                    arr_25 [(short)21] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_6 + 2] [i_6] [i_6 + 3] [i_6 + 3]))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_23 [i_6] [i_6 - 2] [i_6 + 1] [i_6])) : (((/* implicit */int) (signed char)94)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5] [i_6 - 2])))))));
                    arr_26 [i_5] [i_5] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)95))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1792U))))))))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((-4605354350972927584LL) == (((/* implicit */long long int) ((/* implicit */int) (short)-18995)))))) << (((((unsigned int) (short)6248)) - (6221U)))))) ? (((/* implicit */int) max((((((/* implicit */unsigned long long int) 3419068938U)) <= (18446744073709551615ULL))), (var_5)))) : (((/* implicit */int) arr_24 [i_6] [i_5])))))));
                }
            } 
        } 
        var_17 *= ((/* implicit */unsigned long long int) (short)19818);
        arr_27 [i_5] = ((/* implicit */unsigned int) (signed char)-60);
        arr_28 [i_5] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) + (((((/* implicit */_Bool) max((((/* implicit */short) var_9)), (var_8)))) ? (((var_9) ? (arr_18 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7253))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)4497)) >= (((/* implicit */int) arr_24 [i_5] [i_5]))))))))));
    }
    var_18 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_2)), ((+(var_11))))) << (max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (short)21202)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)57))))))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) 8663984364166751672ULL)) ? (2523049761U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))))));
}
