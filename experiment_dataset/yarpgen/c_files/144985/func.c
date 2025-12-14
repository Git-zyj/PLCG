/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144985
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
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (var_3)))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */long long int) ((unsigned int) var_9))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14)))) : ((~(var_14))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 2])) / (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_16 = ((/* implicit */long long int) arr_0 [i_0 - 1]);
    }
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 3; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -1118344578)), (min((10ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)39289)) : (((/* implicit */int) (_Bool)1))))) : (-9223372036854775803LL)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 + 1] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (unsigned char)18)))))), (((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_3] [i_2] [i_5 + 4]))));
                            arr_14 [i_4] [i_5] [i_4 + 1] [i_3] [i_2] [i_4] = ((/* implicit */signed char) (-(((unsigned int) arr_5 [i_5 - 1] [i_5 + 3]))));
                            var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) (~(arr_4 [i_1 + 3])))) * ((((_Bool)1) ? (2726221011U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242)))))));
                            var_20 = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 4] [i_1] [i_1]);
                        }
                        arr_15 [i_1 + 3] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */long long int) arr_4 [i_1])) : (arr_3 [i_1 + 2]))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (((/* implicit */int) arr_7 [i_1 + 2] [i_3])) : (arr_4 [i_3]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 16; i_7 += 1) 
            {
                for (unsigned char i_8 = 1; i_8 < 16; i_8 += 3) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_8] [i_8 + 1] [i_7 - 1])) * (((/* implicit */int) arr_19 [i_8 - 1] [i_8] [i_8 - 1] [i_7 - 1])))) * (((((/* implicit */_Bool) arr_18 [i_8 - 1] [i_8 + 1] [i_7 - 1])) ? (((/* implicit */int) arr_8 [i_8] [i_8 - 1] [i_7 + 1])) : (((/* implicit */int) arr_18 [i_8 - 1] [i_8 - 1] [i_7 - 1])))))))));
                        var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [(unsigned char)10] [i_6] [(unsigned char)10]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_13 [(signed char)12] [i_7 - 1] [(signed char)12])) : (((/* implicit */int) arr_22 [i_6] [i_7 + 1]))))) : (max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1])), (arr_6 [i_1])))))) ? (((/* implicit */int) min((arr_19 [i_6] [i_7] [i_6] [0]), (min(((_Bool)1), (arr_19 [i_1] [i_1 + 3] [i_1 + 3] [i_1])))))) : (((((/* implicit */_Bool) max(((unsigned char)1), ((unsigned char)124)))) ? ((-(((/* implicit */int) arr_17 [i_6] [8] [i_6])))) : ((~(631106754)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)21)), (17505791841731378956ULL)))) ? ((+(-1996733119))) : (((/* implicit */int) (short)127)))))))));
            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_21 [i_1] [i_1] [(unsigned short)13] [i_9])), (arr_4 [i_9])))) % (((unsigned int) arr_17 [(unsigned char)4] [12U] [i_9])))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_28 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)136)) ^ (((/* implicit */int) (unsigned char)11)))) >> (((max((((/* implicit */int) arr_11 [i_1 + 2] [i_10] [i_1] [i_10] [i_1] [i_10])), (arr_5 [i_10] [i_10]))) - (113)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_25 [i_1 + 2])))) : ((~(((unsigned int) (unsigned short)94))))));
            arr_29 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (20LL) : (((/* implicit */long long int) 1118344575))));
            /* LoopSeq 1 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                arr_32 [i_11] [i_11 - 1] [4] [i_11] &= ((/* implicit */unsigned int) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_11 - 1] [i_10] [i_1]))) & (arr_12 [i_10] [i_11 - 1] [i_10] [i_1 + 3] [i_1] [i_10] [i_10]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_1] [(short)2] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))))));
                var_25 ^= ((/* implicit */unsigned char) arr_7 [i_10] [i_11 - 1]);
            }
        }
    }
    var_26 = ((/* implicit */unsigned short) max(((~((~(((/* implicit */int) (unsigned short)20939)))))), ((~(((/* implicit */int) var_4))))));
}
