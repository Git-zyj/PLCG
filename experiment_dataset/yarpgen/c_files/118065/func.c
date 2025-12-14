/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118065
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
    var_20 = ((/* implicit */short) ((var_4) + (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) | (-1)))) / (((var_7) - (0U))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) arr_0 [i_0] [14U])) : (((((/* implicit */int) arr_1 [(unsigned short)14] [14U])) * (((/* implicit */int) arr_1 [6U] [6U]))))));
        arr_2 [i_0] = ((/* implicit */short) 2147483634);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_22 = arr_7 [i_0] [i_0];
                                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])) ? (arr_8 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4]))))) == (min((arr_5 [i_0] [i_0]), (arr_6 [15U] [i_1] [i_4])))))), ((~(((/* implicit */int) arr_0 [i_2] [i_2])))))))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((6447480283734995880LL) > (((/* implicit */long long int) arr_6 [i_2 + 2] [i_3] [i_4 - 1]))))), (arr_6 [i_2 + 1] [i_2 + 1] [i_4 + 4]))))));
                                var_25 |= ((/* implicit */short) ((unsigned char) ((((unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */unsigned int) -970891970)))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [(signed char)16] [i_1] [i_2]))))) / (min((4294967280U), (2148340167U))))) | (max((((/* implicit */unsigned int) arr_9 [i_2] [10] [i_2 + 2] [i_2] [i_2] [4LL])), (arr_5 [i_0] [i_1]))))))));
                    var_27 = ((/* implicit */int) ((long long int) ((min((arr_5 [(signed char)8] [(signed char)8]), (arr_7 [(unsigned short)12] [i_0]))) < (arr_13 [12LL] [i_0] [i_2 + 1] [i_2]))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(max(((-(arr_4 [i_0]))), (max(((-2147483647 - 1)), ((-2147483647 - 1))))))));
                }
            } 
        } 
    }
}
