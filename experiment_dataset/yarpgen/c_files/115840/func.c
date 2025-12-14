/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115840
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((long long int) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (6203466477561082235ULL)))));
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) ((_Bool) ((unsigned long long int) arr_3 [i_0] [i_1] [i_0]))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = (+(((/* implicit */int) var_11)));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(var_10))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_18 -= ((/* implicit */unsigned char) ((_Bool) arr_1 [i_0 + 2]));
                        var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_0 + 2] [i_2])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_0 + 2] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_0 + 2] [i_2]))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_6 = 4; i_6 < 12; i_6 += 2) 
                        {
                            var_20 += ((/* implicit */unsigned char) (~(arr_14 [i_6 - 3] [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_0])));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6203466477561082226ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255))))) ? (arr_0 [i_0 - 1]) : (((((/* implicit */int) var_12)) + (((/* implicit */int) arr_7 [i_6] [i_1] [i_6]))))));
                        }
                        arr_19 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((max((1527303192U), (((/* implicit */unsigned int) (signed char)-11)))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_11 [i_5])))) ? (((var_10) & (((/* implicit */int) arr_1 [i_1])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_2] [i_5])) : (((/* implicit */int) var_13)))))))));
                        arr_20 [i_0] = ((/* implicit */_Bool) min(((~(3763275740U))), (max((((/* implicit */unsigned int) arr_18 [i_0 + 2] [i_0 + 1] [i_0 + 3] [i_0 + 4] [i_0 + 2])), (531691555U)))));
                        var_22 |= ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_4 [i_0])) - (531691536U)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        arr_23 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_0] [i_7])), ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))))) ? (min((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (4688232123956633108LL))), (((/* implicit */long long int) var_2)))) : ((~(min((((/* implicit */long long int) (_Bool)1)), (var_5)))))));
                        var_23 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1]))) == (var_14))) ? (((/* implicit */unsigned long long int) arr_4 [i_2])) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_6))))) / (max((((/* implicit */unsigned long long int) (_Bool)1)), (6203466477561082226ULL)))))));
                    }
                    arr_24 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) arr_7 [i_0 - 1] [i_1 + 1] [i_1])), (var_9))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1 - 2] [i_0 + 3])) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0])))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)10))))));
}
