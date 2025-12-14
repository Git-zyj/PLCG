/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144920
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (((/* implicit */int) var_13)) : (arr_2 [i_0 - 1] [i_0 + 1]))));
            arr_5 [i_1 + 4] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [(signed char)16])) ? (((((/* implicit */_Bool) arr_1 [(signed char)12])) ? (((/* implicit */int) arr_1 [(short)1])) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))));
        }
        for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((-(arr_2 [i_0] [i_0]))) : (((/* implicit */int) min((arr_6 [i_0 + 1] [i_0 + 1]), (var_0))))));
            arr_8 [i_2] [i_0] = ((/* implicit */unsigned char) max((min((min((13616424745516873108ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_7 [i_0])) : (arr_2 [(_Bool)0] [(_Bool)0])))))), (((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (13616424745516873108ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 1])))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_11 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) arr_9 [i_0 + 1])) : (((/* implicit */int) arr_9 [i_3]))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                var_20 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_0 [i_0] [i_0])) > (arr_3 [i_0] [i_0])))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((arr_16 [(unsigned short)2] [i_3] [(unsigned char)14] [(unsigned char)14]) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (var_17))))))));
                    var_22 = ((/* implicit */unsigned char) ((arr_12 [i_5 + 2] [i_0 + 1] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_0 + 1]) >= (arr_10 [i_3])))))));
                    var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_5 + 4] [i_5 - 1] [i_5 + 2] [i_0 - 1]))));
                }
                for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_4] [i_3] [(unsigned char)17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_3])) ? (((/* implicit */int) arr_14 [i_6] [i_3] [i_3] [i_3] [i_0])) : (((/* implicit */int) (unsigned short)30777))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 4) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0 - 1] [i_3] [i_0 + 1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))));
                        var_24 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) var_18)) * (((/* implicit */int) arr_15 [i_3])))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        var_25 *= ((/* implicit */unsigned char) arr_17 [i_0 + 1] [(unsigned char)5] [i_4] [(signed char)12] [(short)15]);
                        arr_27 [i_0] [i_3] [i_0] [i_4] [i_3] [i_8] = ((/* implicit */_Bool) (~(arr_10 [i_0 - 1])));
                    }
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((var_17) / (((/* implicit */unsigned long long int) arr_10 [i_3])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [(unsigned char)8] [i_3] [i_4] [10U])))))));
                        arr_31 [(short)12] [(signed char)12] [7ULL] [i_3] [i_9] = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_3] [i_4] [i_9]);
                        arr_32 [(_Bool)1] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0 - 1] [(unsigned char)4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_0] [i_3] [i_3] [(unsigned short)5] [i_6] [i_6] [i_4]))) : (arr_20 [i_0] [i_0 + 1] [(unsigned char)0] [(_Bool)1] [i_0])))) ? (((((/* implicit */_Bool) var_18)) ? (arr_22 [i_0] [i_0 + 1] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116))))) : ((~(235508432663224034ULL)))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0 - 1] [i_6] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [(signed char)14])) / (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1]))))) : ((~(arr_20 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_0] [(signed char)6] [(unsigned short)2] [i_6] [i_10] [i_4] [i_6])) ? (arr_28 [i_3] [i_4] [i_4] [(signed char)7] [i_0 + 1] [i_0 + 1] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [(_Bool)1] [i_10] [i_10] [i_6] [i_3] [i_10] [i_4]))))))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_35 [i_0] [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_0 + 1] [i_3])))))));
                    }
                    var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 1] [i_3] [(signed char)5] [i_0 + 1])))));
                }
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_31 *= ((/* implicit */unsigned char) (~(arr_25 [i_0 + 1] [i_0 + 1] [(short)14] [i_0 + 1] [i_0 - 1] [(short)14] [(short)14])));
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 1])));
            }
            var_33 = ((/* implicit */unsigned char) ((arr_33 [i_3] [i_3] [i_0] [i_3] [i_3] [i_0 + 1] [i_3]) - (arr_33 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(arr_20 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1]))), (((/* implicit */unsigned long long int) (~(640208075U))))))) ? (((((((/* implicit */_Bool) arr_38 [i_0] [i_0] [i_0])) ? (arr_25 [(short)2] [i_12] [i_12] [(_Bool)1] [i_12] [9ULL] [i_0 + 1]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_12])))) ^ (((/* implicit */unsigned long long int) ((arr_0 [i_12] [11U]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2369077262U)))))) : (((((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0 - 1] [i_12] [i_0 - 1])) ? (((/* implicit */unsigned long long int) var_11)) : (var_12))) & (var_12)))));
            var_35 += ((/* implicit */unsigned char) arr_29 [12ULL]);
            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0 + 1])) - (((/* implicit */int) arr_9 [i_0 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0 - 1])) != (((/* implicit */int) arr_9 [i_0 + 1]))))) : (((/* implicit */int) arr_9 [i_0 + 1])))))));
        }
        var_37 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_30 [i_0] [(_Bool)0] [i_0] [i_0] [i_0] [i_0] [i_0])) + (((((/* implicit */_Bool) arr_2 [8ULL] [i_0])) ? (((/* implicit */int) arr_36 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4])) : (((/* implicit */int) (signed char)-75))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            {
                var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-33))))) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (unsigned short)4096))));
                arr_49 [i_14] [i_14] = ((/* implicit */unsigned char) max((min((arr_46 [i_13] [i_14] [i_14]), (arr_46 [i_13] [i_14] [i_14]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_13])) >= (((/* implicit */int) arr_9 [i_13])))))));
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned int) var_7);
}
