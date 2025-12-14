/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1295
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [2U] [2U] = ((/* implicit */unsigned char) (~(((/* implicit */int) min(((unsigned char)235), ((unsigned char)251))))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1 - 2]))));
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_15 *= ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) var_3)))));
                                var_16 = ((/* implicit */unsigned short) arr_2 [i_1 - 2]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2]))) : (3833748047U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(unsigned short)18])) ? (((/* implicit */int) arr_16 [i_0] [(unsigned short)1] [i_2])) : (((/* implicit */int) (short)32083))))) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65510))) : (3247267064U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)6839)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) min(((short)31588), (((/* implicit */short) arr_9 [i_2] [i_2] [i_2] [i_2]))))))))))));
                }
                for (unsigned int i_5 = 1; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)145)), (max((((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_5])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_4 [i_5]))))))));
                    var_19 = ((((((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_3)) - (55080)))))))) ? (((((/* implicit */_Bool) ((arr_7 [i_0]) ? (((/* implicit */int) (unsigned short)21390)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned char)13] [(unsigned char)13] [i_5 + 2] [i_1]))) : (((var_13) / (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((((((((/* implicit */_Bool) arr_19 [i_0] [i_5] [i_5] [i_0])) ? (-6886436505729621130LL) : (((/* implicit */long long int) var_7)))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_5))))))));
                    var_20 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_2)), (arr_8 [i_0] [10U])))) || ((!(((/* implicit */_Bool) arr_18 [i_5] [i_1 + 1] [(short)23] [i_1 - 2]))))))));
                    arr_20 [i_0] [i_5] = ((/* implicit */unsigned short) arr_7 [13LL]);
                }
                for (unsigned int i_6 = 1; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    arr_23 [i_6] [i_6] [i_6] [i_6 + 2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_6 + 1] [i_6 + 2] [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_10 [i_6 + 2] [i_6 + 2] [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_10 [i_6 + 2] [i_6 + 1] [i_1 - 2] [i_1 - 2])))), ((-(((/* implicit */int) (short)8146))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 22; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 23; i_8 += 4) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_3)))))))));
                                arr_29 [i_6] [i_1] [i_6] [i_7] [(_Bool)1] = ((/* implicit */unsigned int) max((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-1)))))))), ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) <= (arr_18 [i_6] [14U] [i_6 + 2] [i_6]))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) max(((+(1642254621U))), (((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-82)))) - (((/* implicit */int) ((unsigned char) var_0))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((var_13) + ((+(-2492215232700190922LL))))) - (((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */long long int) var_9)) : (var_13)))));
    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
}
