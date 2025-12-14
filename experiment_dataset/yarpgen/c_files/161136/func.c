/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161136
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
    var_10 = ((/* implicit */long long int) var_3);
    var_11 -= ((/* implicit */long long int) var_8);
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))), (var_7))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 -= ((/* implicit */unsigned char) (-((+(arr_3 [i_0 - 1] [i_0] [i_0])))));
                    var_14 -= ((/* implicit */long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (_Bool)1)))))), (arr_8 [(signed char)14])));
                                arr_13 [i_0 + 1] [(unsigned short)0] [i_3 + 1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) arr_9 [i_4 - 1] [7ULL] [i_0] [i_0] [i_0] [i_0]);
                                arr_14 [i_4] [i_4] [i_4] [i_4] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [(short)0] [i_0 - 2])) ? (arr_2 [i_3 - 1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(unsigned short)3] [i_2 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_11 [4] [i_2 - 1] [i_2] [(signed char)3] [i_2] [(unsigned char)7] [i_2 - 1])) ? ((-(var_2))) : (min((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0])), (var_8)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        arr_19 [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 10617624438946110631ULL)) ? ((+(arr_8 [(unsigned short)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (arr_17 [i_0 - 2] [i_1] [i_1] [i_5] [i_2])))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (arr_17 [(short)11] [(short)11] [i_2 - 1] [i_5] [i_5 + 2]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_12 [i_5] [10ULL] [i_1] [i_0] [i_5])))));
                        var_17 = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_5] [i_0 + 2] [i_0 + 3]));
                        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5 - 1] [i_1] [i_2 - 1]))) : (3638482196U)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))));
                    }
                }
            } 
        } 
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (((-(((/* implicit */int) var_0)))) > (((/* implicit */int) ((14336U) <= (var_7))))))) : (((/* implicit */int) ((unsigned char) 8664701482476680592ULL)))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0 + 3] [(signed char)1]))) ? (((unsigned int) arr_9 [i_0] [i_0] [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 - 2])) : (((/* implicit */unsigned int) 2147483640))));
        arr_20 [i_0 - 2] = ((/* implicit */short) max((((unsigned short) var_5)), (((/* implicit */unsigned short) max((arr_0 [i_0 - 2] [i_0 - 2]), (arr_0 [i_0 - 2] [i_0 - 1]))))));
    }
}
