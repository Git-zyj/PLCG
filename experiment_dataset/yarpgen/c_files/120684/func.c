/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120684
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
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) var_18)), (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_13))) << (((((/* implicit */int) var_17)) - (51208)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (((((_Bool)1) || (((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_4 [i_1 - 2] [i_1 - 1] [i_1 + 1])), (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 2]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [0U]))) * (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (_Bool)1))));
                        arr_11 [i_3] [i_2] [i_2] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_1 - 2] [(signed char)15] [i_1 - 2])) ? (((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) max(((unsigned short)64591), (((/* implicit */unsigned short) (signed char)14)))))))) / (((((/* implicit */_Bool) arr_10 [i_3 - 3] [i_0] [i_2] [i_3 + 2] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) arr_0 [i_2])))))) : (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) (unsigned char)237))))))));
                        var_22 = ((/* implicit */unsigned long long int) max((arr_4 [i_3 - 3] [i_1 - 1] [i_1 - 2]), (((4019980656U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_23 = ((/* implicit */signed char) min((((/* implicit */int) min((arr_7 [i_1 - 2] [(unsigned short)15] [i_3 + 2] [i_3 - 3]), (((/* implicit */short) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])))))))), (((((/* implicit */int) arr_7 [(signed char)12] [i_3 - 1] [i_2] [i_2])) % (((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_2] [7LL]))))));
                    }
                    arr_12 [i_1] [(unsigned short)20] = ((/* implicit */short) max((((/* implicit */unsigned int) arr_9 [i_2] [i_1 - 1] [i_1] [i_1 - 2] [i_0] [i_0])), ((-(max((arr_10 [i_0] [i_0] [(signed char)5] [(signed char)19] [i_0]), (((/* implicit */unsigned int) (_Bool)1))))))));
                    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-23911)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (-(var_16)));
}
