/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150348
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
    var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */unsigned long long int) -1583818583)) : (((((/* implicit */_Bool) 1583818583)) ? (12278124482285475020ULL) : (((/* implicit */unsigned long long int) 4294967295U))))))) ? (((/* implicit */int) var_14)) : ((-(var_1)))));
    var_17 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_2)))) ? (((var_13) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((4521461773453257178LL) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */int) var_13)) : (((((/* implicit */int) var_13)) ^ (var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1 - 3] [5LL] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 2] [i_2])) ? (arr_5 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) var_10);
                        arr_14 [i_0] [i_1 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [(unsigned short)8] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_1 [i_1])))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2]))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            {
                                arr_22 [i_0] [i_1 + 1] [i_2] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) var_1);
                                var_18 = (-(((((/* implicit */_Bool) (short)-15191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)60))) : (12278124482285475020ULL))));
                                arr_23 [i_0] [i_1] [(short)12] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (short)-32762))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? ((~(((/* implicit */int) var_14)))) : (((/* implicit */int) ((unsigned char) var_9))))));
                }
            } 
        } 
    } 
}
