/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104598
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
    var_14 |= ((/* implicit */unsigned long long int) 0U);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max((max((11ULL), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((arr_2 [i_0 - 1] [i_0]), (arr_2 [i_0 - 1] [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((-((-(arr_3 [i_0] [i_0]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4920401862339415698ULL)))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                arr_9 [i_0] = var_12;
                var_16 = (~(((unsigned int) 4057065985U)));
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((unsigned long long int) 0U)))));
            }
            /* LoopNest 2 */
            for (unsigned int i_3 = 4; i_3 < 14; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0])) && (((/* implicit */_Bool) max((var_13), (var_4)))))))));
                        var_18 = (-(max((237901311U), (arr_15 [i_0]))));
                    }
                } 
            } 
            arr_16 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) 4294967295U)) % (arr_1 [i_0] [i_1]))));
        }
    }
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (unsigned int i_7 = 3; i_7 < 18; i_7 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7 + 3] [i_7 + 3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_20 [i_7 + 2] [i_7 - 2] [i_7 - 2])))) : (((/* implicit */unsigned long long int) arr_24 [i_7 + 3] [i_7 + 1] [i_7]))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_20 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_27 [i_7 - 3]))))));
                                var_21 += 4294967295U;
                                arr_30 [i_9] [i_8] [i_7] [i_6] [19ULL] = ((unsigned long long int) var_7);
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (arr_28 [i_5] [15ULL] [15ULL] [i_8] [i_9])));
                            }
                        } 
                    } 
                    arr_31 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_24 [i_7 - 2] [i_6] [i_7])))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_25 [i_5]))), (min((((9941351124808781566ULL) - (((/* implicit */unsigned long long int) 2242135833U)))), ((+(6782100445445879016ULL)))))));
        var_24 = (+(18446744073709551613ULL));
        arr_32 [i_5] = min((((/* implicit */unsigned long long int) ((arr_21 [i_5] [i_5] [i_5]) - (arr_21 [i_5] [i_5] [i_5])))), (((unsigned long long int) 0U)));
    }
    var_25 |= ((/* implicit */unsigned int) var_5);
    var_26 |= ((/* implicit */unsigned long long int) ((var_1) - (((unsigned int) var_3))));
}
