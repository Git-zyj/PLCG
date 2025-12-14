/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13220
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) ((int) 8790882590855737170LL));
                    /* LoopSeq 2 */
                    for (int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (((6441045739250021234LL) | (((/* implicit */long long int) (~(arr_7 [i_0] [i_0] [i_3]))))))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_0] = arr_1 [i_1];
                    }
                    for (long long int i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0])), (var_10)))) ? (((((/* implicit */_Bool) var_15)) ? (arr_9 [i_0] [i_1] [i_1] [2ULL] [i_2] [i_4 - 1]) : (((/* implicit */int) arr_13 [i_2])))) : (((/* implicit */int) arr_13 [i_4 + 2]))));
                        var_21 = ((/* implicit */unsigned long long int) arr_14 [8LL] [i_1] [i_1] [i_4]);
                    }
                }
                for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)43097)) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) (unsigned short)65535))))) : ((-(arr_10 [0ULL] [i_1] [i_5] [i_1])))));
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((arr_14 [i_0] [i_1] [i_1] [(unsigned short)11]) - (var_10))))));
                    arr_18 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) (+(-132219135664661090LL))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        arr_21 [i_0] [i_1] [i_0] [i_5] [i_6] = ((/* implicit */int) arr_3 [i_1] [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_23 [i_0] [(unsigned short)5] [i_0] [i_0] [i_0]))));
                            arr_25 [i_7] [7LL] [i_5] [i_5] [i_1] [7LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        }
                        arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0]);
                    }
                }
                for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    var_25 |= ((/* implicit */long long int) ((((/* implicit */_Bool) -8787819327825307158LL)) || (((/* implicit */_Bool) -8787819327825307153LL))));
                    var_26 = ((/* implicit */long long int) arr_17 [i_0] [i_1] [i_8]);
                }
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (~(arr_1 [6ULL]))))));
            }
        } 
    } 
}
