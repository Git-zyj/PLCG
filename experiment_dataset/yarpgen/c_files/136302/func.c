/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136302
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
    var_16 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_17 -= ((/* implicit */long long int) (+(((unsigned int) min((var_0), (((/* implicit */short) arr_4 [i_2])))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10669254212063720059ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_2 [i_1])))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)20)))))))) - ((+(((/* implicit */int) arr_6 [i_0 + 2]))))));
                    var_19 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) (short)23701))))), (arr_3 [(_Bool)1])));
                }
                for (signed char i_3 = 4; i_3 < 10; i_3 += 2) 
                {
                    arr_10 [i_3] = ((/* implicit */unsigned int) (unsigned char)163);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        arr_13 [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) var_15);
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3 + 3])) ? (var_13) : (((/* implicit */int) arr_11 [i_3] [i_3 + 3] [i_3])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            arr_16 [i_0] [(unsigned char)12] [i_1] [i_3 - 4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((signed char) arr_9 [6U] [i_3 + 1] [i_4] [i_5]));
                            arr_17 [6] [i_1] [i_3] [i_3] [i_3] [i_4] [i_5] &= ((/* implicit */signed char) ((int) arr_0 [i_3]));
                            arr_18 [i_5] [i_4] [i_4] [i_3] [i_3] [i_4] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0 - 1]))));
                        }
                        arr_19 [i_0] [i_4] [i_0 - 1] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_6 [i_4]))))));
                    }
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), ((+(((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-112)), ((short)21983)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [1U] [1U] [i_1] [i_3 + 3] [1U] [i_6] [i_6])))))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-112)), (303356582U)));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)95)))))));
                        }
                        /* LoopSeq 2 */
                        for (short i_8 = 3; i_8 < 12; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */short) max(((((~(((/* implicit */int) var_6)))) * (((/* implicit */int) arr_5 [i_3] [i_6] [i_3])))), (((/* implicit */int) arr_6 [i_3 - 4]))));
                            var_25 &= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) (signed char)-58)) != (((/* implicit */int) (unsigned short)63754))))), (var_13)));
                            var_26 = min((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 - 1] [i_3 + 2] [i_6] [i_8] [i_3 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) : (var_7)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_0])))))))), (min((max(((signed char)36), ((signed char)112))), (((/* implicit */signed char) ((_Bool) arr_6 [(_Bool)1]))))));
                            var_27 ^= ((/* implicit */signed char) max((min((((((/* implicit */long long int) arr_20 [8ULL] [i_1] [i_1] [i_1] [i_1] [i_1])) / (arr_22 [i_0] [i_1] [i_3] [i_8]))), (((/* implicit */long long int) arr_5 [i_3] [i_6] [(_Bool)1])))), (var_3)));
                            var_28 = ((/* implicit */short) ((((/* implicit */int) (signed char)112)) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)21983)))))));
                        }
                        for (signed char i_9 = 3; i_9 < 9; i_9 += 4) 
                        {
                            arr_32 [i_1] [12U] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_25 [0] [i_1] [(unsigned short)10] [i_6] [i_6] [i_9 - 3] [i_9])) != (min((var_13), (((/* implicit */int) var_0))))))) >> (((/* implicit */int) arr_14 [i_1] [i_1] [i_3] [i_3 - 3] [i_6] [i_9]))));
                            var_29 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) arr_22 [i_0 + 2] [i_0 - 1] [i_3 - 1] [i_9 + 2])), (arr_23 [i_0] [i_0] [i_0] [5LL] [i_0 - 1]))));
                            var_30 = ((/* implicit */short) arr_26 [i_0] [i_3] [i_9]);
                        }
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */long long int) arr_25 [i_0] [(unsigned short)0] [i_0] [(_Bool)1] [i_3] [i_10] [i_0]);
                        var_32 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_11 [i_0 - 1] [i_0 - 1] [i_1]), (((/* implicit */unsigned short) arr_15 [(unsigned short)8] [i_0 + 1] [i_0] [i_3] [i_3 - 1] [3ULL] [i_10])))))) / ((+(6061904385441319571LL)))));
                        /* LoopSeq 1 */
                        for (signed char i_11 = 1; i_11 < 12; i_11 += 4) 
                        {
                            arr_38 [i_11] [i_11] [i_10] [i_11 - 1] = ((/* implicit */_Bool) var_6);
                            var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_1] [i_1] [i_3 - 2] [(unsigned short)10] [i_3 - 2] [i_10] [i_11]))) : (min((((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((arr_21 [i_11] [i_10] [i_3] [i_1] [(unsigned short)2] [i_0 + 1]) - (2882100641U)))))), (((long long int) arr_22 [i_0] [i_0] [i_0 + 1] [i_0]))))));
                        }
                    }
                }
                var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 + 2])))))));
                arr_39 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_1])) * (min((((((/* implicit */_Bool) arr_34 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_1] [i_1]))) : (arr_36 [i_0] [i_0] [i_0 - 1] [(signed char)7] [i_0]))), (((/* implicit */unsigned long long int) arr_26 [(short)12] [i_0] [i_1]))))));
                arr_40 [i_0] [i_0] = min((((var_11) >> (((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) - (22571))))), (((/* implicit */long long int) var_4)));
            }
        } 
    } 
}
