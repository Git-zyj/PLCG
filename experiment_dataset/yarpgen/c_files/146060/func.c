/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146060
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)-15392);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))) < (3514529937U)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15389)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_18 = ((/* implicit */short) arr_5 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_1]))))) : (((unsigned int) var_13))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_1] [3U] [i_1] [i_2] [i_4] = ((((/* implicit */long long int) ((((/* implicit */unsigned int) max((((/* implicit */int) var_8)), (var_16)))) / (max((var_1), (((/* implicit */unsigned int) (_Bool)1))))))) ^ (max((((((/* implicit */_Bool) 18446744073709551613ULL)) ? (var_5) : (var_6))), (((/* implicit */long long int) (+(var_1)))))));
                        arr_15 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? ((((_Bool)1) ? (var_14) : (((/* implicit */int) arr_12 [i_2] [i_1])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (var_12)))))) ? (((((var_6) + (9223372036854775807LL))) >> (((var_15) + (1883878267))))) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((var_7) >= (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) arr_8 [i_5])) : (((/* implicit */int) (unsigned char)230))))))) ? (((((/* implicit */_Bool) var_14)) ? (min((var_6), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) var_3))));
        var_20 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_5]))))) ? ((~(arr_6 [i_5] [i_5]))) : (((((/* implicit */int) (short)-15377)) / (((/* implicit */int) (signed char)(-127 - 1))))));
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20304)) << (((((/* implicit */int) (unsigned short)45232)) - (45230)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((11011718875054944863ULL) >= (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */int) var_11))))))))) : (((((/* implicit */long long int) ((unsigned int) var_5))) * (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))) : (0LL)))))));
    }
    /* LoopSeq 2 */
    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        arr_21 [i_6] = ((unsigned int) (signed char)-101);
        arr_22 [i_6] = ((/* implicit */unsigned int) ((_Bool) ((unsigned int) (signed char)127)));
        arr_23 [i_6] [i_6] = ((/* implicit */signed char) (unsigned char)161);
    }
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        var_22 = var_16;
        arr_26 [i_7] [i_7] = ((/* implicit */signed char) (+(var_12)));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_7])) ? (((/* implicit */int) (short)-10890)) : (((/* implicit */int) var_2)))))));
    }
}
