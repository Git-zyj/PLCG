/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173480
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
    var_14 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-85)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (short)-29763))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_7 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [(unsigned short)8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((signed char) var_10));
                            var_18 *= ((/* implicit */short) ((unsigned long long int) arr_1 [i_1 + 1]));
                            var_19 = ((/* implicit */unsigned int) (unsigned char)255);
                        }
                        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            var_20 *= ((/* implicit */short) (signed char)-85);
                            var_21 = ((/* implicit */unsigned int) max((arr_6 [i_5 + 3] [i_5] [i_5]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_5 + 1] [i_5 + 3] [i_1])))))));
                            arr_14 [i_1] [(unsigned char)11] [i_1] [i_2] [i_3] [15ULL] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)1)), ((unsigned short)26701))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_3))));
                        }
                        arr_15 [i_3] [i_3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */short) (~(1467564785U)));
                        var_23 = ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))) ^ (2827402500U)));
                        var_24 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 1] [i_1 - 1] [11ULL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1] [10ULL]))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0]);
        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [3LL] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) arr_10 [0ULL] [i_0] [i_0] [11ULL]))))) ? (((/* implicit */int) arr_1 [i_0])) : (arr_4 [17ULL] [i_0] [17ULL] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) 2827402500U)) || (((/* implicit */_Bool) (signed char)83)))))));
    }
}
