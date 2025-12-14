/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161855
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
    var_19 = max((-1531909841002546988LL), (((/* implicit */long long int) 2010888056)));
    var_20 = ((/* implicit */unsigned long long int) var_14);
    var_21 -= ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [16] [i_2] = ((/* implicit */unsigned int) max(((signed char)-45), ((signed char)44)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [(signed char)7] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) ((var_5) / (((/* implicit */long long int) arr_3 [i_3] [i_2]))));
                        arr_13 [i_0] [i_0 + 1] [i_1 - 2] [i_2] [i_3] = ((/* implicit */_Bool) (signed char)-45);
                        var_22 = ((/* implicit */unsigned int) arr_2 [i_1 - 3] [i_0 + 1]);
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_0 - 1] [i_1 + 3])) >= ((+(((/* implicit */int) var_4))))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((arr_3 [i_1] [i_1]) << (((arr_6 [i_1] [i_1 - 1] [2LL]) - (17115352971613244616ULL)))))));
                            arr_18 [i_0] [i_1] [(short)1] [i_2] [i_4] = ((/* implicit */int) arr_3 [i_0 + 1] [i_0]);
                            arr_19 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(var_7)));
                        }
                        for (int i_5 = 3; i_5 < 18; i_5 += 1) 
                        {
                            arr_22 [i_5] [i_2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_1 - 4])) | (var_18)));
                            arr_23 [i_0] [i_1 - 4] [i_2] [i_2] [i_2] [i_3] [i_5] = (+(((/* implicit */int) var_2)));
                        }
                        for (long long int i_6 = 3; i_6 < 18; i_6 += 4) 
                        {
                            arr_26 [i_3] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */signed char) arr_3 [i_1 + 1] [i_6 - 2]);
                            arr_27 [i_2] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) (unsigned char)27))));
                        }
                    }
                }
            } 
        } 
    } 
}
