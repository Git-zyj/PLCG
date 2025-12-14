/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171167
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-3), (((/* implicit */int) var_8))))) ? (((unsigned int) var_12)) : (((/* implicit */unsigned int) (((-(4))) | (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_4)))))))));
    var_14 += ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((unsigned short) var_6)), (var_4)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1835433447275646313LL)) + (11349868175688074175ULL)))) ? (((((/* implicit */_Bool) 16380)) ? (var_9) : (-1835433447275646305LL))) : (min((var_9), (((/* implicit */long long int) (short)4051))))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_2 [12LL] = ((/* implicit */int) ((((11349868175688074175ULL) << (((/* implicit */int) (signed char)0)))) ^ (((/* implicit */unsigned long long int) (-((-(arr_1 [i_0] [i_0]))))))));
        var_15 = ((/* implicit */unsigned int) ((11349868175688074175ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61440)))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [(unsigned char)12])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(-1064466640)))) >= ((-(4294967290U)))));
        arr_6 [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-8192))))) ? (((unsigned long long int) arr_1 [i_1] [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) > (((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) (short)2453)));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)0))) ? (((/* implicit */int) (signed char)75)) : (-1984989158)))) ? (((/* implicit */unsigned int) min((var_1), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (unsigned char)56))))))) : (min((((/* implicit */unsigned int) ((int) var_6))), (((unsigned int) var_10)))));
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            arr_21 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)24265)))) / (((/* implicit */int) (short)-2453))));
                            arr_22 [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_15 [4ULL] [i_3] [i_4] [i_5] [(short)13] [i_3])))) || (((/* implicit */_Bool) (-(arr_15 [i_2] [i_3] [i_3] [i_4] [i_5] [i_6]))))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_4] [7] [i_6] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_13 [i_4])));
                            arr_23 [i_2] [i_3] [i_3] [i_4] [i_4] [i_6] [(signed char)10] = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)64))));
                            var_20 = ((/* implicit */unsigned int) arr_4 [i_6]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_21 -= ((/* implicit */long long int) arr_15 [11] [i_3] [i_4] [i_7] [i_7] [i_8]);
                            var_22 ^= ((/* implicit */_Bool) -3);
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (-(((unsigned int) arr_3 [i_4])))))));
                        }
                    } 
                } 
                var_24 = ((11349868175688074191ULL) - (((arr_13 [i_2]) / (14258395530356960016ULL))));
            }
            for (short i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) -4))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) -3901749102927518562LL))));
            }
            var_27 -= ((((/* implicit */_Bool) min((((arr_19 [i_2] [i_3] [i_3]) | (2147483647))), (((int) (short)-2440))))) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) (unsigned short)10)));
            var_28 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)165)) ? (arr_1 [i_2] [i_3]) : (((/* implicit */int) arr_4 [i_2])))))) ? ((-(min((((/* implicit */int) arr_16 [i_3])), (arr_15 [i_2] [i_3] [i_3] [i_2] [i_2] [i_3]))))) : (max(((~(((/* implicit */int) (unsigned short)26)))), ((-(((/* implicit */int) var_11))))))));
        }
    }
    for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
    {
        arr_33 [i_10] = ((/* implicit */short) (-((-(((unsigned long long int) arr_31 [i_10] [i_10]))))));
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((unsigned int) var_4))) | (arr_5 [i_10]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_10] [i_10])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_0 [i_10]))))) ? (-1279172363) : (((/* implicit */int) arr_3 [i_10]))))))))));
        /* LoopSeq 3 */
        for (long long int i_11 = 1; i_11 < 19; i_11 += 3) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) var_8);
            var_31 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_34 [i_11 - 1] [i_11 + 1] [i_11 - 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((4194272) - (((/* implicit */int) arr_35 [i_10])))))))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                for (unsigned int i_13 = 3; i_13 < 19; i_13 += 2) 
                {
                    {
                        var_32 |= (((-(((((/* implicit */_Bool) var_7)) ? (arr_1 [i_12] [i_13]) : (((/* implicit */int) var_10)))))) <= ((-(((/* implicit */int) (unsigned short)65510)))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((long long int) ((short) (short)31744))))));
                    }
                } 
            } 
            arr_40 [i_10] [i_11] = ((/* implicit */unsigned short) ((((unsigned int) arr_31 [i_10] [i_10])) << (((/* implicit */int) ((((/* implicit */unsigned long long int) 1397349180)) <= (arr_31 [i_10] [i_11 - 1]))))));
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 18; i_14 += 3) 
            {
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    {
                        arr_48 [i_14 + 2] [i_11] [i_10] [i_15] [(short)16] = ((/* implicit */signed char) var_1);
                        var_34 = ((/* implicit */unsigned long long int) min((min((1279172369), (((/* implicit */int) arr_47 [i_11] [i_11] [3U] [i_11] [i_14 - 2] [i_14 - 2])))), (((/* implicit */int) ((unsigned short) arr_31 [i_10] [i_10])))));
                    }
                } 
            } 
        }
        for (long long int i_16 = 1; i_16 < 19; i_16 += 3) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) arr_49 [i_10] [i_10]))));
            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (unsigned char)253))))), ((+(((/* implicit */int) (signed char)-93))))))) : (((((/* implicit */_Bool) ((int) 0LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (-22) : (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (unsigned short)41249)) ? (14ULL) : (((/* implicit */unsigned long long int) 1279172369))))))));
        }
        for (long long int i_17 = 1; i_17 < 19; i_17 += 3) /* same iter space */
        {
            var_37 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_37 [i_10])))) ? ((((~(var_6))) << ((((((~(((/* implicit */int) (unsigned short)41271)))) + (41323))) - (51))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            var_38 = ((/* implicit */int) min((7072270764508998973LL), (((/* implicit */long long int) (-(arr_50 [i_17 + 1] [i_10]))))));
        }
    }
    var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) var_0))));
    var_40 = ((((_Bool) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 131071ULL))))) ? (((/* implicit */int) max((((unsigned char) var_5)), (((/* implicit */unsigned char) (signed char)-103))))) : (((/* implicit */int) var_8)));
}
