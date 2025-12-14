/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124884
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
    var_10 = ((/* implicit */long long int) 10832220201769889550ULL);
    var_11 = ((/* implicit */long long int) -273067945);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_2] [i_0] [(unsigned char)11] [i_0] = ((/* implicit */unsigned short) max((var_6), (((/* implicit */int) ((short) (unsigned short)22648)))));
                        var_12 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned short)22])))) * (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1]))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) arr_7 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_18 [i_0] [i_1] [i_0] [(short)15] [(short)15] [i_2] [i_2] = ((/* implicit */signed char) var_4);
                            var_14 = ((/* implicit */long long int) var_0);
                        }
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_21 [i_0] [(signed char)9] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_1]))));
                        var_15 = ((/* implicit */_Bool) 13606861532850276100ULL);
                    }
                    arr_22 [i_0] = ((/* implicit */int) (~(((unsigned int) var_3))));
                    arr_23 [i_0] [i_0] = max((((/* implicit */unsigned long long int) var_5)), (var_2));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_2] [i_0] [i_8] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)43))))) | (max((((/* implicit */unsigned long long int) var_8)), (max((var_9), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [i_2] [i_8]))))))));
                                var_16 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                                var_17 = ((/* implicit */long long int) max((max((((/* implicit */int) ((arr_2 [i_0] [i_0] [15LL]) && (arr_25 [i_0] [i_7] [i_2] [i_7])))), (((((/* implicit */int) var_8)) | (var_6))))), (((((/* implicit */int) var_8)) << (((((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_8)))) - (101)))))));
                                arr_30 [i_0] [i_7] [i_0] [(short)11] [i_0] = (~(((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_1 [i_0] [(unsigned char)2])), (arr_6 [i_8] [i_1] [i_0] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
