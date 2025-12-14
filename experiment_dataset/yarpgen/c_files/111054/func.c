/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111054
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) (-((-(((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [(unsigned char)5]);
    }
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (var_3)))) > (((6462363268055691954LL) | (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ^ ((((-(arr_0 [i_1]))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_1])))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) var_11);
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_9))));
    }
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_22 = max((min((arr_7 [i_2] [i_2]), (((/* implicit */unsigned int) arr_8 [i_2] [i_2])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (arr_0 [i_2])))));
        /* LoopNest 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    {
                        arr_17 [i_2] [i_3] [i_2] [i_3 - 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [(signed char)15] [i_3] [i_2] [i_5]))) == (6462363268055691943LL)))), (max((((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (var_11) : (((/* implicit */unsigned long long int) -6462363268055691937LL)))), (((/* implicit */unsigned long long int) min((arr_15 [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */short) arr_12 [i_2] [i_2] [i_2] [i_2])))))))));
                        arr_18 [i_2] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((short) ((arr_16 [(signed char)16] [i_5] [i_4] [i_5] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_2] [i_3 - 1])) < (((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_2] [(signed char)1]))))) >= (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)2)) >> (((((/* implicit */int) (signed char)35)) - (10)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [i_5] [i_2] [i_2] [(short)17])) >= (((/* implicit */int) var_2))))) : (((/* implicit */int) var_16))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_1 [i_3 - 1] [i_3 - 1]))) - (((((/* implicit */int) var_18)) + (((/* implicit */int) arr_1 [i_3 - 1] [i_3 - 1])))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) && (arr_14 [i_2] [16U])))), (max((((/* implicit */unsigned long long int) ((short) (unsigned char)138))), (((((/* implicit */unsigned long long int) var_3)) / (var_14))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 2) 
        {
            arr_23 [i_2] [i_6 + 1] [i_2] = ((/* implicit */unsigned short) var_8);
            var_26 = ((/* implicit */unsigned short) ((arr_16 [i_6 - 1] [(_Bool)1] [i_6 + 1] [i_6] [i_6 - 1]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_2]) : (((/* implicit */int) (unsigned char)84)))))));
            var_27 *= ((/* implicit */unsigned int) var_6);
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_16 [i_2] [(short)19] [(unsigned char)21] [i_2] [5U]))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            arr_28 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [(signed char)15] [i_2])) / (((/* implicit */int) arr_15 [i_2] [i_7] [i_7] [(unsigned short)7] [i_2]))));
            arr_29 [i_2] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_2] [i_7]))));
        }
    }
    var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (min((var_3), (((/* implicit */unsigned int) var_10))))));
}
