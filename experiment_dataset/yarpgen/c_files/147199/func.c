/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147199
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)209)), (var_5)))), ((+(0ULL))))) <= (((((/* implicit */_Bool) (unsigned char)46)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)23)) || (((/* implicit */_Bool) (unsigned char)46))))))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))) : (((/* implicit */unsigned long long int) 0LL)))) > (((max((12851716427374573693ULL), (((/* implicit */unsigned long long int) var_14)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((-5583663689016460655LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46)))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) (-((~(arr_1 [i_0] [i_1])))));
                        var_21 = ((/* implicit */long long int) min((var_21), (var_5)));
                        var_22 = arr_8 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2];
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_12))) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((arr_0 [i_1]) ? (-1) : (var_14)))));
                    }
                    for (int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) var_2);
                        var_24 = ((/* implicit */int) arr_3 [i_0] [i_2] [i_4]);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 18446744073709551615ULL);
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */signed char) 0ULL);
}
