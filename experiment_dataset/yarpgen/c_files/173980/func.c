/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173980
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
    var_13 = (-(((((/* implicit */_Bool) min((1152851135862669312ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_11)) ? (1152851135862669312ULL) : (((/* implicit */unsigned long long int) var_11)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : ((+(4294967295U))))), (((/* implicit */unsigned int) var_5))));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_15 = ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_12 [i_0] [(signed char)1] [i_0] [(signed char)1] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(signed char)15])) : ((-2147483647 - 1)))), (((/* implicit */int) arr_4 [i_1] [i_3]))))) ^ ((~(var_4))));
                                var_16 |= ((/* implicit */short) max((max((((((/* implicit */_Bool) var_12)) ? (17873661021126656LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) (+((-2147483647 - 1))))))), (((/* implicit */long long int) min((((unsigned int) 2147483647)), (((/* implicit */unsigned int) var_1)))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) 2147483647);
                                arr_20 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) & (((/* implicit */int) var_1))));
                                arr_21 [i_0] [i_5] = min((2177753569U), (min((((/* implicit */unsigned int) 2147483641)), (min((((/* implicit */unsigned int) 2147483621)), (var_4))))));
                            }
                        } 
                    } 
                }
                for (int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_7] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (unsigned char)226))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(_Bool)1] [i_1 - 2]))) : (2161727821137838080ULL))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_7])), (arr_22 [i_1] [i_1 - 2] [i_7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)119)) & (((/* implicit */int) (unsigned short)65535))))) : ((+(33776997205278720ULL))))));
                    var_19 = ((/* implicit */unsigned int) var_11);
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 21; i_8 += 3) 
                    {
                        for (short i_9 = 3; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(var_3))))));
                                var_21 -= ((/* implicit */unsigned char) -2147483647);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) -17873661021126656LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (17293892937846882304ULL))), (1152851135862669312ULL))))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_7)))))))))))));
}
