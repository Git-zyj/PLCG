/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174404
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
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))));
                                var_17 *= ((/* implicit */unsigned short) (!(((arr_11 [i_0] [i_1 - 1] [i_2] [i_4]) && (((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 + 1] [i_2]))))));
                                var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (_Bool)1))))) >= (((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_7 [i_0] [i_1] [i_2])))) ? (var_14) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))), (((/* implicit */int) max(((_Bool)1), (var_7)))))))));
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_1]))));
                    var_21 = ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])))))))) >= (262143ULL));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_2] [i_5] = arr_10 [i_5] [i_1 - 1] [i_2] [i_0 - 3] [i_5];
                        arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)16895))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_2] [i_1] [i_1] [i_0]))));
                        arr_21 [i_1] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_4 [i_6] [i_2] [i_1] [i_0])))) % (((/* implicit */int) arr_6 [i_1 + 1] [i_0 - 2]))))));
                    }
                }
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)48649);
                    arr_25 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) < (arr_18 [i_1 + 1] [i_0 - 1] [i_7] [i_0] [i_7] [i_7]))) ? (((arr_11 [i_0 - 2] [i_1 + 4] [i_7] [i_7]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1])))) : (min((((/* implicit */int) (unsigned short)3151)), ((+(((/* implicit */int) var_1))))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_23 [i_7])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) : (min((arr_18 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_1 - 1]), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)48640)) / (((/* implicit */int) arr_6 [i_0] [i_1])))))))));
                    var_24 &= ((/* implicit */unsigned char) arr_22 [i_0 - 2] [i_0] [i_1 + 1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        var_25 *= ((/* implicit */unsigned short) arr_10 [i_1 + 1] [i_1] [i_7] [i_0] [i_8]);
                        var_26 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1 + 1])) % (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1 - 1]))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 1; i_9 < 17; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) >= (arr_12 [i_10] [i_9 - 1] [i_1 + 4] [i_0 + 1] [i_0] [i_0])));
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_36 [i_9] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)62410);
                            arr_37 [i_0] [i_1] [i_9] [i_10] [i_9] [i_11] = ((/* implicit */unsigned int) ((((unsigned long long int) (unsigned short)0)) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16886)))));
                        }
                    }
                    arr_38 [i_1] [i_9] = ((/* implicit */unsigned int) var_5);
                }
                arr_39 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_1] [i_1] [i_0] [i_1]), (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
            }
        } 
    } 
    var_28 += ((/* implicit */unsigned long long int) var_13);
}
