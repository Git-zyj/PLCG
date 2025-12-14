/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104067
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_1 [i_0])) | (((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) arr_1 [i_0]))))));
        var_21 = ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))) ? (((/* implicit */unsigned int) (+(arr_1 [2ULL])))) : (arr_0 [i_0])));
        /* LoopNest 3 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) (short)8);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8727)) ? (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_2 + 4] [i_3]))) : (arr_5 [i_0] [i_2] [i_4]))) : (((arr_5 [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (short)8)))))));
                            var_24 = ((/* implicit */signed char) var_13);
                            arr_12 [i_1] = ((/* implicit */unsigned int) ((arr_0 [i_4]) == (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_0 [i_4]))))));
                            arr_13 [i_4] |= ((/* implicit */int) ((signed char) ((short) arr_5 [i_0] [i_0] [i_2])));
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)35))) & (var_3))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_14)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)7))))))))));
}
