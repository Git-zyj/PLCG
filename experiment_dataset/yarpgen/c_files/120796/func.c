/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120796
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
    var_19 -= ((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned char) var_17))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 6; i_2 += 3) 
            {
                {
                    var_20 |= arr_3 [i_2 + 1] [i_2] [i_2 + 3];
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_4 [i_3 + 1])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2 + 1])) ? (arr_1 [i_2 + 2]) : (((/* implicit */int) (unsigned char)220)))) : ((-(((/* implicit */int) arr_2 [7ULL] [i_1] [i_2 - 1])))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_2 - 4] [i_2 - 4] [i_2] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [6LL]))) ^ (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) arr_6 [i_1] [i_2 + 3] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_5 [i_4] [(signed char)5]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_24 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_1] [i_4]);
                            arr_14 [i_1] [i_2] [i_2] [i_4] [i_1] [i_3 - 1] [i_1] = ((/* implicit */signed char) var_7);
                            arr_15 [i_4] = ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2 - 1] [i_3 + 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (max((arr_9 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [i_4]), (((/* implicit */long long int) var_4))))))) : (arr_5 [i_1] [i_1]));
                        }
                    }
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned char)139))))) - (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 3] [i_2 - 4] [i_2]))))))));
                }
            } 
        } 
        var_26 = (unsigned char)255;
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_27 = (!(((/* implicit */_Bool) arr_17 [i_5])));
        var_28 = ((/* implicit */unsigned char) arr_18 [i_5]);
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 23; i_6 += 2) 
        {
            arr_21 [i_5] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) (unsigned char)16)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_5])))))));
            arr_22 [(unsigned short)5] [i_6 - 2] [i_5] = ((/* implicit */unsigned char) 18446744073709551615ULL);
            var_29 = (unsigned char)113;
            arr_23 [i_5] [i_6] [i_5] = 0U;
        }
    }
}
