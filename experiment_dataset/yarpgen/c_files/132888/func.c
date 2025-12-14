/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132888
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
    var_13 = ((/* implicit */unsigned char) max((var_13), (var_9)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) max((max((((arr_5 [i_1] [7]) + (((/* implicit */int) arr_1 [i_0])))), ((-(arr_5 [i_1] [(short)0]))))), (((/* implicit */int) ((unsigned short) 3928270462839696686ULL)))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 2; i_2 < 14; i_2 += 2) 
                {
                    var_14 = ((/* implicit */int) max((var_14), (max((((/* implicit */int) arr_2 [i_2])), ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))))));
                    arr_10 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((((int) arr_8 [3] [i_1] [(unsigned char)8])), (max((((/* implicit */int) arr_2 [i_1])), (arr_9 [i_2])))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_4 [i_1])))))) : ((-(((long long int) (_Bool)0))))));
                }
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    arr_14 [i_3] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) min((max((arr_12 [i_0] [i_0 + 1] [i_1] [i_0 + 1]), (((/* implicit */int) var_10)))), (max((arr_12 [(short)12] [i_0] [i_1] [i_0 + 1]), (arr_12 [i_0] [(_Bool)1] [i_1] [i_0 - 1])))));
                    arr_15 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) ((((unsigned long long int) (~(((/* implicit */int) arr_3 [i_1]))))) << ((((~(arr_9 [i_0 - 2]))) - (1049627212)))));
                    var_15 = ((/* implicit */_Bool) min((arr_11 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_9 [i_0]), (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (max((((/* implicit */int) var_8)), (var_5))) : (((/* implicit */int) max((arr_13 [i_0] [i_0] [i_0 - 1] [i_0]), (arr_13 [i_0] [i_0] [i_0] [(short)5])))))))));
                    arr_16 [i_0] [i_1] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13))))) / (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_1))))))));
                    var_16 = ((/* implicit */int) max((arr_0 [i_1] [i_3]), (((/* implicit */signed char) ((_Bool) var_1)))));
                }
                for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_6))));
                    arr_21 [i_0] [i_1] [0U] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)7])) ? (max((var_2), (((/* implicit */unsigned long long int) arr_20 [i_1] [(unsigned char)14] [i_4] [(unsigned short)9])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))))), ((-(var_11))))))));
                    arr_22 [i_1] [12] = ((/* implicit */_Bool) max(((~(max((var_7), (((/* implicit */unsigned long long int) arr_2 [i_0])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_1])), (var_6)))) ? (((((/* implicit */_Bool) var_10)) ? (var_1) : (arr_11 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_10)), (arr_1 [i_0])))))))));
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_1]))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_11))));
                    arr_27 [i_0] [(_Bool)0] [i_5] [i_1] = ((/* implicit */unsigned int) arr_0 [i_1] [(_Bool)0]);
                    arr_28 [i_5] |= (~(arr_8 [i_0] [i_0] [i_5]));
                }
                /* LoopNest 3 */
                for (short i_6 = 4; i_6 < 13; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) arr_25 [i_6] [(unsigned char)3]);
                                arr_39 [i_0] [i_0] [i_0] [i_1] [i_0 - 1] [14U] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_35 [9LL] [i_7] [i_0 + 1])), (var_2))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))));
                                arr_40 [i_0] [(short)9] [i_1] [(unsigned char)12] [(short)1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min(((~(var_11))), (((/* implicit */long long int) ((unsigned int) (unsigned short)63488)))))), (var_2)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_3))));
}
