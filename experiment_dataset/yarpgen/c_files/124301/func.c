/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124301
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
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = max((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1])))))) ^ ((+(arr_8 [i_0] [i_1] [i_1] [i_0] [(_Bool)1]))))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) < (((/* implicit */int) arr_0 [i_4])))))))));
                                arr_12 [i_2] [i_1] [i_4] = ((/* implicit */short) (~(max((min((arr_10 [i_0 - 1] [i_0 - 2] [i_0] [i_0 + 2] [i_0] [i_0 + 2]), (((/* implicit */int) arr_3 [i_0 + 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22524)))))))));
                                var_11 = ((/* implicit */long long int) ((_Bool) (~((~((-9223372036854775807LL - 1LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_12 *= ((/* implicit */int) (!(((/* implicit */_Bool) max(((+(arr_16 [i_0] [i_1] [i_2] [i_6] [i_6] [i_5] [i_6]))), (9223372036854775807LL))))));
                                arr_17 [i_6] [i_1] [i_1] [i_1] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) (short)-17355);
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = ((_Bool) ((unsigned short) ((int) arr_10 [i_0 - 2] [i_0 - 2] [i_2] [i_2] [i_6] [i_6])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_22 [i_0 - 3] [i_1] [i_0] [i_7] [i_7] = ((/* implicit */_Bool) arr_0 [i_0]);
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((7359878752446878874ULL), (((/* implicit */unsigned long long int) (+((~(arr_2 [i_1])))))))))));
                        arr_23 [8LL] [i_1] [6U] |= ((/* implicit */unsigned char) 8746451237808789650ULL);
                        arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_1 [i_2]);
                    }
                    for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_14 = ((/* implicit */short) (-(((/* implicit */int) arr_11 [i_0] [i_0] [9LL] [i_1] [i_2] [i_8]))));
                        var_15 = ((/* implicit */unsigned int) ((((unsigned long long int) (-(arr_7 [i_1] [11LL] [11LL] [i_1])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_0 + 2])))))))))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((arr_19 [i_8] [i_1] [i_1] [i_0]) << (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_9 [i_0 - 1] [2LL])))))))))));
                        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(arr_16 [i_1] [i_1] [i_2] [14U] [i_2] [i_8] [i_8]))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (~((-((-(((/* implicit */int) var_5)))))))))));
    var_19 = ((/* implicit */long long int) 11086865321262672742ULL);
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) arr_8 [i_9] [1U] [i_11] [1U] [i_11]);
                    var_21 = ((/* implicit */short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_26 [i_9] [(unsigned char)12]), (((/* implicit */short) (_Bool)1)))))))), ((unsigned char)91)));
                    var_22 *= ((/* implicit */int) ((arr_29 [i_9] [1LL]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) && (((/* implicit */_Bool) ((unsigned char) arr_35 [i_9] [7LL] [i_9])))))))));
                }
            } 
        } 
    } 
}
