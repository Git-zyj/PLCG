/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176718
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [(short)15] = var_1;
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_2] [20U] [i_0])) : (((/* implicit */int) (unsigned char)224))))) ? (5932681163930264541LL) : (((var_3) ? (-8414661866415672424LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 + 2] [i_3 - 1] [i_1])) ? (((/* implicit */unsigned long long int) 2377425511U)) : (arr_8 [i_3 - 1] [i_3 + 2] [i_3 + 1] [11U]))))));
                        arr_10 [13] [i_1] [i_2] [i_3 + 1] = ((/* implicit */_Bool) (((_Bool)1) ? (186827965U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)11)))));
                        var_19 += ((((/* implicit */_Bool) arr_8 [i_0] [i_3 - 1] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (arr_8 [i_0] [i_3 - 1] [i_2] [i_3]));
                    }
                }
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)6)))))) : (arr_0 [i_0] [11U])))) ? (var_16) : (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_0))) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 3; i_6 < 20; i_6 += 2) 
                        {
                            var_21 &= ((/* implicit */_Bool) (+((-(8ULL)))));
                            arr_18 [i_0] [i_1] [i_4] [i_5] [i_6 + 3] [i_6] = arr_16 [i_0] [i_6] [i_1] [i_1] [i_4] [i_5] [i_6 + 2];
                            var_22 = ((((/* implicit */_Bool) ((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)51617))))) : (((unsigned long long int) arr_13 [i_0] [i_0])));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_5] [i_4] [i_0])) ? (((/* implicit */int) arr_3 [i_5] [i_4] [i_0])) : (((/* implicit */int) (unsigned char)198))));
                        arr_19 [i_0] [(signed char)7] [i_0] [i_0] = ((/* implicit */unsigned int) var_14);
                        var_24 = ((/* implicit */int) ((1798623806888533247ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [8ULL])))));
                        var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (arr_14 [i_0]) : (((/* implicit */int) var_3))));
                    }
                    arr_20 [(_Bool)1] [(short)1] = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                    arr_21 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17636927575426789125ULL)) ? (-2809885481787729800LL) : (((/* implicit */long long int) 2954026934U))));
                }
                arr_22 [14U] [i_1] [1ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned int) var_9)), (((/* implicit */unsigned int) ((var_4) && (((/* implicit */_Bool) 3341815149U)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1]))))) : (((/* implicit */int) ((unsigned short) (unsigned char)197)))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2377425522U)) ? (8440559856774333526LL) : (((/* implicit */long long int) 2208781630U))))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_16)) : ((-(var_15))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(var_16)))), (var_1))))));
    var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)126)) & (((/* implicit */int) var_3)))), (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_13)))))) : ((+(((/* implicit */int) var_4))))));
    var_28 = ((/* implicit */_Bool) var_12);
}
