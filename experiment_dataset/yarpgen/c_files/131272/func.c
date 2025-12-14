/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131272
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            arr_12 [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [i_2] [i_1]))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_2])) != (arr_11 [12LL])))))))) - (((/* implicit */int) (!(((((/* implicit */_Bool) arr_5 [i_0] [i_2])) && (var_6))))))));
                            var_16 = (i_2 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2]))) | (((arr_7 [i_0] [(unsigned char)19] [i_0]) >> (((arr_8 [i_1] [i_1] [i_2]) - (3040317835256557727LL)))))))) ? (min(((+(((/* implicit */int) arr_5 [i_0] [(signed char)4])))), (((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < ((+(((/* implicit */int) (signed char)-82)))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2]))) | (((arr_7 [i_0] [(unsigned char)19] [i_0]) >> (((((arr_8 [i_1] [i_1] [i_2]) - (3040317835256557727LL))) - (6017858737131650771LL)))))))) ? (min(((+(((/* implicit */int) arr_5 [i_0] [(signed char)4])))), (((/* implicit */int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < ((+(((/* implicit */int) (signed char)-82))))))))));
                            var_17 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_4 [i_2])), (min((var_0), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((~(arr_2 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_6))))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) arr_9 [i_0] [i_1]);
                arr_13 [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) (+(((arr_2 [i_0]) / (var_12)))))) ? ((((-(var_11))) & (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (+((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (var_5))))))));
    var_20 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (_Bool)1))))));
}
