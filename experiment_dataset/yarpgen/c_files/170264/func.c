/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170264
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [(unsigned char)14] = ((/* implicit */unsigned char) 1292937276);
        arr_3 [i_0] = ((/* implicit */short) (unsigned short)9983);
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_2] [(short)2] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned short) (unsigned char)254)), ((unsigned short)55559))), (((/* implicit */unsigned short) min(((unsigned char)0), (arr_6 [i_1] [(unsigned short)9]))))));
                    var_18 = min((min((((/* implicit */unsigned long long int) arr_10 [i_1])), (var_0))), (min((arr_9 [i_1] [i_3] [i_3]), (10077635358277150249ULL))));
                }
            } 
        } 
        arr_14 [(unsigned char)0] = max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_10 [i_1])), (var_8)))), (min((((/* implicit */unsigned long long int) arr_10 [i_1])), (var_0))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) max((567675060121444507LL), (((/* implicit */long long int) (unsigned char)10))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                arr_24 [i_1] [i_1] [i_4] [(unsigned char)13] [i_6] [i_5] = ((/* implicit */unsigned char) max((min((16841251164031800283ULL), (((/* implicit */unsigned long long int) var_16)))), (min((8369108715432401366ULL), (((/* implicit */unsigned long long int) (unsigned short)10349))))));
                                var_20 = ((/* implicit */unsigned int) min((min((2923263954902414949ULL), (((/* implicit */unsigned long long int) 1152921504606846976LL)))), (min((2923263954902414949ULL), (var_0)))));
                                arr_25 [i_6] [2LL] [(unsigned char)14] [2LL] &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (short)-20156)), (10077635358277150250ULL)));
                                var_21 = ((/* implicit */unsigned short) max((min((10077635358277150249ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (arr_5 [14LL])))))), (max((min((((/* implicit */unsigned long long int) 1884578807)), (8369108715432401365ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_1 [i_6])), (arr_6 [i_4 + 1] [i_6]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) min((562812514467840LL), (((/* implicit */long long int) (unsigned char)120))));
    }
    var_23 = ((/* implicit */unsigned short) var_13);
}
