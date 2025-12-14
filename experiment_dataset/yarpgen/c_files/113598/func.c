/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113598
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 - 2])) ? ((+(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_5 [i_0] [i_1] [i_1]))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & (arr_3 [i_0 + 1])))), (arr_0 [9ULL])))));
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 8; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) min((arr_10 [i_0] [3U] [i_4]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [(unsigned char)6]))))) ? ((-(arr_2 [(signed char)5] [i_3] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_4])))))))), ((~(min((var_8), (((/* implicit */unsigned int) arr_4 [i_3] [i_4]))))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) > (((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [i_2] [i_3] [i_4])) : (((/* implicit */int) (signed char)93)))))))) + (((unsigned long long int) (-(((/* implicit */int) var_7)))))));
                                var_14 = ((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0 - 1] [i_1] [i_0])), (arr_6 [i_0] [i_0] [i_2] [i_2 + 1])))) * (((/* implicit */int) max(((unsigned short)448), (((/* implicit */unsigned short) var_10))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (arr_1 [i_0 - 2] [i_1]) : (((/* implicit */long long int) arr_3 [i_0]))))) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_2 + 3])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_0 - 1]))))));
                                var_15 ^= ((/* implicit */signed char) (-(min((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2 + 3])), (max((((/* implicit */unsigned int) var_4)), (var_8)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((0U) < (var_0))))) : (var_12)))) ? (4294967289U) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)193)))))) : ((~(var_8)))))));
}
