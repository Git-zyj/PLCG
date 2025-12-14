/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154195
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned short) (+(arr_0 [i_0])));
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (-29) : (((/* implicit */int) (unsigned char)105))));
                    arr_8 [(_Bool)0] [(_Bool)0] [i_2] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) (unsigned char)255)))) == (((/* implicit */int) ((unsigned short) 28))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-41))) : (arr_7 [i_0] [i_0] [i_1] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) arr_3 [i_0]))))) : (arr_4 [i_1 - 3] [i_2])))));
                }
            } 
        } 
        arr_9 [i_0] = ((signed char) min((18446744073709551612ULL), (((/* implicit */unsigned long long int) (short)-5527))));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 12; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) (((+(((((/* implicit */int) (signed char)-35)) - (((/* implicit */int) (short)-7387)))))) | (((((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) (signed char)122)))) | (((((/* implicit */_Bool) -1380157708)) ? (-920175218) : (0)))))));
                    var_14 = ((((/* implicit */_Bool) 1784699322U)) ? (((/* implicit */int) (signed char)-116)) : (((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (unsigned short)65535)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_5] [i_5] [i_0] [i_6] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_5] [i_5])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_6] [i_0] [i_0])) ? (arr_19 [i_6] [i_7]) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_0] [i_5])) < (var_10))))) : (((long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) (~(var_7)))) : (1848096211U))))));
                                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_6] [i_7] [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_7] [i_7] [i_8] [i_0])))))) : ((~(var_0)))));
                                var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 16777152LL)), (16023747442948371103ULL)));
                            }
                        } 
                    } 
                    var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_5] [i_5] [i_6] [i_6])) ? (((int) (unsigned short)65535)) : (((int) ((signed char) var_0)))));
                    arr_29 [i_5] [i_5] = max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))) / (var_0))), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_5] [i_6])));
                    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_5] [i_6])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-24138)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_19 [i_0] [i_5])) : (arr_16 [i_0] [i_5] [i_5] [i_6]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_3 [i_0 - 1])))))));
                }
            } 
        } 
        arr_30 [i_0] = ((/* implicit */_Bool) arr_17 [6]);
    }
    var_19 = ((/* implicit */long long int) var_6);
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (-(18446744073709551615ULL))))));
    var_21 -= ((/* implicit */unsigned short) var_10);
}
