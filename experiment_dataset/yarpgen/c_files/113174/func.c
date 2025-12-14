/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113174
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [(signed char)2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_8), (((/* implicit */int) var_10))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) var_6)))) < (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_14) ? (var_6) : (((/* implicit */int) arr_1 [i_0]))))), ((+(7773069458439643837LL))))))));
        var_15 &= ((/* implicit */short) max((((long long int) arr_2 [i_0] [i_0])), (((/* implicit */long long int) max((((/* implicit */int) arr_1 [i_0])), (arr_2 [7ULL] [i_0]))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */signed char) var_14)), (((signed char) arr_1 [i_1]))));
            arr_9 [i_1] [i_1] = ((/* implicit */signed char) var_9);
        }
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0]);
            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) != (max((881080899U), (((/* implicit */unsigned int) arr_10 [i_2] [i_2] [i_0])))))) ? (((/* implicit */int) (((-(arr_4 [i_0] [(unsigned char)7]))) != (((((/* implicit */int) arr_11 [i_2])) % (var_9)))))) : ((-(((/* implicit */int) ((short) var_13)))))));
        }
        arr_13 [i_0] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)67))) : (((((arr_7 [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_6 [i_0] [i_0]))))))));
    }
    for (unsigned char i_3 = 4; i_3 < 6; i_3 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) arr_1 [i_3 - 1]))))) ? (((int) arr_1 [i_3 - 1])) : (((/* implicit */int) max((arr_1 [i_3 - 1]), (arr_1 [i_3 - 1]))))));
        arr_17 [i_3] [i_3] &= ((/* implicit */unsigned short) ((unsigned int) 26));
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) arr_5 [i_3]);
        arr_19 [4U] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((long long int) 3413886401U))) ? (((((/* implicit */_Bool) arr_7 [i_3 - 3])) ? (((/* implicit */int) (unsigned short)7025)) : (var_5))) : (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) ((unsigned char) 1)))));
        var_18 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3])) ? (var_6) : (((/* implicit */int) arr_16 [i_3]))))) ? (((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_2)) : (var_11))) : (((((/* implicit */int) var_2)) >> (((var_5) - (966271248))))))) & (1073741823)));
    }
    for (unsigned char i_4 = 1; i_4 < 23; i_4 += 3) 
    {
        arr_22 [i_4] [i_4] = var_9;
        arr_23 [(short)11] = ((/* implicit */signed char) arr_20 [i_4]);
        arr_24 [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)29696)) >= (((/* implicit */int) ((unsigned char) (short)(-32767 - 1))))));
        arr_25 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (+(var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_19 = ((/* implicit */short) ((unsigned char) max((((((/* implicit */int) (short)-29696)) % (((/* implicit */int) (unsigned char)105)))), (((/* implicit */int) arr_27 [i_5])))));
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            arr_31 [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) (signed char)-67)) < (((/* implicit */int) (short)-28810)))))))) : (((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))) : (297854208570657003ULL)))));
            arr_32 [i_5] [i_5] = ((((/* implicit */int) arr_27 [i_5])) * (((((((/* implicit */int) arr_29 [i_5] [i_5] [i_5])) >> (((((/* implicit */int) arr_27 [i_5])) - (174))))) * (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_29 [i_5] [i_5] [i_5])))))));
        }
        arr_33 [8] [i_5] &= ((/* implicit */short) max((((/* implicit */int) ((var_5) >= (((/* implicit */int) arr_28 [i_5]))))), (((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_26 [12] [i_5])) : (((/* implicit */int) ((((/* implicit */int) var_12)) != (var_11))))))));
    }
    var_20 = ((/* implicit */unsigned char) var_2);
}
