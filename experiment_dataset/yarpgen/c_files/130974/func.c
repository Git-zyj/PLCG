/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130974
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
    var_12 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_14 -= ((/* implicit */unsigned short) arr_4 [i_0 - 2]);
            arr_5 [i_0 - 3] [i_0] [i_0 + 1] = ((/* implicit */signed char) arr_4 [i_1]);
        }
        arr_6 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) ((arr_8 [i_2] [i_2]) - (arr_8 [i_2] [i_2])));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_8 [i_2] [i_2])) / ((~(var_5)))));
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (arr_8 [(unsigned short)10] [(unsigned char)7]) : (arr_8 [i_2] [i_2])));
    }
    for (int i_3 = 1; i_3 < 18; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) ((long long int) max((2942331820120797919LL), (((/* implicit */long long int) arr_12 [i_3 - 1] [i_3 - 1])))));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
            {
                var_17 = ((/* implicit */signed char) arr_11 [i_4]);
                var_18 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_20 [i_5] [i_3] [i_3 + 1] [i_5 + 1])) - (((/* implicit */int) arr_20 [i_5] [i_3 + 1] [i_3 - 1] [i_5 + 1])))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        {
                            arr_27 [i_6] [i_3] [i_6] [i_6] [i_7] [i_5] = ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_20 [i_5] [i_3] [i_3 + 1] [i_5 + 1])) : (((/* implicit */int) arr_12 [i_3] [i_3])))) + (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_3] [i_3 + 1])) : (((/* implicit */int) arr_20 [i_5] [i_3 + 1] [i_3 - 1] [i_5 + 1])))));
                            arr_28 [i_3] [i_5] [i_5 + 1] [i_5 + 1] [i_6] [i_7] = ((/* implicit */int) 2172001969171046197ULL);
                            arr_29 [i_3] [i_3] [i_5] [i_6] [i_7] = ((_Bool) ((signed char) arr_21 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_5]));
                            var_19 += ((/* implicit */short) 4516389350051344402LL);
                            var_20 ^= ((/* implicit */short) min((((/* implicit */int) arr_11 [i_5 + 1])), ((-(((/* implicit */int) arr_12 [i_5 + 1] [i_4]))))));
                        }
                    } 
                } 
            }
            for (int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) ((signed char) min((((/* implicit */unsigned char) arr_17 [i_3 - 1] [i_3 - 1] [i_3 - 1])), (arr_20 [i_8] [i_4] [i_8] [i_4]))))))))));
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_5))));
            }
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_3] [i_3] [(short)16] [i_4] [i_4] [(unsigned char)12])) + (((((arr_24 [i_3] [i_3] [i_4] [i_4] [i_4] [i_4]) % (((/* implicit */int) arr_19 [i_3 + 1] [i_4] [i_4])))) - (((/* implicit */int) arr_19 [i_3] [i_3] [i_4])))))))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((int) ((_Bool) arr_22 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_4] [i_3]))))));
            var_25 ^= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_15 [i_3 - 1])) : (((var_7) | (((/* implicit */int) arr_30 [i_3] [i_4] [i_4])))))));
        }
        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) 6430024123169888699ULL))))))));
                        arr_42 [i_3] [i_9] [i_10] [i_11] = ((/* implicit */_Bool) var_6);
                        arr_43 [(unsigned short)14] [i_9] [i_9] [(unsigned short)14] [i_10] [(unsigned short)14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_10]))) == (var_4)))), (arr_31 [(unsigned short)18] [i_9] [i_10] [i_11]))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_34 [i_3]))))))));
                    arr_49 [i_3] [i_3] [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_3] [i_9] [i_9])) + (((/* implicit */int) arr_18 [i_3] [i_3] [i_3]))))) ? (((unsigned int) arr_41 [i_3] [i_3] [i_3])) : (arr_25 [i_9] [i_3 + 1] [i_3] [i_3 + 1] [i_9]))));
                    var_28 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_3 - 1] [i_3 - 1] [i_12]))));
                }
                /* vectorizable */
                for (long long int i_14 = 3; i_14 < 18; i_14 += 2) 
                {
                    var_29 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_31 [i_3] [i_9] [i_12] [i_14 - 1]) < (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_3] [i_3 + 1] [i_9] [i_12] [i_12]))))))) < (6430024123169888705ULL)));
                    var_30 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_31 [i_3 - 1] [i_3 + 1] [i_3] [i_3])) ? (((/* implicit */int) arr_34 [i_3])) : (((/* implicit */int) arr_38 [i_3] [i_9] [i_14]))))));
                }
                arr_53 [i_3] [i_3] [i_3 - 1] [i_3] = ((/* implicit */_Bool) arr_48 [5LL]);
                /* LoopSeq 3 */
                for (unsigned char i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */int) (~((+(((((/* implicit */_Bool) -2942331820120797919LL)) ? (718639589U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_15])))))))));
                    var_32 &= ((/* implicit */_Bool) (((~(((long long int) -4516389350051344402LL)))) ^ (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)7)) * (((((/* implicit */_Bool) arr_34 [i_3])) ? (((/* implicit */int) arr_54 [i_3 - 1] [i_3 - 1] [i_9] [i_9] [i_12] [i_15])) : (((/* implicit */int) arr_52 [i_3] [i_3] [i_12] [i_3] [i_3] [i_9])))))))));
                }
                for (unsigned char i_16 = 0; i_16 < 19; i_16 += 1) /* same iter space */
                {
                    arr_61 [i_3] [i_3] [i_12] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_3] [i_3 - 1] [i_9] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_46 [i_3] [i_3] [i_3]))))))) : (2942331820120797919LL)));
                    var_33 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_38 [i_3 + 1] [i_9] [i_9])))) >> ((((+(arr_25 [i_9] [i_9] [(signed char)8] [i_3 + 1] [i_3 - 1]))) - (1871727146U)))));
                }
                for (unsigned char i_17 = 0; i_17 < 19; i_17 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */signed char) (+((~(((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                    var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) min((((/* implicit */int) arr_35 [i_3] [i_3] [i_17])), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_17 [i_3 - 1] [i_12] [i_17])) * (((/* implicit */int) arr_13 [i_17])))) : (((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (((/* implicit */int) arr_34 [(unsigned short)8])) : (((/* implicit */int) arr_47 [i_3] [i_3 - 1] [i_9] [i_12] [i_17])))))))))));
                }
                /* LoopSeq 3 */
                for (unsigned int i_18 = 0; i_18 < 19; i_18 += 2) 
                {
                    var_36 = ((/* implicit */signed char) arr_18 [i_3] [i_3] [i_12]);
                    arr_66 [i_3 + 1] [i_3] [i_3] [i_9] [i_12] [i_18] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_12]))) * (((((/* implicit */_Bool) arr_13 [i_12])) ? (min((arr_37 [i_12] [i_9] [i_9] [i_12]), (((/* implicit */unsigned int) arr_64 [i_3] [i_9] [i_12] [i_18])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_13 [i_3 - 1]))))))));
                    var_37 ^= ((short) ((((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_9]))))) < (((((/* implicit */_Bool) arr_37 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1])) ? (arr_57 [i_3] [i_9] [(unsigned short)11] [i_12] [i_18]) : (2942331820120797919LL)))));
                }
                for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 3) 
                {
                    arr_69 [i_3 - 1] [i_3 - 1] [i_3 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_3), (arr_67 [i_3] [i_9] [i_9] [(short)16] [i_19 + 1] [i_19 + 1]))))));
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_3] [i_3])))))))) ? (((/* implicit */int) arr_23 [i_12] [i_12] [i_12] [i_19])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_12] [i_12] [i_12] [i_9])) * (((/* implicit */int) arr_41 [i_3] [i_12] [i_12]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_37 [i_9] [(unsigned char)0] [i_9] [(unsigned char)4])))))))));
                }
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) (short)21123))));
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2942331820120797918LL) << (((arr_16 [i_3 - 1]) - (4292960415371203257LL)))))) ? (((arr_16 [i_3 + 1]) | (arr_16 [i_3 + 1]))) : (((((/* implicit */_Bool) arr_16 [i_3 + 1])) ? (arr_16 [i_3 - 1]) : (arr_16 [i_3 + 1])))));
                }
                arr_74 [i_3] [i_3] [i_3] [(unsigned char)7] = ((/* implicit */unsigned long long int) var_7);
            }
            for (short i_21 = 2; i_21 < 18; i_21 += 2) 
            {
                var_41 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((5085493753303214019ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))))) || (((/* implicit */_Bool) 12629246228649268074ULL))));
                var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (((((!(((/* implicit */_Bool) arr_41 [i_3 + 1] [i_3 + 1] [i_21])))) || (((/* implicit */_Bool) ((unsigned char) arr_64 [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_76 [i_3 + 1] [i_3 + 1] [i_21 + 1])) && (((/* implicit */_Bool) arr_76 [i_3 + 1] [i_3 - 1] [i_21 - 1]))))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_8)), (arr_46 [i_9] [i_3] [i_21])))))))));
            }
            arr_77 [i_9] [i_9] [i_9] = ((/* implicit */short) arr_60 [i_3]);
        }
        for (unsigned short i_22 = 2; i_22 < 17; i_22 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_23 = 0; i_23 < 19; i_23 += 2) 
            {
                for (int i_24 = 0; i_24 < 19; i_24 += 1) 
                {
                    {
                        var_43 = ((/* implicit */unsigned short) max(((~(arr_40 [i_3 + 1] [i_3 + 1] [i_22 + 2] [i_23] [i_23] [i_24]))), (((arr_40 [i_3 + 1] [i_3 - 1] [i_22 - 1] [i_22] [i_24] [i_22]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_71 [i_3 + 1] [i_22 + 2] [i_22 + 2] [i_24] [i_3 + 1])))))));
                        arr_84 [i_3] [i_24] = ((/* implicit */long long int) arr_50 [i_22]);
                    }
                } 
            } 
            var_44 += ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_60 [i_3])) : (arr_44 [i_3] [i_3 - 1] [i_3])))) || (((/* implicit */_Bool) arr_16 [i_3])))), (((((/* implicit */_Bool) max((arr_55 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */long long int) arr_33 [i_3] [i_3]))))) || (((/* implicit */_Bool) ((short) arr_75 [i_3] [i_3])))))));
            var_45 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_44 [i_3] [i_3 + 1] [i_3 - 1])) ? (arr_62 [i_22 - 2] [i_22 - 2] [i_22] [i_22 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_3 - 1] [i_22 + 1] [i_22 + 2]))))) / (((/* implicit */long long int) ((/* implicit */int) ((arr_75 [i_3] [i_3 - 1]) || (((/* implicit */_Bool) arr_41 [i_3 + 1] [i_22 + 2] [i_22 - 2]))))))));
        }
    }
}
