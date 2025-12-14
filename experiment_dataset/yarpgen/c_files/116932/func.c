/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116932
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
    var_18 = var_16;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_2] [i_1] [i_0])), (min((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_0] [i_0])), (arr_0 [(unsigned char)11])))))) ? ((~(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_0 [i_2]))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]))) : (arr_0 [i_0])))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_2 [i_0])))), (max((arr_5 [i_1] [i_1] [i_2]), (((/* implicit */int) arr_3 [i_1] [i_2])))))), (arr_5 [i_1] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_14);
    var_21 = ((/* implicit */unsigned short) max((min((var_2), ((-(((/* implicit */int) var_1)))))), ((((-(((/* implicit */int) var_1)))) | (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */int) var_6))))))));
    /* LoopSeq 1 */
    for (unsigned short i_3 = 3; i_3 < 12; i_3 += 4) 
    {
        var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_11 [i_3 - 2])) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_2 [i_3]))))))));
        var_23 = (+(((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (arr_11 [i_3 + 1]) : (arr_11 [i_3 + 1]))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [(short)8] [i_3 - 2] [(short)8]), (((/* implicit */int) arr_6 [(_Bool)1] [i_3] [i_3 - 1] [i_3 - 2]))))) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (arr_8 [i_3]) : (((/* implicit */unsigned int) arr_5 [(unsigned char)2] [i_3] [i_3])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) arr_4 [i_3 - 3] [i_3] [i_3])))))))))))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))) % (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [(unsigned short)5])) % (arr_5 [20LL] [i_3] [20LL])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 + 1]))) % (arr_8 [i_3])))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(-438190373)))) > (((((/* implicit */_Bool) arr_13 [i_3] [i_4])) ? (arr_8 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [0ULL]))))))))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_12 [i_3] [i_3 + 1] [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_4])) >> (((((/* implicit */int) arr_6 [i_4] [i_4] [i_3] [i_3])) + (27)))))) : (arr_13 [i_3 - 2] [i_3 - 1])));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
        {
            var_28 = ((/* implicit */short) arr_16 [i_3 - 1] [i_3 - 2] [i_3]);
            var_29 = ((/* implicit */long long int) ((((arr_12 [i_5] [i_5] [i_3 - 1]) > (arr_8 [i_3]))) ? (((/* implicit */int) arr_15 [i_3 - 2] [i_3 - 2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_5])) && (((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5] [i_3])))))));
        }
        for (short i_6 = 0; i_6 < 13; i_6 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_7 = 1; i_7 < 12; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    for (unsigned char i_9 = 4; i_9 < 11; i_9 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) arr_22 [i_3] [(unsigned char)3] [i_3] [i_3] [i_3] [i_3])))) <= ((+(((/* implicit */int) arr_19 [i_3] [(unsigned char)8])))))))) <= (arr_20 [i_3] [i_7] [i_3] [i_9 + 1])));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_3 - 3])) ? (arr_0 [i_3 - 2]) : (arr_0 [i_3 + 1]))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_10 [i_3 - 2] [i_6]))))))), (((((/* implicit */_Bool) arr_8 [i_3 - 2])) ? (arr_8 [i_3 - 1]) : (arr_8 [i_3 - 2])))));
                arr_29 [i_10] = ((/* implicit */unsigned int) max(((+(arr_27 [i_3 + 1] [i_3 - 2]))), (max((((/* implicit */unsigned long long int) min((arr_10 [i_6] [i_10]), (arr_10 [i_10] [i_3 - 2])))), (min((arr_24 [i_3] [i_3] [(unsigned char)0] [i_10] [i_10] [i_10]), (((/* implicit */unsigned long long int) arr_0 [i_10]))))))));
            }
        }
        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) max((((arr_12 [(unsigned char)1] [i_3 - 3] [(short)9]) * (arr_12 [i_3] [i_3 - 3] [i_14]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_12] [i_12] [i_3 - 1])) && (((/* implicit */_Bool) arr_35 [i_14] [i_13] [i_3 + 1] [i_3 + 1]))))))))));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (627123699822325360LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21589)))))), (((((/* implicit */_Bool) 438190372)) ? (0ULL) : (((/* implicit */unsigned long long int) 627123699822325360LL))))))) ? (max((arr_8 [i_13]), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_40 [i_3] [i_11] [i_14] [i_11] [i_14])), (arr_23 [i_3 - 3] [i_11] [i_14] [i_13] [i_13])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3 - 3])) && (((/* implicit */_Bool) arr_36 [i_14] [i_13] [i_13] [i_12] [i_11] [i_3]))))))));
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (+(max(((-(arr_13 [i_3] [i_3]))), (((/* implicit */unsigned long long int) min((arr_5 [i_12] [i_11] [i_13]), (((/* implicit */int) arr_16 [i_14] [i_11] [i_3]))))))))))));
                            arr_42 [i_3] [i_14] [i_12] [i_12] [i_13] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_3] [i_3 - 2] [i_3] [i_3] [i_3] [i_3]))))) ? (((((/* implicit */int) arr_6 [i_3] [i_3] [i_14] [(_Bool)1])) & (((/* implicit */int) arr_23 [i_14] [i_13] [i_14] [i_11] [i_3 - 1])))) : (((((/* implicit */int) arr_18 [i_3])) / (((/* implicit */int) arr_22 [(_Bool)1] [i_11] [i_12] [10] [i_14] [i_14]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_11 [i_12]), (((/* implicit */int) arr_3 [i_14] [i_13]))))) ? (((arr_11 [i_12]) | (((/* implicit */int) arr_17 [(unsigned short)4] [i_12] [i_14])))) : (((arr_16 [i_13] [i_12] [i_11]) ? (((/* implicit */int) arr_40 [i_3] [i_3] [i_12] [i_13] [(_Bool)1])) : (((/* implicit */int) arr_15 [i_3] [i_11]))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [8])) && (((/* implicit */_Bool) arr_31 [i_11] [i_12] [i_12]))))), (((((/* implicit */_Bool) arr_41 [i_3] [i_11] [i_12] [i_13] [i_13] [i_14])) ? (((/* implicit */unsigned long long int) arr_34 [i_3] [i_3] [i_11] [i_3])) : (arr_31 [i_14] [i_13] [i_11]))))));
                            arr_43 [i_3 - 2] [i_11] [i_12] [i_13] [i_14] [i_14] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) max((arr_38 [i_3] [i_11] [i_12] [i_13] [i_14]), (((/* implicit */unsigned long long int) arr_28 [i_11] [i_11] [i_14]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_20 [i_11] [i_12] [i_12] [i_14]) >> (((arr_8 [i_12]) - (3744006655U)))))) ? (((((/* implicit */_Bool) arr_0 [i_12])) ? (((/* implicit */int) arr_17 [i_14] [i_12] [i_3])) : (((/* implicit */int) arr_25 [i_14] [i_14] [i_14] [i_13] [i_12] [i_11] [i_3])))) : (((/* implicit */int) arr_10 [i_3] [i_11])))))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_23 [i_11] [i_11] [(_Bool)1] [i_3] [i_3]), (((/* implicit */unsigned short) arr_22 [i_3 + 1] [i_3] [i_3 + 1] [i_11] [i_11] [i_11]))))) ? ((-(arr_38 [i_3] [i_3] [i_3] [i_3] [(unsigned short)2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_3] [(_Bool)1] [i_11] [i_11] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_10 [i_3 + 1] [i_11])) : (((/* implicit */int) arr_10 [i_3] [i_11]))))))))));
        }
    }
}
