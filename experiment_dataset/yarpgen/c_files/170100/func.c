/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170100
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
    var_18 = ((/* implicit */unsigned short) 914728027U);
    var_19 = ((/* implicit */_Bool) ((unsigned int) var_6));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((((_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((12500749844977495959ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_21 *= ((/* implicit */unsigned long long int) (signed char)38);
                    var_22 = ((/* implicit */unsigned long long int) ((-939969060) + (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_13 [i_2] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_3]))));
                        var_23 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17942570549136436411ULL)));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                arr_20 [i_0] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)133))) ? (arr_19 [i_0] [i_0] [7LL] [i_0] [(unsigned char)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [3] [3] [i_5])))));
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_21 [i_0] = ((/* implicit */int) ((unsigned int) var_6));
    }
    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        arr_25 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [15ULL])) ? ((~(((/* implicit */int) ((_Bool) 504173524573115222ULL))))) : (((/* implicit */int) (signed char)-29))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            var_25 = ((((arr_23 [i_7]) ^ (((/* implicit */int) (unsigned char)33)))) | (((/* implicit */int) arr_27 [i_7] [i_6])));
            var_26 ^= ((/* implicit */unsigned char) arr_23 [i_6]);
            /* LoopSeq 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))), (var_11)));
                arr_32 [i_7] [i_7] &= ((/* implicit */short) min((((/* implicit */long long int) min((arr_28 [i_6]), (arr_28 [i_8])))), (max((((((/* implicit */_Bool) 504173524573115227ULL)) ? (((/* implicit */long long int) var_9)) : (arr_22 [i_6]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_7)))))))));
                var_28 = ((/* implicit */unsigned int) (unsigned char)0);
                var_29 = ((((/* implicit */_Bool) var_2)) ? (((arr_31 [i_6] [(_Bool)1] [i_8]) ? (min((2565256247U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_6] [i_6] [i_6]))));
            }
            for (short i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_6] [i_6] [i_7] [i_9])) ? (((/* implicit */int) ((((/* implicit */_Bool) 12LL)) || (((/* implicit */_Bool) (signed char)-28))))) : (((/* implicit */int) max((arr_29 [i_9] [i_6] [i_6]), (((/* implicit */short) var_5))))))))));
                arr_36 [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [i_7] [i_9]))) < (var_2))) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((/* implicit */int) (unsigned char)0))))) : ((((_Bool)1) ? (12LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-30))))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)30)))))));
            }
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                arr_40 [i_6] [i_10] = ((/* implicit */unsigned int) ((unsigned char) arr_24 [i_7] [i_7]));
                var_31 = ((/* implicit */long long int) arr_31 [i_10] [i_7] [i_6]);
            }
            var_32 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_30 [i_6] [(_Bool)1] [i_7])) || (((/* implicit */_Bool) arr_23 [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49))) : (var_17)))) || (((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)0)))))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        arr_43 [i_11] [i_11] = ((/* implicit */unsigned char) 2251486054791664787ULL);
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (_Bool)1))));
        arr_44 [i_11] &= arr_24 [i_11] [i_11];
        var_34 = ((/* implicit */short) (~(arr_22 [i_11])));
        arr_45 [i_11] = ((((/* implicit */_Bool) 5712046833375510163LL)) ? (((((/* implicit */_Bool) arr_24 [i_11] [i_11])) ? (((/* implicit */int) arr_37 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) (_Bool)0)))) : ((-(((/* implicit */int) (signed char)27)))));
    }
    var_35 &= ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) 1729711048U)) : ((+(0ULL))))), (((var_17) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) / (var_2)))))));
    var_36 = var_14;
}
