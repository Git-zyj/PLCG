/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132068
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 4; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [3LL] [(signed char)14])) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 + 2] [i_2] [i_0] [i_1] [i_0] [i_0]))) - (12573403974549493840ULL))), (min((arr_6 [i_0] [i_1] [i_1] [i_1] [i_3]), (((/* implicit */unsigned long long int) var_8))))))));
                        arr_9 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) max((1489089088U), (8388607U)));
                        /* LoopSeq 1 */
                        for (short i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            var_13 *= ((/* implicit */signed char) var_6);
                            var_14 ^= ((/* implicit */int) ((short) (-(min((((/* implicit */long long int) 1555951168)), (-27849096127262615LL))))));
                            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)1247))));
                        }
                    }
                    /* vectorizable */
                    for (short i_5 = 4; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_16 += ((/* implicit */_Bool) ((var_4) ? (arr_13 [i_1] [i_1]) : (((((/* implicit */_Bool) (unsigned short)8724)) ? (arr_0 [i_0]) : (147559000U)))));
                        arr_15 [i_5] [i_5] [i_2] [i_5] [i_1] [i_5] &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_2] [i_5]))));
                    }
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0 + 3]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
                    arr_16 [(unsigned short)1] [(unsigned short)1] [i_2] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1322670819984913286LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0]))) : (arr_13 [(short)18] [i_0])))) ? (max((12270688663405403431ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)10), (((/* implicit */signed char) arr_12 [i_0] [i_0]))))))))));
                    var_18 = ((/* implicit */unsigned short) ((max((arr_13 [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned int) (short)27157)))) * (((arr_13 [i_0 - 3] [i_0 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-72)) || ((_Bool)1))))) : (0U)))) ? (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) var_1)) : (((var_4) ? (((/* implicit */int) (unsigned short)59293)) : (0))))) : (var_3)));
    var_20 = ((/* implicit */_Bool) var_8);
}
