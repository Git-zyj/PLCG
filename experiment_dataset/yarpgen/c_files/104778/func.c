/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104778
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */signed char) ((unsigned int) arr_4 [i_1 - 1]));
                        var_20 = ((/* implicit */unsigned int) ((var_7) / (arr_0 [i_0])));
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_1] [i_2 - 1] = ((/* implicit */unsigned char) ((unsigned int) arr_8 [i_3] [i_3] [i_3]));
                        arr_14 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) var_7);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            arr_17 [i_0] [i_1 + 1] [i_1 - 1] [i_2 - 1] [i_1] [i_3] [16LL] = ((arr_3 [i_1 + 1]) & (562949416550400LL));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)224)) / (((/* implicit */int) (unsigned char)32))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (signed char)-97))))) ^ (((/* implicit */int) arr_1 [i_1 - 2]))));
                            var_23 = ((/* implicit */long long int) var_11);
                            var_24 = ((/* implicit */unsigned int) arr_9 [(unsigned char)8] [(unsigned char)8] [(unsigned char)16] [i_4 - 2]);
                        }
                    }
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        arr_21 [i_1] [i_1] = ((/* implicit */signed char) (+(9223372036854775807LL)));
                        var_25 = ((/* implicit */unsigned int) var_16);
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) (((((-(arr_0 [i_5]))) ^ (((/* implicit */long long int) ((unsigned int) 4294967295U))))) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239)))));
                            var_27 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) arr_10 [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 3])), (var_16))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-2)), (arr_5 [i_1 - 1] [i_1]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_28 = ((unsigned int) 126U);
                            var_29 &= arr_12 [i_0] [i_1] [i_1] [i_5] [i_7];
                            var_30 = ((/* implicit */unsigned char) 2715982713U);
                            var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_28 [i_1 - 3] [i_1] [i_0] [i_1] [i_0]))));
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) var_9))));
                        }
                        var_33 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)210))));
                    }
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((4294967286U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_2] [i_0] [i_1 - 2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        for (unsigned int i_9 = 2; i_9 < 10; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [(signed char)12] [13LL] [i_9 + 3] [i_9 - 2] [i_9 + 3] [i_9 + 3] [i_9])) + (((/* implicit */int) arr_27 [i_9] [i_9] [i_9 + 3] [i_9] [i_9] [i_9] [i_9]))))) ? (max((var_12), (((/* implicit */long long int) (signed char)-97)))) : (((/* implicit */long long int) ((var_3) / (1578984557U))))));
                    var_36 = ((/* implicit */signed char) var_16);
                    var_37 |= (+(min((((unsigned int) var_10)), (arr_6 [i_9 - 2] [i_9 - 2] [i_9 - 1]))));
                }
            } 
        } 
    } 
}
