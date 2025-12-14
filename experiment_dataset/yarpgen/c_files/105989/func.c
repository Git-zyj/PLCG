/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105989
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
    var_10 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_0))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_11 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(max((arr_0 [i_0]), (((/* implicit */int) var_6)))))))));
                    var_12 ^= ((/* implicit */long long int) arr_2 [i_1] [i_1]);
                    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) 12ULL))));
                    arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551591ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))) : (25ULL)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
    {
        for (signed char i_4 = 3; i_4 < 12; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 11; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (signed char i_7 = 2; i_7 < 12; i_7 += 3) /* same iter space */
                            {
                                var_14 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_7 + 1] [i_3 + 1]))));
                                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_25 [i_3 + 1] [i_4] [i_5] [i_6] [i_7 - 1])) >> (((/* implicit */int) ((9037746575355169533ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126)))))))) % (((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (arr_0 [i_4 - 2]) : (arr_0 [i_4 - 3])))));
                                var_16 ^= max((((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3] [i_3]))) : (arr_13 [i_3] [i_5] [i_6])))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1343980009109934173ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_3] [i_5] [i_6]))))) <= (arr_4 [i_5 + 2] [i_4 - 1] [i_7 + 1])))));
                            }
                            for (signed char i_8 = 2; i_8 < 12; i_8 += 3) /* same iter space */
                            {
                                arr_28 [i_4] [i_4] [i_5] [i_6] [i_8] = ((/* implicit */unsigned int) ((unsigned char) (+(((((/* implicit */int) (unsigned char)10)) << (((3576106358054083058ULL) - (3576106358054083033ULL))))))));
                                var_17 ^= ((unsigned int) arr_4 [i_4] [i_4 - 2] [i_4 - 3]);
                            }
                            /* vectorizable */
                            for (signed char i_9 = 2; i_9 < 12; i_9 += 3) /* same iter space */
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) 0U)) % (arr_24 [0] [i_4 - 1] [0] [i_4] [i_4 - 1])))))));
                                var_19 = ((/* implicit */short) ((arr_10 [i_3]) > (((/* implicit */unsigned long long int) arr_21 [i_3 + 1] [i_4 - 1]))));
                                arr_32 [i_4] [(unsigned char)4] = ((/* implicit */unsigned long long int) arr_19 [i_3 + 1] [i_3 - 1]);
                            }
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((((/* implicit */_Bool) 1343980009109934163ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) : (18446744073709551615ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))))))));
                        }
                    } 
                } 
                arr_33 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) ((unsigned short) max((var_0), (((/* implicit */unsigned int) ((unsigned char) arr_14 [i_3] [i_3] [i_3]))))));
                var_21 = ((/* implicit */signed char) ((((((/* implicit */int) arr_22 [i_3 + 1] [i_4 - 3] [i_4 + 1])) - (((/* implicit */int) arr_22 [i_3 + 1] [i_4 - 1] [i_4 + 1])))) % (((/* implicit */int) ((unsigned short) arr_22 [i_3 + 1] [i_4 - 3] [i_4 + 1])))));
                arr_34 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)31910)) ? (arr_26 [i_4 + 1] [i_4] [(signed char)0] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))))) - (((/* implicit */int) arr_2 [i_3 + 1] [(unsigned char)14]))));
                arr_35 [i_4] = ((/* implicit */signed char) ((min((14620594784632923314ULL), (((/* implicit */unsigned long long int) (unsigned short)33632)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92)))));
            }
        } 
    } 
    var_22 += ((/* implicit */long long int) var_6);
}
