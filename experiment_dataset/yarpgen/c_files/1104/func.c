/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1104
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */int) max(((signed char)-117), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_12 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) * (var_10)));
        var_13 = ((/* implicit */short) (+(((/* implicit */int) (signed char)110))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_1])))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [18U])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))))));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)54))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : ((+(863732543U)))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    {
                        var_16 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [3ULL] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1216038045U)))) ? (arr_8 [i_3 + 1] [i_3 - 1]) : (((/* implicit */unsigned long long int) var_5)));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (1346056877U) : (var_2)))) ? (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (_Bool)0)) : (-1989017078))) : (((/* implicit */int) ((arr_13 [i_2] [i_4]) != (((/* implicit */long long int) arr_11 [i_3] [i_3] [(_Bool)1])))))));
                        var_18 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) var_6)));
                    }
                } 
            } 
        } 
        var_19 |= ((/* implicit */signed char) ((arr_15 [i_2]) ? (arr_11 [5LL] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114)))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 3; i_6 < 12; i_6 += 1) 
    {
        var_20 = arr_11 [i_6] [i_6] [i_6];
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)127))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)81))))) : (((long long int) arr_4 [i_6]))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (1346056877U) : (((/* implicit */unsigned int) 1989017069)))))));
    }
    var_23 -= ((/* implicit */unsigned int) var_0);
    var_24 = ((/* implicit */unsigned char) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
}
