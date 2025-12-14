/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160986
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] = (~((~(((/* implicit */int) (unsigned char)128)))));
                    var_20 = ((/* implicit */short) var_8);
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_7 [i_0] [i_2 + 2] [i_3 - 1] [i_3 + 1])) : (((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */int) (short)23936)) : (((/* implicit */int) (short)23909)))))))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) (_Bool)1)), (3203270864U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)42)) && (((/* implicit */_Bool) arr_9 [(unsigned char)19] [i_2 - 1] [i_1] [i_0]))))) : (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_4))))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30765)) - (((/* implicit */int) arr_7 [i_2 - 2] [i_2 - 2] [i_2] [i_3 + 1]))))) - (((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_1] [i_2 - 1] [i_3 - 1])) ? (arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))))))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) max((((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (3540807598U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [18U] [i_2 + 1] [i_2 + 1] [i_1] [i_0])))))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))) - (min((9223372036854775805LL), (((/* implicit */long long int) var_6))))))));
                            var_23 &= ((/* implicit */_Bool) max((3203270867U), (((((/* implicit */_Bool) 3203270865U)) ? (2088960U) : (((/* implicit */unsigned int) 2147483647))))));
                        }
                        for (short i_5 = 3; i_5 < 20; i_5 += 2) 
                        {
                            var_24 += ((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_9 [i_5] [i_5 - 2] [i_5 + 1] [i_5 - 1])), (arr_2 [i_5 - 3]))) - (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_5] [i_5 + 1])))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] [6LL] &= ((/* implicit */_Bool) arr_5 [i_0]);
                        }
                    }
                    for (short i_6 = 1; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        var_25 = var_15;
                        var_26 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */int) (signed char)-99)) != (((/* implicit */int) var_9))))))), ((-(((/* implicit */int) arr_14 [i_1] [(short)10] [i_1] [i_1] [i_1] [i_2 - 2] [i_6 - 1]))))));
                        arr_26 [18] [(_Bool)1] [11] [i_6 + 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((1152886320234758144ULL), (((/* implicit */unsigned long long int) arr_14 [i_6 - 1] [(short)15] [(_Bool)1] [i_6] [i_6] [(_Bool)1] [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_16)) ? (3203270856U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26)))))))) : (16777215ULL)));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned char) var_13);
    var_28 += var_10;
    var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) & (((((/* implicit */long long int) min((((/* implicit */unsigned int) var_10)), (483382539U)))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-9223372036854775801LL)))))));
}
