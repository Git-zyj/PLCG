/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145020
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0] [1LL] [i_0]);
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (unsigned char)245)) / (((/* implicit */int) (unsigned short)49830)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) ((signed char) arr_13 [i_2]));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_6 = 4; i_6 < 12; i_6 += 1) 
                            {
                                arr_24 [i_2] [i_2] [i_4] [i_5] [i_2] = ((/* implicit */short) (unsigned short)15702);
                                arr_25 [i_2] [i_2] [i_3] [i_4] [(short)2] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6] [i_5] [i_4] [i_3] [i_2] [i_2])) ? (arr_2 [i_2] [i_3] [i_6]) : (arr_22 [i_2] [i_2] [i_4] [(signed char)8])))) || (((((/* implicit */_Bool) 5402577334297020784LL)) && (((/* implicit */_Bool) arr_1 [i_3]))))))), (arr_18 [i_2] [i_3] [2LL] [i_5])));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_7 = 4; i_7 < 12; i_7 += 4) 
                            {
                                arr_28 [i_2] [10] [10] [10] [i_7] [(unsigned short)2] [13LL] = -5597779869586980757LL;
                                var_16 = (+(((/* implicit */int) arr_20 [i_2] [i_3] [i_7 - 1] [i_7 - 1] [i_7 + 1])));
                                arr_29 [i_7] [i_2] [9] [i_2] = ((/* implicit */signed char) arr_19 [(unsigned char)8] [i_7 - 1] [i_3] [i_5] [i_3] [i_5]);
                                var_17 |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)40041))) - (-5402577334297020804LL)));
                            }
                            /* LoopSeq 1 */
                            for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_30 [i_3])), (min(((unsigned short)0), ((unsigned short)22523)))))) / ((+(arr_22 [i_8] [i_5] [i_3] [i_3])))));
                                arr_32 [i_2] [(unsigned char)2] [i_2] [i_5] [i_8] [i_4] [(unsigned char)2] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) arr_3 [i_4] [i_4] [i_8]))), (min((min((((/* implicit */long long int) (unsigned char)52)), (arr_8 [i_3]))), (5402577334297020818LL)))));
                                arr_33 [i_8] [i_5] [2U] [i_4] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((min((arr_0 [i_8]), (arr_0 [i_4]))) + ((-(arr_0 [i_4])))));
                                var_19 = arr_21 [i_4];
                            }
                            arr_34 [i_2] [i_2] [i_4] [i_5] = ((/* implicit */signed char) arr_7 [i_5]);
                            arr_35 [(short)8] [i_3] [i_3] [i_3] [(unsigned char)9] [i_5] = arr_0 [i_4];
                            var_20 = ((/* implicit */signed char) min((11424156664329989240ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
}
