/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138888
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                var_18 += ((_Bool) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (signed char)-91))));
                                var_19 ^= ((/* implicit */unsigned int) (signed char)102);
                                var_20 ^= ((/* implicit */_Bool) ((int) (signed char)-99));
                            }
                            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_13 [i_0]);
                                arr_18 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2897916579U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) % (min((var_5), (((/* implicit */unsigned long long int) var_15))))));
                                arr_19 [i_0] [15U] [15U] [15U] [i_3 - 2] [i_0] [i_5] = ((/* implicit */short) 2897916594U);
                            }
                            var_21 += ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) (~(2858748198U)))) : ((-(6359318923149476143ULL))))));
                            var_22 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [2ULL]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13596))) / ((-(11197743331027240755ULL)))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (unsigned short i_7 = 2; i_7 < 16; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */int) max((((((/* implicit */_Bool) (short)13577)) ? (((/* implicit */unsigned long long int) ((2262157216U) >> (((8216780468554105996ULL) - (8216780468554105986ULL)))))) : (((((/* implicit */_Bool) (signed char)-99)) ? (arr_15 [i_0] [i_0] [i_6] [i_6]) : (((/* implicit */unsigned long long int) 6917529027641081856LL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17)))))));
                            arr_24 [i_0] [i_1 - 2] [i_1 - 1] [i_1 - 2] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned short) 4294967295U))), ((-(((/* implicit */int) ((unsigned char) (signed char)90)))))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(4294967295U))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = var_12;
    /* LoopSeq 2 */
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        arr_29 [i_8] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) var_2)) & (arr_20 [i_8] [i_8]))), (((/* implicit */unsigned long long int) min(((short)28128), ((short)13577))))));
        arr_30 [i_8] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_14)), (2498393855599918791ULL)));
        arr_31 [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)-13578)))) || (((((/* implicit */_Bool) (short)-23514)) || (((/* implicit */_Bool) (signed char)121))))));
    }
    for (unsigned long long int i_9 = 1; i_9 < 10; i_9 += 3) 
    {
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(((arr_4 [0LL] [i_9]) || (((/* implicit */_Bool) var_14)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            arr_39 [i_9] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)23514))) / (((long long int) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) var_8)))))));
            var_28 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_9 + 2] [i_9] [i_9] [i_9] [i_10] [i_10])) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_12)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3111791444U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65511))))))))));
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 14U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_9 + 2] [i_9 + 2]))) : (var_12))) > ((~(-7342349200044917117LL))))) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_10 [i_9] [i_9 + 1] [i_10] [i_9 + 1])))))));
        }
    }
    var_30 ^= ((/* implicit */unsigned char) var_4);
    var_31 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((5389143415546714318LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))), (var_2)));
}
