/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158568
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
    var_15 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_5)) : (var_8))), (((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_13))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_16 = ((long long int) (((!(((/* implicit */_Bool) (unsigned short)65535)))) ? (((/* implicit */int) arr_1 [i_0])) : (min((var_5), (((/* implicit */int) arr_1 [i_0 + 3]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] = ((/* implicit */signed char) var_7);
                    var_17 = ((/* implicit */long long int) var_6);
                    arr_9 [i_2] [i_1] = ((/* implicit */int) arr_3 [i_1 + 2] [i_1] [i_0 - 1]);
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned char) var_2);
    }
    for (long long int i_3 = 3; i_3 < 17; i_3 += 4) 
    {
        var_19 |= ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) 1343462136U)))) && (((/* implicit */_Bool) min((2490920269U), (1343462136U)))))) ? (((arr_10 [i_3 + 1]) - (((/* implicit */long long int) arr_11 [17ULL])))) : (arr_10 [i_3])));
        var_20 ^= ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * ((+(arr_11 [i_3]))))), (((((arr_11 [i_3]) + (arr_12 [i_3]))) / (((((/* implicit */_Bool) arr_10 [i_3])) ? (1804047027U) : (arr_11 [i_3 - 1])))))));
    }
    for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_7))) || (((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) arr_11 [17ULL]))))))), (((unsigned char) arr_13 [i_4 - 1]))));
        /* LoopNest 3 */
        for (short i_5 = 2; i_5 < 10; i_5 += 3) 
        {
            for (long long int i_6 = 3; i_6 < 13; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_17 [i_5] [i_7])), (arr_20 [2ULL] [2ULL] [i_6 + 1] [i_7])))) ? (((unsigned int) (~(var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_4] [i_6 - 3] [i_7]))))))));
                        arr_24 [i_4] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) ((max((arr_13 [i_4 + 1]), (arr_13 [i_4 + 2]))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4 - 1]))))))));
                        var_22 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) && (((((/* implicit */int) arr_14 [i_7])) != (((/* implicit */int) (unsigned short)11)))))) && (((/* implicit */_Bool) arr_23 [i_5 + 2] [i_5] [i_5] [i_7]))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max(((unsigned char)0), (((/* implicit */unsigned char) (signed char)92))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_7) : (var_14)))) : (max((var_0), (((/* implicit */unsigned long long int) 983040)))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12)))) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_0)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_8 = 2; i_8 < 16; i_8 += 2) 
    {
        arr_29 [i_8 + 1] = ((/* implicit */int) (((!(((((/* implicit */_Bool) arr_26 [(short)1])) && (((/* implicit */_Bool) var_7)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_27 [i_8 + 1] [i_8])) : (((/* implicit */int) (signed char)6))))) : (7438537083685678757LL))))));
        arr_30 [i_8 + 3] = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) ((var_14) != (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8] [i_8])))))))));
        var_24 = ((/* implicit */long long int) arr_27 [i_8] [i_8 - 1]);
        var_25 -= ((/* implicit */long long int) ((unsigned int) ((4294967292U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))))));
        var_26 |= ((/* implicit */short) ((int) var_4));
    }
    /* LoopNest 2 */
    for (long long int i_9 = 1; i_9 < 10; i_9 += 4) 
    {
        for (signed char i_10 = 3; i_10 < 9; i_10 += 3) 
        {
            {
                var_27 = ((/* implicit */int) -4464986375597423463LL);
                /* LoopSeq 1 */
                for (long long int i_11 = 1; i_11 < 10; i_11 += 3) 
                {
                    arr_40 [i_11] = ((/* implicit */int) max((((((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_9 + 2])) % (var_1)))) - (2490920276U))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_32 [i_10 + 3])) ^ (((/* implicit */int) var_9)))) << (((((/* implicit */int) (unsigned char)124)) - (109))))))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_13 [i_10]), (((/* implicit */long long int) ((unsigned int) var_0)))))) ? (((arr_11 [i_9 + 2]) % (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_9]))))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_9] [12ULL])))));
                }
            }
        } 
    } 
}
