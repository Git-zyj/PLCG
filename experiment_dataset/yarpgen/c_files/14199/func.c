/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14199
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 226539540U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28903))) : (4U)))) ? (((((var_10) & (((/* implicit */long long int) var_9)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_8)))))));
    var_16 = ((/* implicit */int) max((4194272U), (((/* implicit */unsigned int) -734867496))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_1 + 2] [10LL] = ((/* implicit */short) max((9223372036854775807LL), (((/* implicit */long long int) 4194267U))));
                var_17 = min((min((((((/* implicit */int) arr_3 [i_0] [(signed char)10])) << (((((/* implicit */int) arr_2 [7] [i_1 - 1])) + (16581))))), (((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_1 [i_1 + 2] [0U])))))), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) > (var_5)))), (min((((/* implicit */unsigned char) var_13)), (arr_3 [i_0] [i_1 + 1])))))));
                var_18 = ((/* implicit */signed char) arr_3 [i_1 + 2] [i_1 - 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                var_19 = (~(((((/* implicit */_Bool) arr_8 [i_2] [i_3])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_6 [i_2])))));
                var_20 = min((((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (max((((/* implicit */int) arr_7 [i_2] [i_2])), (arr_5 [i_2]))) : (((/* implicit */int) arr_8 [i_2] [i_3])))), (((/* implicit */int) arr_8 [(unsigned char)9] [i_3])));
                /* LoopNest 2 */
                for (short i_4 = 4; i_4 < 16; i_4 += 3) 
                {
                    for (signed char i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-120))))) ? (arr_11 [i_5] [i_4 + 1] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned int) arr_5 [i_3]))));
                            var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_4 - 2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_9 [i_4 - 4] [i_4 - 3] [i_3]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_4 - 4] [i_3] [i_3]) != (arr_9 [i_4 + 1] [i_3] [i_2])))))));
                            var_23 = ((/* implicit */int) min((var_23), ((+(((((/* implicit */int) arr_12 [i_4 - 2] [i_5 + 1] [i_4] [(signed char)3])) / ((-(((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2]))))))))));
                            var_24 = (+(min((((/* implicit */unsigned int) 734867494)), (4294967273U))));
                            var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)246)) > (-734867490))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4 - 2] [i_5 - 2] [i_4]))) | (arr_9 [i_4 + 1] [i_5 - 1] [i_5 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        for (int i_8 = 1; i_8 < 16; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) arr_8 [i_2] [i_3]);
                                arr_23 [i_2] [i_3] [i_3] [i_7] [i_6] = ((/* implicit */unsigned char) arr_19 [i_2] [i_6] [i_6] [i_6] [i_7]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = (-(((/* implicit */int) var_11)));
}
