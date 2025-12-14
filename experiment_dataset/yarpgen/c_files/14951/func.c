/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14951
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_12 &= (signed char)-108;
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) min(((unsigned char)182), (((/* implicit */unsigned char) (signed char)72))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) (~((~((~(arr_11 [i_4 - 1] [(unsigned short)0] [i_1] [11LL])))))));
                                var_14 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)177))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_13 [i_0] [(short)5] [(_Bool)1] [i_0 + 1] [i_0] [(signed char)6])) : (((/* implicit */int) arr_5 [i_5] [i_1] [i_0]))))) ? (arr_10 [i_5] [i_5] [i_1] [i_1] [(unsigned short)0] [2ULL]) : (((/* implicit */int) arr_1 [(short)9]))));
                    var_16 = ((/* implicit */int) (!(((((/* implicit */_Bool) 440739534595821542ULL)) && (((/* implicit */_Bool) (unsigned char)84))))));
                    var_17 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (signed char)72))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_11);
}
