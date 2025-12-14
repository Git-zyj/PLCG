/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151911
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
    var_18 = max((((/* implicit */long long int) ((unsigned int) var_7))), (var_0));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = min((((/* implicit */long long int) min((arr_0 [i_0] [i_1]), (max((var_3), (arr_0 [i_1] [i_0])))))), (((arr_0 [i_0] [i_1]) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((arr_0 [i_0] [i_1]) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))) ? (((((arr_0 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : (arr_2 [i_0]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_4 = 2; i_4 < 20; i_4 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 + 1] [i_3] [i_4])) ? (((/* implicit */int) arr_7 [20LL] [9U] [i_2] [i_4])) : (((/* implicit */int) arr_1 [i_0]))))), (arr_2 [i_2 + 1])))));
                                var_21 = ((/* implicit */signed char) min((((/* implicit */int) arr_3 [i_0])), ((-(arr_6 [i_3])))));
                                var_22 = ((/* implicit */int) arr_1 [i_1]);
                                arr_14 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])) ? (max((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_2] [i_3])), (((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3])))));
                            }
                            arr_15 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */short) (+(((/* implicit */int) ((max((((/* implicit */long long int) arr_6 [i_1])), (var_13))) > (max((var_2), (((/* implicit */long long int) var_16)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    {
                        arr_25 [i_7] = ((/* implicit */short) max((arr_12 [i_5] [i_6] [(unsigned char)5] [i_7] [i_8]), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_6])) || (((/* implicit */_Bool) arr_22 [i_5] [i_6] [i_7])))) || (((/* implicit */_Bool) min((arr_9 [i_5] [i_6] [i_7] [i_5] [i_7]), (((/* implicit */long long int) var_6))))))))));
                        var_23 *= ((/* implicit */unsigned char) ((arr_19 [i_6]) - ((~((~(arr_21 [i_5] [i_6] [i_7] [i_8])))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_5]);
        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_1 [i_5]), (((/* implicit */short) arr_11 [i_5] [i_5] [i_5]))))) - (((/* implicit */int) ((arr_21 [i_5] [(unsigned char)3] [i_5] [i_5]) >= (arr_21 [i_5] [i_5] [i_5] [i_5]))))));
        arr_26 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_17 [i_5] [i_5])) / (((/* implicit */int) arr_11 [i_5] [i_5] [i_5])))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) ((var_4) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
    }
}
