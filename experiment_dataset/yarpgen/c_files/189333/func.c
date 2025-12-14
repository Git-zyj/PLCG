/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189333
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
    var_12 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)-9579))))))), (min(((-(7497981872753431975ULL))), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_13 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_4)))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (var_7)))) ? (((/* implicit */int) ((unsigned char) var_11))) : (((/* implicit */int) ((arr_1 [i_0]) > (18446744073709551615ULL)))))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((arr_0 [i_0]) >> (((arr_0 [i_0]) - (16193940323382549590ULL))))) >> (((((/* implicit */int) ((short) (short)-9564))) + (9565))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_16 = ((/* implicit */int) ((arr_3 [(_Bool)1] [(signed char)5]) > (((((/* implicit */_Bool) ((arr_4 [i_1]) ? (var_7) : (((/* implicit */unsigned long long int) arr_3 [(_Bool)1] [i_1]))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1]))))))));
        arr_6 [6ULL] [i_1] |= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) - (arr_0 [i_1]))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1])))))));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_11 [i_2] [i_2] [i_2] = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_3]))))), (max((arr_1 [i_3]), (((/* implicit */unsigned long long int) var_3)))));
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) max((arr_0 [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (arr_4 [i_2]))))))) ? (((unsigned long long int) (unsigned short)48881)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (0LL))))))))))));
        }
        for (signed char i_4 = 2; i_4 < 15; i_4 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (signed char i_6 = 3; i_6 < 15; i_6 += 3) 
                {
                    for (signed char i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        {
                            arr_21 [i_2] [i_2] [(_Bool)1] [(unsigned char)9] = max((max((var_10), (arr_7 [i_7 + 1] [i_7 - 1]))), (max((arr_7 [i_7 + 1] [i_7 - 1]), (arr_7 [i_7 + 1] [i_7 + 1]))));
                            var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_5 [i_2]))))))) ? (((/* implicit */int) (!(arr_19 [i_7 - 1] [i_4 + 1] [i_4 - 2] [4LL] [i_4 - 2] [i_4 - 2])))) : (((/* implicit */int) ((short) arr_18 [i_2] [i_2] [(short)8] [(short)8])))));
                            arr_22 [i_2] [(signed char)13] [i_2] [i_2] [(unsigned char)0] [(unsigned char)0] [12LL] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_4 + 1] [i_6 - 3] [i_4 + 1] [i_7 + 1])) + ((-(((/* implicit */int) arr_13 [12ULL] [i_6 + 1]))))))), (((((/* implicit */_Bool) (~(5965939365082586830LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_12 [(_Bool)1] [(_Bool)1]), (var_0))))) : ((~(1197835787458407426ULL)))))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_5)) - (((/* implicit */int) arr_17 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_2]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    arr_28 [i_2] [(unsigned char)11] [i_8] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) > (arr_27 [i_2] [(unsigned char)3] [i_8] [i_9]))))) : (((unsigned long long int) arr_9 [(signed char)1]))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(arr_10 [i_4 - 1] [(_Bool)1] [i_8]))))));
                    var_23 = ((/* implicit */_Bool) (~(arr_3 [i_2] [i_2])));
                    arr_29 [8ULL] [(short)0] [i_8] [(signed char)4] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-9582)) * (((/* implicit */int) (signed char)-70))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [i_4 + 1] [(signed char)11] [(unsigned short)14] [i_4 - 1] [i_8]))) : (arr_10 [i_4] [i_4 + 1] [i_4])));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((-334708420) * (((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_8 [i_2])) - (4253))))))))));
                }
                for (short i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    var_25 = ((/* implicit */unsigned char) ((arr_12 [i_4 - 2] [i_4 - 2]) ? (((/* implicit */int) arr_12 [i_4 + 1] [i_4 - 2])) : (((/* implicit */int) arr_12 [i_4 - 2] [i_4 + 1]))));
                    var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4 + 1]))));
                    var_27 = ((/* implicit */_Bool) var_10);
                    arr_32 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((arr_4 [i_4 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4 + 1]))) : (((((/* implicit */_Bool) arr_5 [7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))) : (-8474582648908816654LL)))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_8] [i_4 + 1] [i_4 + 1] [i_8])) >> (((/* implicit */int) arr_23 [i_8] [i_4 + 1] [i_4 - 2] [i_8]))));
                }
                for (signed char i_11 = 3; i_11 < 15; i_11 += 1) 
                {
                    arr_36 [(short)12] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_4 - 2] [i_4 - 1] [i_4 - 1] [7ULL] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */int) arr_33 [i_4] [i_4 - 1] [(_Bool)1] [15ULL] [14ULL] [i_4 + 1])) : (((/* implicit */int) arr_33 [i_4 - 2] [i_4 - 2] [i_4 - 2] [(short)15] [i_4 - 2] [i_4 - 1]))));
                    arr_37 [i_8] [(_Bool)0] = ((/* implicit */signed char) (+(arr_31 [i_4 - 2] [i_4 - 2] [i_11 - 3] [(short)2] [(unsigned char)15] [(unsigned char)7])));
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_11 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_31 [4ULL] [i_2] [(_Bool)1] [4ULL] [i_11 - 1] [(short)13])))) : (arr_14 [(unsigned char)9] [(unsigned char)9] [15LL]))))));
                    var_30 = ((/* implicit */unsigned short) ((signed char) arr_34 [i_4 - 1] [i_4 - 1] [i_11 - 1]));
                }
                arr_38 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_4 + 1] [i_2])) ? (((/* implicit */int) arr_34 [i_4 - 2] [11ULL] [i_4 + 1])) : (((/* implicit */int) arr_20 [i_2] [i_2] [i_4 + 1] [(_Bool)1]))));
            }
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    for (signed char i_14 = 3; i_14 < 15; i_14 += 1) 
                    {
                        {
                            arr_48 [(_Bool)1] [i_12] [i_2] [i_12] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)100))));
                            arr_49 [(_Bool)1] [i_4 - 1] [i_12] [i_12] [5ULL] [i_12] = ((/* implicit */long long int) ((signed char) ((unsigned long long int) arr_1 [(_Bool)1])));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [(unsigned char)4] [(signed char)9] [(signed char)13])) && (((/* implicit */_Bool) arr_14 [i_2] [(unsigned char)10] [7ULL]))));
                arr_50 [i_2] [i_2] [i_12] = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_13 [i_2] [i_2])))));
                var_32 += ((/* implicit */unsigned long long int) (-2147483647 - 1));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */int) arr_51 [9] [i_4 + 1] [i_4 - 1] [i_4 - 1])) ^ (((/* implicit */int) arr_51 [(_Bool)1] [14LL] [i_4 + 1] [i_4 - 2])))))));
                            arr_58 [i_2] [(_Bool)1] [i_16] [i_16] = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_2] [i_4 - 1] [i_2] [i_16]))));
                        }
                    } 
                } 
                var_34 += ((/* implicit */unsigned short) ((signed char) arr_43 [i_2] [i_2] [i_4 - 2] [(_Bool)1]));
                arr_59 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) arr_45 [15ULL] [i_4 - 1] [i_4 + 1]);
            }
        }
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 16; i_18 += 3) 
        {
            var_35 += ((/* implicit */_Bool) (~(((((/* implicit */int) arr_23 [(signed char)14] [(signed char)14] [12ULL] [6ULL])) + (((/* implicit */int) var_10))))));
            var_36 = ((/* implicit */signed char) (short)28987);
            arr_63 [i_18] = ((/* implicit */long long int) arr_62 [i_2] [i_18]);
        }
        /* vectorizable */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) arr_54 [4ULL] [4ULL] [i_2] [i_2]))));
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_2] [1LL] [9ULL] [i_2])) ? (((/* implicit */int) arr_43 [i_2] [i_19] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)16655)))))));
            arr_66 [(short)10] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (signed char)-100))));
            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44930))) ^ (17938524059807908829ULL))) >> (((((/* implicit */int) arr_7 [i_2] [i_19])) + (13140))))))));
            var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_47 [i_2]))))) ? (((/* implicit */int) (!(arr_16 [i_2] [(signed char)3] [(signed char)3] [(unsigned char)4])))) : (((/* implicit */int) arr_41 [i_2]))));
        }
        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) (short)26956))));
    }
}
