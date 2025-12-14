/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124183
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
    var_12 = ((((/* implicit */_Bool) ((min((var_3), (((/* implicit */long long int) var_11)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)64769)) : (((/* implicit */int) var_6)))))))) ? (((/* implicit */int) ((var_8) > (((((/* implicit */int) (unsigned short)64769)) + (((/* implicit */int) (unsigned short)64738))))))) : (((/* implicit */int) (unsigned short)64769)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 += ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) <= (9223372036854775807LL))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-17564))))), (((min((262143U), (((/* implicit */unsigned int) (unsigned char)255)))) & ((-(arr_1 [i_0])))))));
        var_14 = ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) (unsigned short)64761)), (0U)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */short) (-(arr_6 [i_1])));
                        arr_15 [i_2] [i_4] [i_2] [i_4] = ((/* implicit */short) arr_14 [i_1] [i_1] [i_1] [i_1]);
                        arr_16 [i_1] [i_1] [i_2] [i_2] [(short)6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-24287))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_5 [i_4]))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_12 [i_1])) : (2)));
        var_18 = (~(((/* implicit */int) arr_12 [i_1])));
    }
    for (short i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-3) | (((/* implicit */int) (unsigned short)61021))))) ? (((arr_4 [i_5] [i_5]) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */int) (short)-18706)) : (((/* implicit */int) arr_12 [i_5]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5] [i_5])) ? (var_1) : (((/* implicit */int) arr_7 [i_5]))))) ? (((arr_1 [i_5]) ^ (((/* implicit */unsigned int) 963665879)))) : (((/* implicit */unsigned int) arr_0 [17ULL])))))));
        var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((arr_11 [i_5] [4U] [i_5] [i_5]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5])))))) < (((((((/* implicit */_Bool) arr_0 [i_5])) || (((/* implicit */_Bool) arr_17 [i_5])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)125))))) : (((((arr_2 [(unsigned char)6]) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-24271)) + (24316))) - (45)))))))));
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) -2)) ? (var_2) : (2354100607U))) | (((/* implicit */unsigned int) arr_0 [i_5])))) != (228720354U)));
    }
    var_21 = ((/* implicit */int) var_10);
    var_22 = ((/* implicit */unsigned long long int) var_2);
}
