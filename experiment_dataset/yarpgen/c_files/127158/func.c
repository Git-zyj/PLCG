/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127158
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [i_1] [i_1] = ((signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_2 + 1] [i_2])) ? (((/* implicit */unsigned int) arr_5 [i_1] [i_2 + 1] [i_1])) : (var_14)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
                    {
                        arr_13 [i_1] [14LL] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_3]))))) : (((((/* implicit */_Bool) (signed char)-97)) ? (var_12) : (((/* implicit */int) arr_0 [i_1] [i_1]))))));
                        var_15 = ((/* implicit */unsigned long long int) (((-(var_13))) > ((-(var_2)))));
                        var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)16] [i_2 + 2]))) ^ ((+(4294967232U))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), ((~(var_9)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                    {
                        arr_16 [i_4] [i_2] [8U] [8U] [i_1] [i_0] &= ((/* implicit */signed char) var_1);
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50802)) ? (arr_12 [i_0 - 1] [i_1] [i_1] [4ULL]) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1] [i_1])) : (((unsigned int) var_11))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_1]))))) : (max((6906859526045205941LL), (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (arr_4 [i_1] [i_4]))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            arr_21 [i_0] [(signed char)0] [i_2] [i_1] [(signed char)0] = ((/* implicit */int) ((max((var_0), (arr_19 [i_1] [i_1]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_19 [i_1] [i_1]))))));
                            arr_22 [i_1] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_8)), (arr_15 [i_0 + 1] [i_0 - 1] [i_0 + 1] [1U] [i_2 - 2] [i_2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))));
                        }
                        arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_13)) == (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */long long int) var_9)) ^ (-6906859526045205941LL))) : (((long long int) arr_1 [i_0]))))));
                        var_19 |= ((/* implicit */int) var_3);
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) 12262019421066642074ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) + (arr_26 [i_0 + 1]))) : (((/* implicit */unsigned int) arr_5 [22U] [22U] [i_7])))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 - 1]))))))));
                            var_21 = ((/* implicit */unsigned int) max((((((((/* implicit */int) var_8)) + (((/* implicit */int) arr_0 [i_0] [i_0])))) << (((6906859526045205957LL) - (6906859526045205942LL))))), (((/* implicit */int) var_6))));
                        }
                        arr_29 [i_0] [i_1] [i_2] [i_1] [10ULL] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((min((((/* implicit */int) (!(((/* implicit */_Bool) 2038947082U))))), (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */int) (signed char)-100)))))) + (2147483647))) << (((((/* implicit */int) (((~(arr_12 [i_0] [i_1] [i_1] [i_6]))) <= (((/* implicit */int) (unsigned short)28688))))) - (1)))))) : (((/* implicit */unsigned short) ((((min((((/* implicit */int) (!(((/* implicit */_Bool) 2038947082U))))), (((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */int) (signed char)-100)))))) + (2147483647))) << (((((((((/* implicit */int) (((~(arr_12 [i_0] [i_1] [i_1] [i_6]))) <= (((/* implicit */int) (unsigned short)28688))))) - (1))) + (29))) - (28))))));
                        var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((6906859526045205957LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-16)))))))) ? (arr_19 [(unsigned short)4] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_11 [16U] [16U] [16U] [i_2]))))));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7740562954484329230LL)) || (((/* implicit */_Bool) ((signed char) max((((/* implicit */long long int) var_13)), (var_4)))))));
    var_24 = ((/* implicit */signed char) var_8);
}
