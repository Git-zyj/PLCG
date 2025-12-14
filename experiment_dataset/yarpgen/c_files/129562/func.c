/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129562
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
    var_15 = ((/* implicit */int) var_6);
    var_16 |= ((/* implicit */short) min((((var_14) / (((/* implicit */long long int) ((((/* implicit */_Bool) (short)18114)) ? (-1631383374) : (((/* implicit */int) (signed char)56))))))), (((/* implicit */long long int) var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_3 [14] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((((/* implicit */int) var_7)) << (((1196549848) - (1196549845))))) : (min((1196549848), (-1196549847)))))) ? (((/* implicit */int) (short)-3482)) : (((int) -1196549846))));
                var_18 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_0])) && (((/* implicit */_Bool) (short)7390))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_2 [i_1] [i_1] [i_0])))));
                var_19 = ((/* implicit */long long int) (!((!((!(((/* implicit */_Bool) arr_0 [(signed char)12]))))))));
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_0 [i_1]);
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 8285169326579046480LL))))) != (((/* implicit */int) (unsigned short)50900))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (short i_3 = 4; i_3 < 19; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((min(((~(-6))), ((~(((/* implicit */int) (signed char)54)))))), (((arr_17 [i_2] [i_3 + 1] [i_4] [i_3 - 3] [i_6]) & (arr_17 [i_2] [i_3] [(short)11] [i_3 - 1] [i_5])))));
                                var_21 = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) var_11)), (-1196549848))))))), (max((arr_7 [i_3 - 3]), (arr_7 [i_3 - 1])))));
                                var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((arr_13 [i_6] [i_4] [i_3] [i_2]), (((/* implicit */long long int) -1196549847))))) ? (((/* implicit */int) var_7)) : (arr_8 [i_4]))), (((/* implicit */int) arr_7 [i_6]))));
                                var_23 = (-(max((arr_17 [0ULL] [i_3] [i_3] [i_3] [i_3 + 1]), (504910820))));
                                arr_20 [i_2] [i_3] [(short)2] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_3 - 4] [i_3 - 3]), (arr_10 [i_3 - 4] [i_3 - 3]))))) ^ ((((~(300886664434947095ULL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2])))))))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_2] [(unsigned char)6] &= ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1196549857)) ? (-1377788252) : (2009880837)))), (((((/* implicit */unsigned int) 2055684934)) ^ (12U))))));
                arr_22 [i_2] [i_3] = ((/* implicit */short) (~(max((max((((/* implicit */unsigned int) (unsigned short)27236)), (arr_9 [0ULL] [i_3]))), (((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_2] [i_2]))))));
                arr_23 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_12) ^ ((~(((/* implicit */int) var_13))))))) ? (((/* implicit */int) max((arr_14 [(short)13] [i_3 - 1] [i_3] [(short)13]), (arr_14 [i_3] [i_3 - 2] [i_3] [i_3])))) : (((/* implicit */int) var_10))));
                var_24 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1196549847)) ? (((((/* implicit */_Bool) 2855506689U)) ? (3U) : (((/* implicit */unsigned int) 573546767)))) : (((/* implicit */unsigned int) -2055684939))))) ? (min((arr_11 [i_3] [i_3 - 4] [i_2]), (((/* implicit */int) var_6)))) : ((+(arr_17 [i_2] [i_2] [i_3] [i_3] [i_3 + 1]))));
            }
        } 
    } 
}
