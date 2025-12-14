/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170815
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1] [i_1 + 1]))))) : (((((((/* implicit */int) arr_3 [i_0])) <= (2147483639))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (var_9))))) : (18446744073709551615ULL)))));
                arr_8 [i_0] = ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)123)) / (((/* implicit */int) var_8))))), (min((((/* implicit */unsigned long long int) var_2)), (18446744073709551615ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_1 [i_1]) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))))));
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2]))))) <= (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))))))));
                arr_9 [i_0] = var_0;
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min(((signed char)127), (var_3)));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_2)))), (var_6)))) ? (var_10) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_11))))) : (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 2) 
            {
                {
                    arr_20 [i_3] [(unsigned short)2] = ((/* implicit */int) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)65529)) : (2147483647))))));
                    arr_21 [i_2] [i_3 + 1] [i_2] = ((/* implicit */_Bool) max((((((((/* implicit */int) (signed char)127)) != (((/* implicit */int) (unsigned short)65535)))) ? (max((((/* implicit */unsigned long long int) var_4)), (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_2])) - (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) arr_13 [i_4 - 2] [i_4 + 3]))));
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) ((((((/* implicit */int) arr_13 [i_2] [i_2])) << (((((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2])) - (54609))))) & (((/* implicit */int) var_0))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) ((arr_23 [i_5]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        var_16 = ((/* implicit */_Bool) (~(((arr_22 [i_5]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 24; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_32 [i_5] = ((/* implicit */unsigned int) arr_29 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_6]);
                        arr_33 [i_8] = ((/* implicit */_Bool) (signed char)-1);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))) ^ (((/* implicit */int) var_8))));
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-115))));
        arr_36 [i_9] [i_9] = ((((/* implicit */_Bool) arr_35 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9]))) : (var_4));
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (18446744073709551615ULL)));
    }
}
