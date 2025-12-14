/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161371
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0]) * (arr_2 [i_0])))) ? ((+(arr_2 [i_0]))) : (((arr_2 [i_0]) * (arr_2 [i_0])))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_8 [i_0] = (+(min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (arr_1 [i_0]))));
                    arr_9 [i_0] [(unsigned short)8] [i_0] = ((/* implicit */short) (((~(1612802243U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_6 [i_0] [i_0] [i_1] [i_2]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(signed char)5] [(signed char)5])))))))));
                    var_15 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_4 [i_0] [i_2])) - ((-(((/* implicit */int) (unsigned short)32596))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_16 = max((((/* implicit */unsigned long long int) arr_14 [3U] [3U] [3U] [i_3 + 1] [i_4] [i_4] [i_4])), (((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))));
                                arr_16 [(signed char)8] [(signed char)8] [(signed char)8] [i_0] [i_4] = (!(((/* implicit */_Bool) 2409124529959271757ULL)));
                            }
                        } 
                    } 
                }
                var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_12 [i_0] [i_0] [i_0] [(unsigned short)7] [i_0] [i_0]) > (arr_2 [8U]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_0] [i_0] [6ULL] [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)27826)) ? (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27624)))))) ? ((~(arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_0 [(short)2])))))))));
            }
        } 
    } 
    var_18 = max(((unsigned short)34771), ((unsigned short)30764));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_9))) ? ((+(var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_14))))), (min((((/* implicit */unsigned long long int) var_6)), (var_8)))))));
}
