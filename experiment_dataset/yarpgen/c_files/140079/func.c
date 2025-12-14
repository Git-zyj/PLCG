/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140079
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_18 -= ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_19 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) max((arr_0 [i_0]), ((short)-28069)))), (max((((/* implicit */int) (short)-28055)), (900832387))))))));
        var_20 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28057)) ? (((/* implicit */int) arr_0 [i_0])) : (var_10)))) ? (3896189976706991948LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)28068))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) arr_2 [i_1 - 1]));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)28068))))) : ((+(9223372036854775807LL)))));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_8 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)28053)) : (((/* implicit */int) (short)28054))))) ? (max((var_10), (((/* implicit */int) arr_3 [i_2] [i_2])))) : (((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))) : ((-(max((arr_7 [i_2]), (((/* implicit */int) var_9))))))));
        var_22 |= ((/* implicit */unsigned char) ((((((/* implicit */int) min(((short)-28055), (((/* implicit */short) (unsigned char)96))))) + (2147483647))) >> ((((~(((((/* implicit */_Bool) arr_3 [i_2] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))) + (7)))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_11 [i_3] [i_3] = (-(((/* implicit */int) arr_9 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 21; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 3) 
                        {
                            {
                                var_23 &= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)226))));
                                var_24 |= ((/* implicit */_Bool) arr_18 [i_3] [i_3]);
                            }
                        } 
                    } 
                    arr_25 [i_5] [i_4] [i_3] [i_3] = ((/* implicit */short) var_1);
                }
            } 
        } 
        arr_26 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-119))))) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3]))));
        var_25 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
    }
    /* LoopSeq 1 */
    for (int i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        arr_29 [i_8] [i_8] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((unsigned int) var_15))))) ? (((/* implicit */int) max(((unsigned char)30), (((/* implicit */unsigned char) arr_27 [i_8]))))) : (((/* implicit */int) ((_Bool) (short)-28070)))));
        arr_30 [i_8] [i_8] |= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (min((arr_28 [i_8]), (((/* implicit */unsigned int) var_5)))))));
        var_26 = ((/* implicit */unsigned long long int) min((min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_27 [i_8]))))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) max((var_13), (((/* implicit */signed char) arr_27 [i_8]))))), (var_12))))));
        arr_31 [i_8] = ((/* implicit */int) var_15);
        arr_32 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((var_7), (((/* implicit */unsigned long long int) arr_27 [i_8])))) << ((((~(arr_28 [i_8]))) - (1949276451U)))))) ? (max((((var_6) ^ (((/* implicit */long long int) arr_28 [i_8])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))))), (var_6)))));
    }
    /* LoopNest 2 */
    for (unsigned char i_9 = 3; i_9 < 12; i_9 += 3) 
    {
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            {
                var_27 = ((/* implicit */signed char) ((var_6) > (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-28070)), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28042))) : (min((arr_28 [i_9]), (3445989285U))))))));
                arr_39 [i_9] [i_9] |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_19 [i_9] [i_9] [i_9] [i_9] [i_9])), (min((var_6), (((/* implicit */long long int) 848978033U))))))) ? (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9]))) : (var_1))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_9]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)53136)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))) : (4294967295U))))))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_9])))) : (((/* implicit */int) (_Bool)0))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((12U), (((/* implicit */unsigned int) arr_4 [i_10]))))))));
            }
        } 
    } 
}
