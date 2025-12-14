/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156463
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
    var_11 = ((/* implicit */unsigned long long int) (short)-7767);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-3070)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-27421))))) ? (((/* implicit */int) ((short) (short)6170))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_0))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (short)14656)), (-2046740008)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 9129519398911926477ULL)) && (((/* implicit */_Bool) (unsigned char)189))))) : (((/* implicit */int) (short)8192)))));
        arr_4 [(unsigned short)20] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 93589837)))) - (((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_0 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (287767033074273233ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41935))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    }
    for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) (((-(18446744073709551610ULL))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (arr_2 [i_1])))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) ((signed char) (unsigned short)23595)))));
                    arr_14 [i_1] [i_2] [i_3] [(short)2] |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned short)21995))));
                    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) var_4)))));
                    var_16 = ((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned char)252)))) - (((((/* implicit */_Bool) arr_9 [i_1 + 1] [(short)7])) ? (((/* implicit */int) (short)-6860)) : (((/* implicit */int) arr_13 [i_1 + 2]))))));
                }
            } 
        } 
        var_17 += ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)43)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (short)-14660)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned char)3)))))));
        arr_15 [i_1 - 2] = ((/* implicit */long long int) var_8);
    }
}
