/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142054
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) (+(0LL)));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (int i_3 = 1; i_3 < 22; i_3 += 2) 
                {
                    for (int i_4 = 3; i_4 < 21; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) - (((/* implicit */int) (unsigned short)40282))));
                            var_15 |= arr_8 [i_1] [i_2];
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */int) arr_2 [i_0 + 1]);
            arr_15 [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
            var_17 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) | (var_4)))) : (arr_12 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])));
        }
        arr_16 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) -1976025643)) % (((((/* implicit */_Bool) var_11)) ? (arr_12 [i_0] [(signed char)7] [i_0 + 1] [5] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40282)))))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                {
                    arr_22 [i_6] [i_5] [i_6] |= ((/* implicit */_Bool) arr_4 [i_0] [i_6] [i_6]);
                    var_18 = ((/* implicit */long long int) (-(((arr_3 [i_0 + 1] [i_5] [i_0]) >> (((/* implicit */int) (unsigned short)0))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) (signed char)24);
                                var_20 = ((/* implicit */unsigned char) (+(var_6)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) ((-1976025628) | (((/* implicit */int) var_9))))) : (max((((/* implicit */unsigned long long int) 0LL)), (12177662201184105321ULL))))) + (((arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    arr_29 [i_0 + 1] [i_5] [i_6] [i_0] = ((/* implicit */long long int) var_8);
                }
            } 
        } 
    }
    var_22 ^= ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_9 = 1; i_9 < 13; i_9 += 1) 
    {
        var_23 |= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-6)) + (arr_27 [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 2])));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_9] [i_9 + 1] [i_9] [i_9] [i_9 + 2] [7U])) ? (arr_11 [i_9] [i_9 + 2] [i_9] [i_9] [i_9] [i_9]) : (arr_11 [i_9] [i_9 + 1] [i_9] [i_9] [i_9 + 2] [19LL])));
        arr_32 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) -726002153)) || (((0LL) >= (((/* implicit */long long int) var_1))))));
        var_25 *= ((/* implicit */signed char) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) arr_20 [i_9] [i_9 + 2] [i_9])) != (((/* implicit */int) var_0)))))));
        /* LoopNest 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (unsigned int i_11 = 1; i_11 < 14; i_11 += 1) 
            {
                {
                    arr_37 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_9 - 1])) % (2147483647)));
                    arr_38 [i_10] = ((/* implicit */signed char) (+(0)));
                    var_26 ^= ((/* implicit */long long int) 0ULL);
                }
            } 
        } 
    }
    for (unsigned char i_12 = 3; i_12 < 13; i_12 += 3) 
    {
        arr_41 [i_12] = ((/* implicit */long long int) ((11) << (((((/* implicit */int) var_7)) - (21729)))));
        arr_42 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_24 [i_12] [i_12] [i_12 + 3] [i_12])) : (((/* implicit */int) var_14)))) - (((/* implicit */int) ((short) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    }
}
