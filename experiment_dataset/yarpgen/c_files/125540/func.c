/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125540
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */short) 22ULL);
                    arr_6 [i_0] [i_1] = ((/* implicit */int) var_0);
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned long long int) var_6);
        var_11 = ((/* implicit */unsigned short) var_6);
        var_12 = ((/* implicit */unsigned char) (-(((((arr_8 [i_3]) >> (((var_7) + (274830454))))) - (((/* implicit */int) ((arr_8 [i_3]) > (((/* implicit */int) var_6)))))))));
    }
    for (unsigned char i_4 = 3; i_4 < 9; i_4 += 2) 
    {
        arr_15 [i_4 + 1] = ((/* implicit */unsigned short) -8556186350598083525LL);
        arr_16 [i_4] [i_4] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_11 [i_4 - 3] [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2)))) ? (-7081992478183726025LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (arr_1 [i_4 - 3] [i_4 - 3])));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 4) /* same iter space */
        {
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (unsigned short)48043))));
            arr_20 [i_5] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_4)) < (var_7))));
            arr_21 [i_4 + 2] [i_5] = ((/* implicit */unsigned char) (+(-8556186350598083506LL)));
            /* LoopNest 2 */
            for (unsigned char i_6 = 2; i_6 < 9; i_6 += 2) 
            {
                for (unsigned char i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_25 [i_5] [i_6 + 3] [i_5] [i_5] [i_5])))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((((/* implicit */_Bool) ((int) var_2))) ? (((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_19 [i_5] [i_5] [i_4 - 2]))))));
                        arr_28 [i_4] [i_4] [i_4] [i_7] [i_4] [i_4] |= ((((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) var_6)) - (6))))) != (((/* implicit */int) (unsigned short)10)));
                        arr_29 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) ((unsigned char) var_4))) ? (-22LL) : (((/* implicit */long long int) (~(((/* implicit */int) var_8))))))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) (short)3075)))) : (((/* implicit */int) var_3)))) + (3110))) - (34)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            arr_39 [i_5] [i_5] [i_5] [i_9] [i_9] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -5352980986892289412LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)70))))) == ((+(6LL)))))) : (arr_30 [i_5] [i_5] [i_5])));
                            var_16 ^= ((/* implicit */_Bool) var_5);
                            var_17 = ((((/* implicit */int) ((unsigned short) var_1))) >> (((((long long int) (-9223372036854775807LL - 1LL))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_11 = 1; i_11 < 11; i_11 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_3))));
            arr_44 [i_11] [i_11] = ((/* implicit */int) (-(5352980986892289411LL)));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 12; i_12 += 2) 
            {
                for (int i_13 = 2; i_13 < 9; i_13 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 3; i_14 < 11; i_14 += 1) 
                        {
                            arr_57 [i_4 + 3] [i_11] [i_12] [i_4 + 3] = ((/* implicit */unsigned char) var_4);
                            arr_58 [i_4] [i_11 - 1] [i_11 - 1] [i_12] [i_11] [i_11 - 1] = var_7;
                            var_19 ^= ((/* implicit */_Bool) (unsigned char)248);
                        }
                        arr_59 [i_4] [i_11] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) 3591620881U);
                    }
                } 
            } 
            arr_60 [(signed char)0] |= (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((764090458059311884LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47261))))))));
            arr_61 [i_11] = ((/* implicit */unsigned short) ((((var_3) ? (((/* implicit */unsigned int) -2057652921)) : (3591620881U))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_4] [9LL] [i_4] [i_4] [9LL]))))))))))));
        }
        /* LoopNest 3 */
        for (long long int i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            for (short i_16 = 2; i_16 < 11; i_16 += 2) 
            {
                for (unsigned int i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) ? (var_9) : ((+(((/* implicit */int) (_Bool)1)))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            var_21 |= ((((/* implicit */int) (_Bool)1)) << ((((~(((/* implicit */int) (signed char)-113)))) & (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) var_4)))))));
                            var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) arr_67 [i_4 + 3])) ? (((/* implicit */int) (unsigned char)8)) : (-134217728)))));
                            var_23 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_16] [i_16 + 1] [i_4 + 3] [i_4 + 3])) + (-134217728)))) || (((/* implicit */_Bool) var_5))));
                        }
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_9))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_19 = 0; i_19 < 12; i_19 += 4) 
        {
            var_25 = ((/* implicit */int) var_2);
            arr_74 [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_8))));
        }
    }
    for (int i_20 = 0; i_20 < 25; i_20 += 3) 
    {
        arr_78 [i_20] = ((/* implicit */unsigned long long int) var_5);
        var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (var_7) : (arr_77 [i_20] [i_20])))));
        var_27 -= ((/* implicit */long long int) -594006061);
    }
    for (unsigned int i_21 = 3; i_21 < 8; i_21 += 4) 
    {
        arr_81 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_8))));
        var_28 = ((/* implicit */long long int) 1211525713);
    }
    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) var_7))));
    var_30 = ((/* implicit */_Bool) -3318766525260828667LL);
}
