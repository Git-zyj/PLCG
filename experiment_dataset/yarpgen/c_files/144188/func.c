/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144188
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
    var_15 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 *= ((/* implicit */long long int) var_6);
        var_17 += min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) > (((/* implicit */int) ((arr_0 [i_0] [i_0]) > (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))))), (min((((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_11))), (((/* implicit */unsigned long long int) arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (((((/* implicit */_Bool) 12178020368619732849ULL)) ? (var_10) : (((/* implicit */int) (_Bool)1)))) : (min((arr_10 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */int) var_8)))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1] [i_0 - 1]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (arr_9 [i_1])))) : (max((((/* implicit */unsigned long long int) var_2)), (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            arr_18 [i_1] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) arr_15 [i_3 - 1] [i_0] [i_1] [i_1] [i_0] [i_0]);
                            arr_19 [i_0] [i_0] [i_1] = arr_13 [i_0 - 1] [i_3] [i_1];
                            var_20 -= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [(signed char)2])) || (((/* implicit */_Bool) arr_6 [i_0 - 1] [14])))))));
                        }
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned int) 2147483647)) - (2411760578U)));
                            var_22 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_3 - 1] [(signed char)2])) ? (((/* implicit */int) arr_7 [i_0 - 1])) : ((~(arr_10 [i_0] [i_1] [i_1] [i_0]))))) ^ (min((((/* implicit */int) min((((/* implicit */unsigned short) (short)26675)), ((unsigned short)12040)))), (((arr_15 [i_0] [i_1] [(unsigned short)0] [i_3] [i_3] [i_5]) ? (((/* implicit */int) var_9)) : (arr_10 [i_0] [(signed char)2] [i_0] [i_0])))))));
                        }
                        for (unsigned short i_6 = 4; i_6 < 16; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))) & (var_6))));
                            var_24 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) (unsigned short)50199))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_0] [i_3 + 1] [i_1]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */int) min(((short)12231), (((/* implicit */short) arr_15 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) (unsigned short)15336))))));
                            var_25 += ((/* implicit */unsigned long long int) var_14);
                        }
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_26 |= ((/* implicit */signed char) arr_11 [2ULL] [i_2] [i_2]);
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (short)-19014))));
                        }
                        var_28 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1534337148)) ? (((/* implicit */int) arr_16 [i_1])) : (((/* implicit */int) var_1))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 3; i_8 < 16; i_8 += 3) 
                        {
                            var_29 *= ((/* implicit */short) arr_6 [i_1] [(_Bool)1]);
                            arr_31 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((((/* implicit */int) (short)-19014)) + (2147483647))) << (((((/* implicit */int) (signed char)28)) - (28))))) > (((/* implicit */int) ((signed char) (unsigned short)50211))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_35 [i_9] [i_1] [i_1] [i_1] [i_1] [i_0 - 1] = ((/* implicit */int) (!(arr_26 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_0 - 1] [i_0])));
                            var_30 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_1 [i_2])))));
                            arr_36 [i_0 - 1] [i_1] [i_2] [(unsigned short)15] [(unsigned short)15] = ((/* implicit */_Bool) (~(arr_32 [i_3] [6ULL] [i_3 - 1] [i_3] [i_1])));
                        }
                        for (signed char i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_2] [i_3] [i_10])) ? (((/* implicit */int) arr_2 [i_10])) : (((/* implicit */int) (unsigned short)50199))))))));
                            arr_41 [i_0] [i_1] [i_1] [(unsigned short)7] [i_1] = ((((arr_34 [i_3 + 1] [(unsigned short)0] [i_0 - 1]) >> (((arr_34 [i_3 + 1] [(unsigned short)13] [i_0 - 1]) - (1565878557451351598ULL))))) != (11095689882506780278ULL));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 1; i_11 < 17; i_11 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_11 - 1])) ? (arr_11 [(signed char)8] [16] [4ULL]) : (((/* implicit */int) arr_14 [i_0 - 1] [i_0 - 1] [i_11 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))));
                        arr_44 [(unsigned short)8] [i_1] [i_1] [16ULL] = ((/* implicit */short) arr_37 [i_0] [i_0 - 1] [i_0 - 1]);
                        arr_45 [i_1] [i_1] [i_2] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_0 - 1])) ? (((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */int) var_5)) : (1875460063))) : (((((/* implicit */int) arr_4 [i_0])) + (var_10)))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                        {
                            var_33 = ((((/* implicit */_Bool) (unsigned short)18389)) ? (arr_8 [i_0 - 1] [9ULL] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1]))));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)50195)) : (arr_17 [i_0] [i_0] [i_2] [8] [i_12]))) * (((/* implicit */int) arr_15 [i_11] [(unsigned short)14] [6ULL] [i_11 - 1] [6ULL] [i_11 + 1])))))));
                            arr_50 [i_12] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) arr_39 [i_1] [i_1] [i_2] [i_2] [i_1] [i_12] [i_1]);
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_0 - 1] [i_11 - 1] [i_0 - 1] [i_0])) && (((/* implicit */_Bool) arr_49 [i_13] [i_11 + 1] [i_0 - 1] [i_0])))))));
                            var_36 ^= ((/* implicit */_Bool) var_4);
                        }
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_11 - 1] [i_11 - 1] [i_11 - 1] [(_Bool)1] [i_11 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_2] [16U]))) : (arr_1 [i_2]))))));
                    }
                    arr_53 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) ((_Bool) var_3))), (arr_1 [i_0]))), (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_47 [i_1] [i_1] [i_2] [i_2] [i_2]))), (((/* implicit */unsigned long long int) arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1]))))));
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1827))))))))));
        var_39 = (-(((/* implicit */int) (unsigned char)193)));
    }
    for (signed char i_14 = 1; i_14 < 21; i_14 += 1) 
    {
        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) var_11))));
        arr_57 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_14 + 1])) ? (((/* implicit */int) arr_56 [i_14 + 1])) : (((/* implicit */int) arr_56 [i_14 - 1]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_56 [i_14 - 1]))));
        var_41 = ((/* implicit */_Bool) max((var_41), (((((arr_55 [i_14]) ? (((/* implicit */int) arr_56 [i_14 - 1])) : (((((/* implicit */_Bool) -580907072)) ? (((/* implicit */int) (unsigned short)50204)) : (((/* implicit */int) (signed char)-105)))))) < (((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) || ((_Bool)1))))))));
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 18; i_15 += 3) 
    {
        for (signed char i_16 = 2; i_16 < 18; i_16 += 3) 
        {
            {
                arr_62 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_55 [i_16 - 1])) : (((/* implicit */int) arr_55 [i_16 + 2]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_55 [i_15 - 1])), (var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                arr_63 [i_16] [i_16] = ((/* implicit */unsigned int) arr_59 [i_16 + 1]);
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 20; i_17 += 3) 
                {
                    for (int i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        for (unsigned short i_19 = 2; i_19 < 19; i_19 += 1) 
                        {
                            {
                                arr_71 [i_16] [i_19 + 1] = ((/* implicit */signed char) ((((/* implicit */int) ((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_15] [i_16] [i_16]))) : (var_11))) <= ((-(arr_60 [i_17])))))) < (((((/* implicit */_Bool) arr_69 [i_15 - 2] [i_16 + 1] [i_16] [i_18] [i_19] [i_19])) ? (((/* implicit */int) arr_58 [i_15 - 1])) : (((/* implicit */int) arr_69 [i_15] [i_16 - 1] [i_16] [i_15] [16] [i_17]))))));
                                arr_72 [i_16] [i_16] [i_17] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) arr_58 [i_17])) - (((/* implicit */int) arr_58 [i_17])))))), (var_2)));
                            }
                        } 
                    } 
                } 
                var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (~(min((arr_65 [(_Bool)1]), (arr_65 [18LL]))))))));
            }
        } 
    } 
}
