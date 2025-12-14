/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181664
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
    var_13 = ((/* implicit */short) (((!(((/* implicit */_Bool) (short)27543)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-22814))))) : (((/* implicit */int) (short)-27560))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((arr_4 [i_1]) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))) ? (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0 - 1])) : (((((((/* implicit */int) (short)-27549)) + (2147483647))) << (((((/* implicit */int) (short)11405)) - (11405))))))) - (11909))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) var_8);
                        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_2])) : (((/* implicit */int) (unsigned char)174))))) ? (((var_6) ? (((/* implicit */int) arr_3 [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_3 - 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */signed char) var_6))))) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) : (((/* implicit */int) (!(arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0]))))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_1] [(short)1] [i_0]))) / (max((((/* implicit */long long int) (short)-27544)), ((-9223372036854775807LL - 1LL))))))));
                    }
                    for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 1) 
                    {
                        arr_17 [i_2] [1LL] [i_0] [i_0] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
                        arr_18 [i_4] [i_4] [i_4] [i_2] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) (short)-27560))), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) var_11)))) >= (((/* implicit */int) arr_6 [i_1] [i_2] [i_2])))))) : (max((16764923568467366223ULL), (((/* implicit */unsigned long long int) (unsigned short)65531))))));
                    }
                }
            } 
        } 
    } 
}
