/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171143
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) (~(((/* implicit */int) max((var_2), (((/* implicit */signed char) (((_Bool)0) || ((_Bool)1)))))))));
                    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) var_14)) + (4163291134589476421LL))), (((/* implicit */long long int) var_11))));
                    arr_8 [i_0] [i_1] [i_1] |= ((/* implicit */short) (((((!(((/* implicit */_Bool) -182547602)))) && ((_Bool)1))) ? (((/* implicit */int) ((((/* implicit */int) max(((short)21665), (((/* implicit */short) (unsigned char)104))))) <= (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */int) (_Bool)1)), (-512721937)))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 += max((((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_0] [i_0] [i_2])))) / (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(_Bool)1] [(short)11] [i_2] [(short)15])) || (((/* implicit */_Bool) arr_6 [i_1] [i_2]))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            arr_15 [i_2] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_11)))) - ((+(((/* implicit */int) var_9))))));
                            var_23 = ((/* implicit */_Bool) ((var_11) ? (arr_0 [i_4]) : (arr_0 [i_2])));
                        }
                        for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (((signed char) var_19))))), (182547609)));
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) (-(((arr_9 [i_0] [i_1] [9ULL] [i_3] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_2] [i_0])))))));
                            arr_20 [i_5] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_2] [i_2]))));
                        }
                        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((3131377803U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((var_19) | (((/* implicit */unsigned int) var_3)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 4; i_6 < 14; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) 1163589492U);
                            var_26 = ((/* implicit */signed char) (+(arr_16 [i_6 - 4])));
                            var_27 = ((arr_22 [i_3] [i_1] [(unsigned short)4] [i_3] [i_6 + 3] [i_1]) + (var_10));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) max((arr_5 [i_0] [i_1] [i_7]), (((/* implicit */long long int) (_Bool)1)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))) & (15103049866725353767ULL)))))));
                            var_29 = ((/* implicit */unsigned int) var_18);
                        }
                    }
                    for (short i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned int) max((max((((/* implicit */int) arr_27 [i_2] [i_1] [i_2])), (var_8))), (((/* implicit */int) var_5))));
                        var_31 -= ((/* implicit */unsigned int) ((int) max((var_4), (var_4))));
                        var_32 = ((/* implicit */short) max((((max((((/* implicit */unsigned int) var_9)), (1163589466U))) <= (((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_9))))))), (arr_3 [i_0] [i_1])));
                    }
                }
            } 
        } 
    } 
    var_33 = max((((/* implicit */unsigned int) ((((var_8) - (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)61703))))))), (((((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (3131377803U))))));
}
