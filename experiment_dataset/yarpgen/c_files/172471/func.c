/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172471
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
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [6ULL] [i_0])) || (((/* implicit */_Bool) arr_1 [(short)8]))))), (-9007327102394525990LL))) <= (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [(unsigned short)2]), (min((arr_1 [(signed char)4]), (arr_1 [(short)8])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_13)) : (var_7))) <= (((/* implicit */int) arr_1 [i_0]))))) | (max((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_9))))), ((+(((/* implicit */int) (signed char)31))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_7)) % (-6412327754005921125LL)))) ? (((/* implicit */int) arr_1 [(signed char)4])) : (((/* implicit */int) ((((/* implicit */int) arr_4 [8ULL])) >= (((/* implicit */int) arr_1 [(signed char)4])))))))) ? ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [10LL])) ^ (((/* implicit */int) arr_1 [6ULL]))))) : (((((/* implicit */unsigned long long int) 9007327102394525989LL)) / (var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [10U] [i_1 - 1])) ? (((/* implicit */int) arr_0 [(unsigned short)0] [i_1])) : ((-(((/* implicit */int) arr_1 [4LL])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 2) 
        {
            for (unsigned char i_3 = 3; i_3 < 8; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_1])), (var_14)))) == (((/* implicit */int) arr_6 [6LL] [i_3 - 1] [i_2 + 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 3])))))) : (((unsigned long long int) (~(18446744073709551598ULL)))))))));
                    arr_9 [i_2] [i_2] [i_3] = max((((/* implicit */short) arr_1 [i_2])), (arr_0 [i_2] [(unsigned short)14]));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            for (long long int i_5 = 3; i_5 < 8; i_5 += 2) 
            {
                for (short i_6 = 3; i_6 < 9; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */signed char) (+(min((((/* implicit */int) ((unsigned char) var_3))), ((~(((/* implicit */int) var_6))))))));
                        var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (18ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24147)))))), (((((/* implicit */int) (signed char)97)) << (((((/* implicit */int) (signed char)-110)) + (126))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (int i_8 = 4; i_8 < 10; i_8 += 3) 
            {
                {
                    arr_25 [i_1] [i_7] [i_8] [i_8 - 4] = ((/* implicit */unsigned long long int) (-(var_5)));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 4; i_9 < 8; i_9 += 1) 
                    {
                        for (long long int i_10 = 2; i_10 < 8; i_10 += 3) 
                        {
                            {
                                var_20 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_1 + 1] [i_1] [i_1 + 3]) <= (((/* implicit */int) (_Bool)1)))))) : (arr_23 [(signed char)8] [i_7] [i_8] [0])))), (arr_30 [i_10] [(unsigned short)0] [i_8] [7U] [i_1]));
                                var_21 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)31))))), (((arr_20 [(unsigned short)7] [i_7]) + (((/* implicit */unsigned long long int) arr_16 [i_10 + 2] [(unsigned short)7] [(short)9]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_11 = 1; i_11 < 8; i_11 += 1) /* same iter space */
    {
        arr_35 [(unsigned char)0] |= (+(arr_20 [1U] [9U]));
        arr_36 [i_11] [i_11] = ((/* implicit */signed char) (+(3583693504U)));
    }
    /* vectorizable */
    for (unsigned char i_12 = 1; i_12 < 8; i_12 += 1) /* same iter space */
    {
        var_22 = (((+(arr_20 [i_12] [i_12 - 1]))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_12] [i_12] [i_12 - 1])) - (((/* implicit */int) (signed char)97))))));
        /* LoopSeq 1 */
        for (unsigned int i_13 = 4; i_13 < 8; i_13 += 2) 
        {
            arr_42 [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_31 [i_12] [i_13 - 2])) << (((1099511562240LL) - (1099511562227LL)))));
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_33 [i_13 - 2])) ? (((/* implicit */int) arr_6 [i_13] [(unsigned char)2] [i_13])) : (((/* implicit */int) var_13)))) * (((((/* implicit */int) (unsigned short)18494)) / (((/* implicit */int) arr_39 [i_13])))))))));
            arr_43 [i_12] [i_13 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_12] [i_12])) && (((/* implicit */_Bool) arr_0 [i_12] [i_12]))));
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                for (unsigned short i_15 = 4; i_15 < 9; i_15 += 3) 
                {
                    {
                        arr_51 [i_12 - 1] [i_12] [(unsigned char)0] [i_15] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_28 [i_12] [i_12] [6LL] [i_12])) * (((/* implicit */int) var_6)))) << (((((/* implicit */int) ((unsigned char) 2831675457859783995LL))) - (58)))));
                        arr_52 [i_12] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(arr_41 [i_12] [i_12])))) != (18ULL)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 11; i_16 += 2) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (short i_18 = 2; i_18 < 8; i_18 += 1) 
                    {
                        {
                            var_25 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_16]))));
                            var_26 = ((/* implicit */unsigned short) ((short) var_9));
                            arr_61 [i_12] [i_17] [(unsigned char)6] [i_16] [i_16] [i_13] [i_12] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9331))) : (2831675457859783982LL))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)29054))))) ? (((((/* implicit */_Bool) arr_38 [i_12] [i_13 + 1])) ? (((/* implicit */int) (unsigned short)18652)) : (((/* implicit */int) var_10)))) : ((~(((/* implicit */int) arr_60 [i_17] [i_16] [(signed char)6] [i_12]))))));
                            arr_62 [(signed char)8] [(unsigned short)10] [(unsigned short)3] [i_17] [5U] [i_17] [i_12] = ((/* implicit */signed char) arr_59 [i_12] [i_13] [i_16]);
                        }
                    } 
                } 
            } 
        }
        arr_63 [i_12] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (signed char)-71)) ? (arr_30 [i_12 - 1] [i_12] [(signed char)4] [(unsigned char)3] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_0)))));
        arr_64 [i_12] = var_5;
    }
    var_28 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_6)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_19 = 3; i_19 < 16; i_19 += 2) 
    {
        arr_67 [i_19 - 3] = ((/* implicit */unsigned long long int) ((signed char) 7140408448170950842LL));
        /* LoopNest 2 */
        for (unsigned char i_20 = 3; i_20 < 15; i_20 += 1) 
        {
            for (long long int i_21 = 3; i_21 < 15; i_21 += 4) 
            {
                {
                    arr_73 [i_19 + 1] [i_20] [i_19 - 3] [i_19 - 2] = ((arr_69 [(unsigned char)10] [i_20]) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (arr_65 [i_19])))))))));
                    /* LoopNest 2 */
                    for (signed char i_22 = 0; i_22 < 17; i_22 += 3) 
                    {
                        for (signed char i_23 = 0; i_23 < 17; i_23 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) arr_72 [i_23] [i_19] [i_23] [i_22])))) ? (((var_0) >> (((/* implicit */int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_80 [i_19 + 1] [i_20 + 1] [i_23] [i_22] [i_23] [i_21])))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) >= (arr_69 [i_20 - 3] [i_19 - 2]))))))))));
                                var_30 ^= arr_66 [(short)6];
                                arr_81 [i_19 + 1] [(unsigned short)10] [i_21 + 2] [i_22] [i_23] [i_20] = ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                    var_31 *= ((/* implicit */signed char) var_0);
                }
            } 
        } 
    }
}
