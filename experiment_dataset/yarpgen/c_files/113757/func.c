/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113757
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
    for (int i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) > (var_1))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned char) 5470259276132133488LL);
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1])) && (((/* implicit */_Bool) 5470259276132133488LL))));
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) (unsigned char)44);
                        }
                        var_14 = ((/* implicit */unsigned int) min((var_14), (arr_1 [i_0])));
                        /* LoopSeq 1 */
                        for (int i_5 = 2; i_5 < 9; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_0] [i_2] [i_3] [i_2])) ? (((/* implicit */int) (unsigned char)44)) : (arr_9 [i_0] [(unsigned char)9] [i_2 + 2] [i_2 + 2] [i_0])));
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((((/* implicit */_Bool) 662418187U)) ? (662418187U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5]))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))))))));
                            var_16 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) < (arr_0 [i_0] [i_0]));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 8; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            {
                                arr_25 [i_0] [(unsigned short)4] = ((/* implicit */_Bool) ((int) arr_6 [i_0]));
                                var_17 = ((/* implicit */signed char) arr_0 [i_0] [i_6]);
                            }
                        } 
                    } 
                    var_18 = (-(((/* implicit */int) (!(((/* implicit */_Bool) -2089387772))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 3632549092U)) ? (4611686018427387904LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)44)))));
}
