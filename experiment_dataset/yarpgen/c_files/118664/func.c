/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118664
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
    var_17 = var_15;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */short) arr_0 [(signed char)2] [(signed char)2]);
                arr_5 [i_1] &= ((/* implicit */int) (-(min((((/* implicit */long long int) ((((/* implicit */int) (short)-21536)) ^ (((/* implicit */int) arr_0 [i_0] [i_1]))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (6425656110666785237LL)))))));
                arr_6 [i_0] = ((/* implicit */long long int) ((-6425656110666785255LL) <= (((/* implicit */long long int) 724009842U))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) - (((((/* implicit */_Bool) (-(1992375887409106397ULL)))) ? (((/* implicit */long long int) arr_7 [i_2] [i_1])) : (((long long int) var_10))))));
                    var_20 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))), (arr_7 [i_1] [i_1]))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) ? (arr_7 [i_0] [i_2]) : (1819851482U))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] = (+((-(arr_11 [i_4 - 1] [i_4 - 1] [i_2] [i_3 + 1] [i_4 - 1]))));
                                arr_16 [(unsigned short)10] [i_1] [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_10 [i_4 + 3] [i_4 - 1] [i_4 - 1] [i_4 + 3] [i_4 + 3])), (min((16454368186300445223ULL), (((/* implicit */unsigned long long int) var_12))))))) ? (((((/* implicit */int) arr_9 [i_4] [i_4 - 1] [i_4] [i_4 + 1])) >> (((arr_11 [(_Bool)1] [i_3 + 1] [(unsigned char)0] [i_0] [i_0]) + (144695206))))) : (((((((((/* implicit */int) arr_1 [i_3])) + (2147483647))) >> (9ULL))) >> (((((((/* implicit */_Bool) var_5)) ? (arr_4 [i_2] [i_3 + 1]) : (arr_11 [i_0] [(unsigned char)10] [(signed char)4] [i_0] [i_4]))) + (1507022532)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
