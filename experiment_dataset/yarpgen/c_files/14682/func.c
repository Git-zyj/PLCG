/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14682
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
    var_18 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) ((_Bool) arr_0 [7U])))))) : (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) >> (((((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1])) - (189))))) & (((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1])))))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))));
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) <= (((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), ((short)22003))))))));
            var_21 -= ((/* implicit */unsigned char) (-((((-(((/* implicit */int) arr_0 [i_1])))) / (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_0 [7LL]))))))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_0]))))))));
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!((_Bool)1)))), (((long long int) arr_8 [i_1] [(signed char)6] [i_1])))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_23 = ((/* implicit */signed char) arr_8 [i_1] [i_1 + 3] [i_1]);
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    arr_17 [i_0] [i_0] [i_1] [4] = ((/* implicit */_Bool) ((max((((arr_16 [i_0] [i_1 - 2] [i_1] [6LL]) ? (((/* implicit */int) arr_10 [i_0] [i_4] [i_4] [i_1])) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_16 [i_0] [1LL] [i_1] [i_4])), (arr_7 [i_0] [i_1 - 1] [(unsigned char)2] [11LL])))))) | ((~(((/* implicit */int) min((((/* implicit */short) arr_4 [(unsigned char)5] [i_1 + 1] [i_1 + 1])), (arr_15 [i_0] [i_0] [8ULL] [i_3] [i_4]))))))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((long long int) arr_3 [i_4])))));
                }
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [(_Bool)0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_3])) : (((/* implicit */int) arr_1 [i_1 + 3] [i_3])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_1] [i_3] [(unsigned char)0])))))))) ? (max((((/* implicit */unsigned long long int) min((arr_2 [i_0]), (arr_7 [i_0] [i_1 + 3] [(unsigned char)2] [i_3])))), (arr_13 [i_0] [i_1] [i_3]))) : (((((arr_6 [i_0] [6LL] [i_0]) >= (arr_13 [i_3] [i_1 + 1] [(unsigned char)10]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [(unsigned char)0]))) : (max((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_3] [i_3] [i_3])), (6283337499175819816ULL)))))))));
                var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3255)) ? (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_3])) : (((/* implicit */int) (_Bool)1))))), (((((arr_13 [i_0] [(signed char)9] [2ULL]) <= (arr_13 [i_3] [i_1] [i_1]))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (arr_6 [(unsigned char)11] [2LL] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_1 + 2] [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0] [0ULL] [i_0] [i_1])))))))));
                var_27 = ((/* implicit */unsigned short) arr_12 [i_0] [(_Bool)1] [i_3]);
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_28 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)0] [i_5] [i_0])) ? (((/* implicit */int) arr_7 [i_5] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [4ULL] [i_1 + 1] [8LL] [i_0])) || (((/* implicit */_Bool) arr_4 [(unsigned char)11] [i_5] [i_1 + 2]))))) : (((/* implicit */int) min((arr_14 [i_0] [i_0] [i_1 + 3] [i_5]), (((/* implicit */unsigned short) arr_1 [i_0] [i_5])))))))) ? (((/* implicit */int) min((min((arr_0 [i_1]), (((/* implicit */short) arr_1 [i_1] [i_1])))), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_15 [i_1] [(_Bool)1] [i_1 + 3] [i_1 - 2] [i_1 - 1])))))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)0] [i_1] [i_1]))))), (min(((unsigned char)4), (((/* implicit */unsigned char) (_Bool)1)))))))));
                var_29 = ((/* implicit */unsigned long long int) arr_16 [i_5] [i_1] [i_1] [11]);
                var_30 = ((((/* implicit */_Bool) arr_18 [5LL] [i_1] [i_1])) || (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [4LL] [i_1 - 1] [4LL] [i_1])) ? (arr_8 [i_1] [i_1] [11U]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) > (arr_18 [i_1] [i_1 - 1] [i_1]))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 1; i_7 < 8; i_7 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_7 - 1] [i_1 + 3])), ((+(((/* implicit */int) arr_4 [i_7] [i_1] [i_1]))))))) ? (max((arr_26 [i_7 + 1] [i_7] [i_7 + 1] [i_1 + 3] [i_0]), (arr_26 [i_7 + 4] [(short)10] [i_1 + 2] [i_1 + 1] [(short)10]))) : (((/* implicit */unsigned long long int) arr_19 [i_1] [i_6] [(unsigned char)2]))));
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_21 [(unsigned char)8] [(_Bool)1])), (((arr_6 [i_0] [i_0] [i_0]) / (arr_13 [(unsigned char)0] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(arr_3 [i_0]))))))) : (arr_13 [7ULL] [i_1 - 1] [i_5])))));
                        }
                    } 
                } 
                arr_27 [i_1] [i_1 + 1] [0LL] = ((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1 - 2] [i_0] [(unsigned char)11]);
            }
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(18446744073709551597ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_14 [i_1 + 2] [i_1 + 2] [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_23 [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_0])) : (((/* implicit */int) arr_11 [i_1] [(_Bool)1] [i_0] [i_1])))) : (((/* implicit */int) ((_Bool) arr_25 [i_0] [i_0] [(short)6] [i_1 + 1] [i_1]))))))));
        }
        /* vectorizable */
        for (unsigned char i_8 = 2; i_8 < 10; i_8 += 2) 
        {
            var_34 *= ((/* implicit */unsigned char) arr_22 [i_0] [i_8] [i_0] [i_0]);
            arr_31 [i_0] = ((/* implicit */unsigned char) ((arr_19 [i_0] [i_8 + 1] [i_8 + 1]) / (arr_19 [i_8] [i_0] [i_8 - 1])));
        }
    }
}
