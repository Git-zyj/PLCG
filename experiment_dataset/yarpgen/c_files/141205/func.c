/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141205
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65523)) ? (var_10) : (var_11)));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0 + 1]);
        arr_4 [i_0 + 3] = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (904867110U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9382))))))) & (max((((/* implicit */unsigned int) (unsigned char)24)), (1252547034U)))));
        arr_5 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (short i_1 = 3; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [(unsigned char)13] = ((/* implicit */unsigned int) ((unsigned short) 803878777U));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_8 [i_1 - 1]))));
        arr_10 [i_1 + 1] = ((((/* implicit */_Bool) max(((-(16776704U))), (min((((/* implicit */unsigned int) arr_0 [11ULL])), (var_10)))))) ? (((((/* implicit */_Bool) (unsigned short)65523)) ? (arr_8 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30172))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21260))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                arr_23 [(short)15] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)90))))))) ? (((((/* implicit */_Bool) (unsigned short)32512)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (32760ULL))) : (((/* implicit */unsigned long long int) ((3390100185U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3390100185U)) ? (8126464U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19290)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_15 [(unsigned short)15] [(short)12] [i_2] [i_1])) <= (((/* implicit */int) arr_1 [i_1] [i_4]))))) : ((-(((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) arr_12 [i_5] [i_4] [i_3])), (arr_19 [i_5] [i_4] [i_4] [i_3] [i_2] [(short)13])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0)))) : (max((2582987481177282823ULL), (((/* implicit */unsigned long long int) arr_6 [i_2])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_3))))))));
                            }
                        } 
                    } 
                    var_17 = arr_1 [i_1] [i_2];
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((+(arr_18 [i_3] [i_3] [18U] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [i_1 - 1] [i_1 + 1]), (arr_2 [i_1 - 1] [i_1 + 3]))))))))));
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_11))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)65506)) <= (((/* implicit */int) var_3)))))))));
    var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_13))));
    var_22 = ((/* implicit */signed char) ((unsigned int) var_13));
}
