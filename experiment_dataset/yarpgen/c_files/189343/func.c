/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189343
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) 21ULL);
        var_15 -= ((18446744073709551594ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (7749574579073736460LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] [(short)3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (signed char)0))) > (((/* implicit */int) (signed char)-63))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)0)));
                        arr_12 [i_3] = ((/* implicit */signed char) 2);
                        var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_2] [8LL]))) >= (var_14)))) >= (((/* implicit */int) max(((unsigned char)48), (((/* implicit */unsigned char) (signed char)-12)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */signed char) ((arr_4 [i_4] [i_4]) >= (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) arr_11 [i_4] [12LL] [i_4] [i_4] [i_4] [i_4])))))));
        var_19 = ((/* implicit */unsigned long long int) (signed char)-127);
        var_20 = ((/* implicit */long long int) arr_15 [i_4]);
        var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) + (((/* implicit */int) (signed char)-117))));
    }
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-105)) ? (25LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))))))));
}
