/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122128
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_12 |= ((signed char) (-(((/* implicit */int) arr_0 [i_0]))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (7962460066473257174LL)))) + ((-(var_8)))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)116)))))) : (min((var_8), (((/* implicit */unsigned long long int) var_0)))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_11)))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) (+(var_10)));
                        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 3) 
                        {
                            arr_18 [i_1] [i_1] [i_1] = ((long long int) ((((/* implicit */int) var_5)) == (((/* implicit */int) (short)-21978))));
                            arr_19 [i_5] [i_3] [i_4] [i_3] [i_2] [i_3] [i_1] &= 8581976978715163739ULL;
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) var_0))))))));
                            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)0))));
                            var_19 += var_9;
                        }
                    }
                } 
            } 
            var_20 = ((/* implicit */long long int) (short)-21978);
            var_21 *= ((/* implicit */short) (!(((_Bool) 2296835809958952960LL))));
        }
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 4; i_7 < 11; i_7 += 1) 
            {
                for (long long int i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    {
                        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2296835809958952960LL)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) var_2))));
                        var_23 = ((/* implicit */unsigned short) -6386404577453106384LL);
                        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_2)))))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2296835809958952961LL)) ? (((/* implicit */int) (unsigned short)65535)) : (-2046956467)))) ? (-1568722564) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) min((var_2), (var_2)))) : (((/* implicit */int) ((unsigned short) (signed char)-19))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (2296835809958952976LL)))))));
        /* LoopSeq 3 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_11 = 3; i_11 < 9; i_11 += 3) 
            {
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_10] [i_10] [(signed char)1] [i_9]))) % (((((/* implicit */_Bool) -2296835809958952991LL)) ? (min((1761364721141246546LL), (((/* implicit */long long int) (unsigned short)65535)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (_Bool)0)))), (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)112)))), (((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))))));
                            arr_40 [i_13] [i_11] [i_12] [i_11] [i_11] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(1581896137U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-2296835809958952961LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_11] [(unsigned char)9] [i_11])) - (((/* implicit */int) var_0))))) ? (((/* implicit */int) (unsigned short)30049)) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_9)))))))));
                            arr_41 [i_11] [i_12] [i_11 + 3] [(_Bool)1] [i_11] = (short)-27158;
                            arr_42 [(signed char)1] [i_11] [i_12] [(unsigned char)2] [i_11] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)193))))) : (((long long int) var_2))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        {
                            arr_48 [i_11] [i_15] [i_14] [i_11 + 1] [1LL] [i_11] = (i_11 % 2 == zero) ? (((/* implicit */_Bool) ((1023U) >> (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_11 - 2] [i_11 - 1] [i_11] [i_11] [i_11 + 1])) : (((/* implicit */int) var_3)))) - (47)))))) : (((/* implicit */_Bool) ((1023U) >> (((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_11 - 2] [i_11 - 1] [i_11] [i_11] [i_11 + 1])) : (((/* implicit */int) var_3)))) - (47))) - (91))))));
                            var_29 = ((/* implicit */unsigned short) (((~((~(2013265920U))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(var_7))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned short i_16 = 0; i_16 < 12; i_16 += 3) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    for (long long int i_18 = 1; i_18 < 11; i_18 += 1) 
                    {
                        {
                            arr_57 [i_18 + 1] [i_18] [6] [(short)2] [6] [i_10] [i_9] &= ((((/* implicit */_Bool) (-(var_10)))) && (((/* implicit */_Bool) ((unsigned short) var_8))));
                            var_30 = ((/* implicit */unsigned long long int) ((_Bool) ((signed char) (unsigned short)44292)));
                            arr_58 [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 2187962055U)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_21 [i_16] [i_16])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_6)) + (32266)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_16] [i_17] [i_10] [i_10] [i_16]))) : (((3923130870354852414LL) % (-2296835809958952977LL)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_19 = 4; i_19 < 10; i_19 += 3) 
            {
                for (unsigned long long int i_20 = 2; i_20 < 11; i_20 += 4) 
                {
                    for (unsigned short i_21 = 2; i_21 < 9; i_21 += 3) 
                    {
                        {
                            arr_66 [6LL] [(_Bool)0] [i_19 - 1] [i_10] [i_9] [i_9] = (+(2858954341U));
                            arr_67 [i_21] [i_20] [i_19] [i_10] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_11))))) >= (((((/* implicit */_Bool) arr_54 [i_20] [i_21] [i_21 - 2] [i_21 + 3] [i_20 + 1] [(short)4] [i_20])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_54 [i_20] [i_21 - 1] [i_20] [i_21 + 3] [i_20 + 1] [i_20] [i_20]))))));
                            var_31 += (+((-(((/* implicit */int) var_9)))));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (unsigned short)65535))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_22 = 0; i_22 < 12; i_22 += 3) 
        {
            var_33 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 7852960124265565256ULL)))) : (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) 6356487385647424596LL))))));
            var_34 ^= arr_39 [2ULL] [2ULL];
            arr_70 [i_22] = ((/* implicit */long long int) (unsigned short)65535);
        }
        for (unsigned long long int i_23 = 1; i_23 < 9; i_23 += 3) 
        {
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2251799813685247LL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (0ULL)))) ? (((/* implicit */long long int) (+((~(1436012958U)))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-2251799813685247LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) 0LL))));
        }
    }
    /* vectorizable */
    for (short i_24 = 0; i_24 < 20; i_24 += 1) 
    {
        arr_77 [i_24] = ((/* implicit */unsigned long long int) 0U);
        var_37 = ((/* implicit */unsigned char) (short)3584);
    }
    var_38 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)-29825))))))) ? (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) (unsigned short)32459))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (2143555293) : (((/* implicit */int) var_9))))) : (-716010915234802231LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */int) var_3)), (1880074332))))))));
}
