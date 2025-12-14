/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159921
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 += ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((unsigned short) 14572422687908965080ULL))), (min((((/* implicit */unsigned long long int) arr_0 [i_1])), (3874321385800586536ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((-(((((/* implicit */_Bool) 3874321385800586536ULL)) ? (((/* implicit */long long int) var_1)) : (3425310373045958363LL))))) - (((/* implicit */long long int) (+((-2147483647 - 1)))))));
                var_12 = ((/* implicit */_Bool) (+(((arr_3 [i_0 + 1] [i_0 + 1]) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_8))) : (((/* implicit */unsigned long long int) var_5))))));
                arr_5 [i_0] [i_0 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)31)) ? (14572422687908965066ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 65280)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (max((var_1), (((/* implicit */unsigned int) (unsigned char)170))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 4; i_5 < 23; i_5 += 1) 
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_2 - 1] [i_3] [(_Bool)1] [(unsigned char)9] [i_3]))));
                        var_13 = ((unsigned char) var_7);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_18 [i_6] [i_3] [i_3])) : (((/* implicit */int) (unsigned char)33))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */_Bool) arr_7 [i_5 + 1])) ? (((((/* implicit */_Bool) arr_11 [(unsigned char)9] [i_4])) ? (var_6) : (var_0))) : (((/* implicit */unsigned long long int) arr_17 [i_2] [i_3] [i_4] [(unsigned short)4]))))));
                            arr_22 [i_5 - 4] [i_6] [i_4] [3U] [0] [i_4] [i_4] = ((/* implicit */unsigned char) (-(var_8)));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_25 [(unsigned short)1] [i_3] [i_3] [i_4] [i_3] [i_7] = ((/* implicit */unsigned long long int) var_3);
                            arr_26 [17U] [i_3] [9ULL] [9LL] [i_4] [i_7] = ((/* implicit */unsigned char) (-(16890691455189570533ULL)));
                            var_16 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_10)))) ? (arr_21 [i_2 - 1] [(signed char)14] [i_4] [i_5 + 2] [i_7] [i_2 + 2]) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                        }
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (unsigned short)448))));
                    }
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        arr_30 [i_4] [i_4] [i_3] [i_4] = ((/* implicit */_Bool) ((arr_7 [i_2 + 1]) ^ (arr_7 [i_2 + 2])));
                        arr_31 [i_2 - 2] [i_3] [i_3] [i_3] [i_2] [i_8] &= ((/* implicit */unsigned short) var_4);
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_10))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(6811391396899521544ULL)))) ? (arr_21 [i_9 - 1] [i_3] [i_4] [i_9] [(unsigned short)24] [(unsigned short)22]) : (((/* implicit */int) (!((_Bool)1))))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 65278)) ? (((/* implicit */int) arr_20 [i_9] [i_3] [i_4] [(unsigned short)24] [i_2 - 1] [i_4] [i_9 - 1])) : (((/* implicit */int) arr_20 [i_2 + 2] [i_3] [i_4] [19] [i_2 + 2] [19LL] [i_9 - 1])))))));
                        }
                        for (signed char i_11 = 3; i_11 < 24; i_11 += 3) /* same iter space */
                        {
                            arr_39 [i_2] [i_3] [i_4] [(unsigned short)13] [i_11] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -984364030)) ? (14572422687908965091ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2 + 2] [20ULL] [i_2])) ? (((/* implicit */unsigned long long int) arr_24 [i_2 + 2] [8LL] [i_4] [i_9] [i_11])) : (var_8)));
                        }
                        for (signed char i_12 = 3; i_12 < 24; i_12 += 3) /* same iter space */
                        {
                            arr_42 [i_2] [i_3] [16U] [i_9] [i_4] = ((/* implicit */unsigned short) ((int) arr_8 [i_2 - 1]));
                            arr_43 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_12] [0] [i_3] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (arr_34 [i_9 - 1])));
                        }
                    }
                    var_22 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)253));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_13 = 1; i_13 < 24; i_13 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) ((arr_21 [i_2 - 2] [i_2 - 2] [i_13 - 1] [i_13] [i_13] [i_13 - 1]) / (((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) <= (var_2))))));
            arr_46 [i_2] [i_13 + 1] = ((/* implicit */_Bool) ((short) arr_15 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_13 - 1]));
        }
        arr_47 [i_2 - 1] &= ((/* implicit */unsigned char) ((arr_8 [i_2 + 2]) - (arr_8 [i_2])));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 14; i_14 += 3) 
    {
        var_24 ^= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1812059166530037802ULL)) ? (4207148580326495637ULL) : (((/* implicit */unsigned long long int) var_1)))));
        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_14 + 1] [i_14]))))) != (arr_48 [i_14 + 2])));
        arr_51 [i_14] = ((/* implicit */unsigned char) (~(arr_21 [i_14] [i_14] [i_14 + 1] [i_14 + 1] [i_14] [i_14 + 2])));
        var_26 += ((/* implicit */long long int) (!(((var_1) == (var_5)))));
    }
}
