/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166275
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
    var_10 -= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))) : (((unsigned long long int) 4294967295U)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_11 -= ((/* implicit */unsigned int) min((((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_1])) - (((/* implicit */int) arr_6 [i_2 - 1] [i_2] [i_1])))), ((~(((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))));
                            var_12 |= ((/* implicit */long long int) 18446744073709551615ULL);
                            var_13 = ((/* implicit */_Bool) max((var_13), ((!(((max((4294967283U), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_2])))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)34)) ? ((-2147483647 - 1)) : (476946666))))))))));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((long long int) (unsigned char)56)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_4 + 1] [i_4 + 1])) : (arr_5 [i_4 + 2] [i_4 + 2] [i_1])))) ? ((+(((4294967283U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (4194303U)));
                            var_16 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_4 + 3] [i_5]))) < (4294967295U)))) >> (((((/* implicit */int) (signed char)-91)) + (95)))));
                            var_17 += ((/* implicit */unsigned short) (-((-(arr_8 [i_4] [i_4] [i_4 + 1] [11])))));
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)88))) : (-7045674197151598279LL))))));
                            var_19 = ((/* implicit */int) arr_3 [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_9))));
    var_21 ^= ((/* implicit */unsigned char) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) (~(-1)))) ? (((/* implicit */int) (unsigned char)167)) : ((~(((/* implicit */int) var_6))))))));
}
