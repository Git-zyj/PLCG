/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111899
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
    var_10 = ((/* implicit */unsigned short) ((var_3) << (max((var_0), (((/* implicit */long long int) var_2))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 3; i_2 < 11; i_2 += 3) 
                {
                    var_11 = ((/* implicit */long long int) var_8);
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((int) arr_0 [i_1])))));
                }
                for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    var_13 = ((/* implicit */int) (-(arr_4 [i_0 + 2] [i_3 - 1])));
                    var_14 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) arr_6 [i_0] [i_1])) >> (((/* implicit */int) ((arr_4 [i_0 + 2] [i_0 + 2]) == (((/* implicit */unsigned int) arr_0 [i_3])))))))));
                    var_15 -= ((/* implicit */unsigned short) ((long long int) (+(((/* implicit */int) arr_13 [i_0 - 1])))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_13 [i_0])), (((((/* implicit */_Bool) ((int) arr_0 [i_1]))) ? (min((((/* implicit */unsigned long long int) arr_2 [i_5 - 2])), (arr_14 [i_0 + 2] [i_1] [10ULL] [i_3] [(unsigned char)11] [10ULL]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (var_3)))))));
                                var_17 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_12 [i_0 + 1] [i_3 - 1] [i_4])) << (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_9 [i_1] [i_3 + 1] [i_4])))))))));
                                arr_19 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_4] [i_5]))) == (var_9)))) % (((/* implicit */int) arr_9 [i_0] [i_3] [i_4]))))) > (arr_17 [(unsigned char)11] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                            }
                        } 
                    } 
                    var_18 ^= (-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0 + 2] [2ULL] [i_3 - 1])) > (((/* implicit */int) arr_10 [i_0 - 1] [i_1] [i_3 + 1]))))));
                }
                var_19 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_0 + 2])), (min((((((/* implicit */_Bool) 2110569547515194476LL)) ? (((/* implicit */int) arr_7 [i_1] [5ULL] [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_1])))), (((/* implicit */int) ((signed char) arr_8 [i_0])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_6 = 4; i_6 < 13; i_6 += 1) 
                {
                    arr_22 [i_0] [i_1] [i_6] = ((/* implicit */unsigned short) (+(((((/* implicit */int) var_1)) / (((/* implicit */int) var_2))))));
                    arr_23 [i_1] [4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_6 + 1] [i_6] [3LL] [i_6] [i_1] [i_0 - 1])) ? (arr_14 [i_6 - 1] [i_6] [i_6] [i_0] [i_0] [i_0 + 1]) : (arr_14 [i_6 - 2] [i_6 - 3] [i_6 - 4] [i_6] [i_0] [i_0 - 1])));
                    var_20 = ((/* implicit */unsigned short) arr_0 [i_6]);
                }
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_2);
    var_22 = ((/* implicit */signed char) var_8);
}
