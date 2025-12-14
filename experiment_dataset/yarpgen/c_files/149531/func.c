/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149531
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-16), (arr_5 [i_0] [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_15 -= ((/* implicit */signed char) var_7);
                            var_16 &= ((/* implicit */unsigned char) (+(1875972964U)));
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                            {
                                var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) & (1875972964U)));
                                var_18 -= ((/* implicit */unsigned char) max((max((arr_6 [i_2 + 2]), (((/* implicit */unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) ((arr_9 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((var_5), ((signed char)-100))))))))));
                            }
                            for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                            {
                                var_19 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_17 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 - 1]))) ? (((/* implicit */int) var_9)) : ((~(((/* implicit */int) var_2))))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1772491168U)), (1455526831257935195LL)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (735379324311497827ULL))))) : (((unsigned long long int) var_9))));
                                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((arr_12 [i_1] [i_2] [i_2 + 1] [i_3] [i_5]) + (9223372036854775807LL))) >> (((/* implicit */int) var_7)))))));
                                var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))) : (var_4))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2])))))));
                                arr_19 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) % (min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])), (((arr_6 [i_3]) << (((/* implicit */int) var_7))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        arr_22 [i_6] = ((/* implicit */unsigned short) ((((-7227590377945767411LL) + (9223372036854775807LL))) >> (((/* implicit */int) ((signed char) 3692513042U)))));
        arr_23 [10U] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)55338)) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) arr_20 [i_6]))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (arr_0 [i_6] [i_6])));
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned long long int) var_1);
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
        arr_29 [i_7] = ((/* implicit */unsigned short) var_7);
        var_24 = ((/* implicit */short) -7227590377945767411LL);
    }
}
