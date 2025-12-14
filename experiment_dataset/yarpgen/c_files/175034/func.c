/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175034
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (signed char)(-127 - 1))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_11))));
        var_15 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), ((-(var_8)))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 |= ((/* implicit */signed char) min(((~(((/* implicit */int) var_5)))), ((~(((/* implicit */int) arr_5 [i_1] [i_1 - 2]))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8323072LL)) ? ((((_Bool)1) ? (12ULL) : (((/* implicit */unsigned long long int) 4U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2])) ? (((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1] [i_1 - 1])) : (((/* implicit */int) var_2)))))));
                    var_18 = ((/* implicit */signed char) 0U);
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(11445233024848193994ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_3]))) : (11445233024848193994ULL)));
        arr_9 [i_3] [(short)16] &= ((/* implicit */short) (((-((-(0ULL))))) | (((/* implicit */unsigned long long int) var_7))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((7001511048861357611ULL), (((/* implicit */unsigned long long int) -1093633115)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 = ((/* implicit */short) (-(-936796652032375991LL)));
        var_22 = ((/* implicit */unsigned char) 1002830582U);
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (int i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    {
                        var_23 = ((/* implicit */_Bool) (((-((~(((/* implicit */int) (signed char)(-127 - 1))))))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) (short)-26499)), ((unsigned short)16416))))));
                        var_24 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (+(-1274447425)))), ((+(4208211284916587612LL))))) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [(short)12] [i_4])))));
                        arr_18 [i_4] [(signed char)14] [(unsigned char)13] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))) : (min((((/* implicit */long long int) var_1)), (max((((/* implicit */long long int) arr_14 [i_4] [i_5] [(signed char)16] [(_Bool)1])), (var_9)))))));
                        arr_19 [i_5] [i_5] [i_5] [i_5] [i_4] = ((/* implicit */long long int) arr_14 [i_4] [i_5] [i_6] [(unsigned short)7]);
                        arr_20 [i_4] [i_5] [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_3))))) / ((+((-9223372036854775807LL - 1LL))))));
                    }
                } 
            } 
        } 
    }
    var_25 = ((/* implicit */signed char) max((var_25), (var_2)));
    /* LoopSeq 2 */
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        var_26 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16416)) ? (var_9) : (((/* implicit */long long int) 134184960))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8] [i_8]))) ^ (var_0))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) (unsigned short)16408)) : (((/* implicit */int) arr_8 [i_8])))))));
        var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)65520)), (var_11)));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [(_Bool)1] [i_8] [i_8] [18U]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8])))))));
        var_29 = ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (min((((/* implicit */unsigned int) (unsigned char)189)), (arr_14 [i_8] [i_8] [i_8] [i_8]))));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 4; i_9 < 11; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                {
                    var_30 *= ((/* implicit */int) ((((/* implicit */_Bool) 469762048U)) && (((/* implicit */_Bool) (short)26499))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                                arr_32 [10ULL] [i_11] [i_9] = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_17 [i_11] [i_9 + 1] [i_9] [i_9] [i_11])))), (arr_30 [7] [i_9])));
                                arr_33 [i_10] [i_11] = ((/* implicit */long long int) (short)256);
                                var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)8545), (((/* implicit */unsigned short) (signed char)-127)))))) / (var_11)))) ? ((+(((/* implicit */int) arr_7 [i_9 + 2] [i_9])))) : (((/* implicit */int) var_10))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
    {
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) var_1))));
        var_34 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_35 [i_13]))))))));
        var_35 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_34 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (var_0))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16414)) && (((/* implicit */_Bool) (unsigned short)65520))))))))));
    }
    var_36 &= ((/* implicit */unsigned int) var_4);
}
