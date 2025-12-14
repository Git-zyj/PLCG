/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133996
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
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (short)2048);
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((max((((/* implicit */int) arr_5 [i_0] [i_0] [1ULL])), (arr_3 [i_0] [i_0 - 4] [i_0]))) >> (((((/* implicit */int) var_9)) + (10)))))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */int) (short)2048)) : (((/* implicit */int) (short)-2049))));
                            var_17 = arr_5 [(signed char)20] [i_0] [i_2 + 2];
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_1] [i_0 + 1]))));
                /* LoopSeq 3 */
                for (signed char i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    var_19 = ((/* implicit */int) arr_1 [i_1] [i_4 + 1]);
                    arr_12 [i_1] [i_0] = ((/* implicit */unsigned int) arr_2 [14U] [i_4 - 1] [i_4 + 1]);
                    arr_13 [1ULL] [i_1] = ((/* implicit */short) arr_6 [i_1] [i_1] [i_1] [i_1]);
                    arr_14 [i_0 + 1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */_Bool) max((arr_9 [i_4 - 1] [i_0 - 4] [9U] [i_1]), (((/* implicit */unsigned int) max((arr_5 [i_4 + 1] [i_0 - 1] [i_4]), (arr_5 [i_4 - 1] [i_0 + 1] [i_4]))))));
                }
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                arr_24 [i_5] [(unsigned char)10] [i_5] [i_6] [i_7] = ((/* implicit */signed char) (short)-2042);
                                arr_25 [i_0] [i_1] [i_5] [i_6] [i_1] [i_5] [i_7] = ((/* implicit */short) ((unsigned int) arr_21 [i_0 - 1] [i_0 - 2] [i_0 - 2]));
                            }
                        } 
                    } 
                    var_20 = (i_5 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-2049))) != (arr_23 [i_0 - 4] [i_0 - 3] [i_1] [i_5] [i_5])))) << (((max((((/* implicit */long long int) arr_19 [i_5] [i_1] [i_0])), (arr_23 [i_5] [i_5] [i_0] [i_1] [i_5]))) - (3039265801229355631LL)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-2049))) != (arr_23 [i_0 - 4] [i_0 - 3] [i_1] [i_5] [i_5])))) << (((((max((((/* implicit */long long int) arr_19 [i_5] [i_1] [i_0])), (arr_23 [i_5] [i_5] [i_0] [i_1] [i_5]))) - (3039265801229355631LL))) - (4016697381724264070LL))))));
                }
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (short)2059))));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 2] [i_0 - 3])) - (6986)))))) ? (max((var_2), (((/* implicit */unsigned long long int) (short)2040)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 - 4] [i_0 - 1] [i_0 - 3])) ? (((/* implicit */int) (short)2042)) : (((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0 - 2]))))))))));
                }
            }
        } 
    } 
    var_23 |= ((/* implicit */int) min((((var_5) ? (((var_4) * (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-2048))))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (short)-2043)) ? (((/* implicit */int) var_3)) : (var_7)))))));
}
