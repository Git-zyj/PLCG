/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121382
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
    var_19 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 = max((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)30186)) : (((/* implicit */int) var_12)))), (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))))), (var_14)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 ^= ((/* implicit */unsigned short) (!(arr_6 [i_1])));
                        var_22 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_13))))));
                        arr_11 [i_2] = ((/* implicit */unsigned short) ((arr_1 [i_0 + 1]) & (arr_1 [i_0 + 1])));
                    }
                    for (int i_4 = 1; i_4 < 21; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) min((min((arr_3 [i_0 + 4]), (arr_3 [i_0 + 2]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_15)))))));
                        var_24 = ((/* implicit */unsigned int) var_15);
                    }
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) -540581598);
                        var_26 = ((/* implicit */_Bool) (~((+(((((/* implicit */int) arr_6 [i_2])) + (((/* implicit */int) var_14))))))));
                        arr_17 [i_0 - 1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((long long int) arr_4 [i_0 + 1] [i_0 + 4])) / (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_0 + 3] [i_0 + 4])))))));
                        var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) var_16)) / (arr_0 [i_1] [i_5 - 1])))));
                        var_28 *= ((/* implicit */long long int) ((((/* implicit */int) (!(var_7)))) >= ((+(arr_1 [i_0])))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))))));
}
